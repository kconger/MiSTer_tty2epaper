#!/bin/sh
#
# tty2ePaper service
#

. /media/fat/tty2epaper/tty2epaper.conf

# Debug function
dbug() {
  if [ "${DEBUG}" = "true" ]; then
    if [ ! -e ${DEBUGFILE} ]; then                                              # log file not (!) exists (-e) create it
      echo "---------- tty2epaper Debuglog ----------" > ${DEBUGFILE}
    fi 
    echo "${1}" >> ${DEBUGFILE}                                                 # output debug text
  fi
}

# Send Core name over serial
senddata() {
  echo "${1}" > ${TTYDEV}                                                       # Instruct the device to load the appropriate picture
}

# Let's go
if [ -c "${TTYDEV}" ]; then                                                     # check for tty device
  echo -e "\n${TTYDEV} detected, setting Parameter: ${BAUDRATE} ${TTYPARAM}."
  dbug "${TTYDEV} detected, setting Parameter: ${BAUDRATE} ${TTYPARAM}."
  stty -F ${TTYDEV} ${BAUDRATE} ${TTYPARAM}                                     # set tty parameter
  sleep ${WAITSECS}
  echo "QWERTZ" > ${TTYDEV}                                                     # First Transmission to clear serial send buffer
  dbug "Send QWERTZ as first transmission"
  sleep ${WAITSECS}
  while true; do                                                                # main loop
    if [ -r ${CORENAMEFILE} ]; then                                             # proceed if file exists and is readable (-r)
      NEWCORE=$(cat ${CORENAMEFILE})                                            # get CORENAME
      echo "Read CORENAME: -${NEWCORE}-"
      dbug "Read CORENAME: -${NEWCORE}-"
      if [ "${NEWCORE}" != "${OLDCORE}" ]; then                                 # proceed only if Core has changed
        echo "Send -${NEWCORE}- to ${TTYDEV}."
        dbug "Send -${NEWCORE}- to ${TTYDEV}."
        senddata "${NEWCORE}"                                                   # The "Magic"
        OLDCORE="${NEWCORE}"                                                    # update oldcore variable
      fi                                                                        # end if core check
      inotifywait -e modify "${CORENAMEFILE}"                                   # wait here for next change of corename
    else                                                                        # CORENAME file not found
     echo "File ${CORENAMEFILE} not found!"
     dbug "File ${CORENAMEFILE} not found!"
    fi                                                                          # end if /tmp/CORENAME check
  done                                                                          # end while
else                                                                            # no tty detected
  echo "No ${TTYDEV} Device detected, abort."
  dbug "No ${TTYDEV} Device detected, abort."
fi                                                                              # end if tty check
# ** End Main **
