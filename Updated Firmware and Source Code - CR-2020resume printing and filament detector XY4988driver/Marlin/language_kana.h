/**
 * Japanese (Kana)
 *
 * LCD Menu Messages
 * See also documentation/LCDLanguageFont.md
 *
 */

#ifndef LANGUAGE_KANA_H
#define LANGUAGE_KANA_H

#define MAPPER_NON
// Define SIMULATE_ROMFONT to see what is seen on the character based display defined in Configuration.h
// #define SIMULATE_ROMFONT
#define DISPLAY_CHARSET_ISO10646_KANA

// 片仮名表示定義
#define KANA_WELCOME_MSG                         MACHINE_NAME " ready."
#define KANA_MSG_SD_INSERTED                     "\xb6\xb0\xc4\xde\x20\xbf\xb3\xc6\xad\xb3\xbb\xda\xcf\xbc\xc0" // "Card inserted"
#define KANA_MSG_SD_REMOVED                      "\xb6\xb0\xc4\xde\xb6\xde\xb1\xd8\xcf\xbe\xdd"                  // "Card removed"
#define KANA_MSG_MAIN                            "\xd2\xb2\xdd"                                                 // "Main"
#define KANA_MSG_AUTOSTART                       "\xbc\xde\xc4\xde\xb3\xb6\xb2\xbc"                             // "Autostart"
#define KANA_MSG_DISABLE_STEPPERS                "\xd3\xb0\xc0\xb0\xc3\xde\xdd\xb9\xde\xdd\x20\xb5\xcc"         // "Disable steppers"
#define KANA_MSG_AUTO_HOME                       "\xb9\xde\xdd\xc3\xdd\xc6\xb2\xc4\xde\xb3"                     // "Auto home"
#define KANA_MSG_SET_HOME_OFFSETS                "\xb7\xbc\xde\xad\xdd\xb5\xcc\xbe\xaf\xc4\xbe\xaf\xc3\xb2"     // "Set home offsets"
#define KANA_MSG_SET_ORIGIN                      "\xb7\xbc\xde\xad\xdd\xbe\xaf\xc4"                             // "Set origin"
#define KANA_MSG_PREHEAT_PLA                     "PLA \xd6\xc8\xc2"                                             // "Preheat PLA"
#define KANA_MSG_PREHEAT_PLA_N                   KANA_MSG_PREHEAT_PLA " "
#define KANA_MSG_PREHEAT_PLA_ALL                 KANA_MSG_PREHEAT_PLA " \xbd\xcd\xde\xc3"                            // " All"
#define KANA_MSG_PREHEAT_PLA_BEDONLY             KANA_MSG_PREHEAT_PLA " \xcd\xde\xaf\xc4\xde"                        // "Bed"
#define KANA_MSG_PREHEAT_PLA_SETTINGS            KANA_MSG_PREHEAT_PLA " \xbe\xaf\xc3\xb2"                            // "conf"
#define KANA_MSG_PREHEAT_ABS                     "ABS \xd6\xc8\xc2"                                             // "Preheat ABS"
#define KANA_MSG_PREHEAT_ABS_N                   KANA_MSG_PREHEAT_ABS " "
#define KANA_MSG_PREHEAT_ABS_ALL                 KANA_MSG_PREHEAT_ABS " \xbd\xcd\xde\xc3"                            // " All"
#define KANA_MSG_PREHEAT_ABS_BEDONLY             KANA_MSG_PREHEAT_ABS " \xcd\xde\xaf\xc4\xde"                        // "Bed"
#define KANA_MSG_PREHEAT_ABS_SETTINGS            KANA_MSG_PREHEAT_ABS " \xbe\xaf\xc3\xb2"                            // "conf"
#define KANA_MSG_COOLDOWN                        "\xb6\xc8\xc2\xc3\xb2\xbc"                                     // "Cooldown"
#define KANA_MSG_SWITCH_PS_ON                    "\xc3\xde\xdd\xb9\xde\xdd\x20\xb5\xdd"                         // "Switch power on"
#define KANA_MSG_SWITCH_PS_OFF                   "\xc3\xde\xdd\xb9\xde\xdd\x20\xb5\xcc"                         // "Switch power off"
#define KANA_MSG_EXTRUDE                         "\xb5\xbc\xc0\xde\xbc"                                         // "Extrude"
#define KANA_MSG_RETRACT                         "\xd8\xc4\xd7\xb8\xc4"                                         // "Retract"
#define KANA_MSG_MOVE_AXIS                       "\xbc\xde\xb8\xb2\xc4\xde\xb3"                                 // "Move axis"
#define KANA_MSG_MOVE_X                          "X\xbc\xde\xb8\x20\xb2\xc4\xde\xb3"                            // "Move X"
#define KANA_MSG_MOVE_Y                          "Y\xbc\xde\xb8\x20\xb2\xc4\xde\xb3"                            // "Move Y"
#define KANA_MSG_MOVE_Z                          "Z\xbc\xde\xb8\x20\xb2\xc4\xde\xb3"                            // "Move Z"
#define KANA_MSG_MOVE_E                          "\xb4\xb8\xbd\xc4\xd9\xb0\xc0\xde\xb0"                         // "Extruder"
#define KANA_MSG_MOVE_01MM                       "0.1mm \xb2\xc4\xde\xb3"                                       // "Move 0.1mm"
#define KANA_MSG_MOVE_1MM                        "  1mm \xb2\xc4\xde\xb3"                                       // "Move 1mm"
#define KANA_MSG_MOVE_10MM                       " 10mm \xb2\xc4\xde\xb3"                                       // "Move 10mm"
#define KANA_MSG_SPEED                           "\xbd\xcb\xdf\xb0\xc4\xde"                                     // "Speed"
#define KANA_MSG_NOZZLE                          "\xc9\xbd\xde\xd9"                                             // "Nozzle"
#define KANA_MSG_BED                             "\xcd\xde\xaf\xc4\xde"                                         // "Bed"
#define KANA_MSG_FAN_SPEED                       "\xcc\xa7\xdd\xbf\xb8\xc4\xde"                                 // "Fan speed"
#define KANA_MSG_FLOW                            "\xb5\xb8\xd8\xd8\xae\xb3"                                     // "Flow"
#define KANA_MSG_CONTROL                         "\xba\xdd\xc4\xdb\xb0\xd9"                                     // "Control"
#define KANA_MSG_MIN                             LCD_STR_THERMOMETER " Min"
#define KANA_MSG_MAX                             LCD_STR_THERMOMETER " Max"
#define KANA_MSG_FACTOR                          LCD_STR_THERMOMETER " Fact"
#define KANA_MSG_AUTOTEMP                        "\xbc\xde\xc4\xde\xb3\xb5\xdd\xc4\xde"                         // "Autotemp"
#define KANA_MSG_ON                              "On "
#define KANA_MSG_OFF                             "Off"
#define KANA_MSG_PID_P                           "PID-P"
#define KANA_MSG_PID_I                           "PID-I"
#define KANA_MSG_PID_D                           "PID-D"
#define KANA_MSG_PID_C                           "PID-C"
#define KANA_MSG_ACC                             "\xb6\xbf\xb8\xc4\xde"                                         // "Accel"
#define KANA_MSG_VXY_JERK                        "Vxy-jerk"
#define KANA_MSG_VZ_JERK                         "Vz-jerk"
#define KANA_MSG_VE_JERK                         "Ve-jerk"
#define KANA_MSG_VMAX                            "Vmax "
#define KANA_MSG_X                               "x"
#define KANA_MSG_Y                               "y"
#define KANA_MSG_Z                               "z"
#define KANA_MSG_E                               "e"
#define KANA_MSG_VMIN                            "Vmin"
#define KANA_MSG_VTRAV_MIN                       "VTrav min"
#define KANA_MSG_AMAX                            "Amax "
#define KANA_MSG_A_RETRACT                       "A-retract"
#define KANA_MSG_XSTEPS                          "Xsteps/mm"
#define KANA_MSG_YSTEPS                          "Ysteps/mm"
#define KANA_MSG_ZSTEPS                          "Zsteps/mm"
#define KANA_MSG_ESTEPS                          "Esteps/mm"
#define KANA_MSG_TEMPERATURE                     "\xb5\xdd\xc4\xde"                                             // "Temperature"
#define KANA_MSG_MOTION                          "\xb3\xba\xde\xb7\xbe\xaf\xc3\xb2"                             // "Motion"
#define KANA_MSG_VOLUMETRIC                      "\xcc\xa8\xd7\xd2\xdd\xc4"                                     // "Filament"
#define KANA_MSG_VOLUMETRIC_ENABLED              "E in mm3"
#define KANA_MSG_FILAMENT_DIAM                   "Fil. Dia."
#define KANA_MSG_DIAM_E1                         " 1"
#define KANA_MSG_DIAM_E2                         " 2"
#define KANA_MSG_DIAM_E3                         " 3"
#define KANA_MSG_DIAM_E4                         " 4"
#define KANA_MSG_CONTRAST                        "LCD\xba\xdd\xc4\xd7\xbd\xc4"                                  // "LCD contrast"
#define KANA_MSG_STORE_EPROM                     "\xd2\xd3\xd8\xcd\xb6\xb8\xc9\xb3"                             // "Store memory"
#define KANA_MSG_LOAD_EPROM                      "\xd2\xd3\xd8\xb6\xd7\xd6\xd0\xba\xd0"                         // "Load memory"
#define KANA_MSG_RESTORE_FAILSAFE                "\xbe\xaf\xc3\xb2\xd8\xbe\xaf\xc4"                             // "Restore failsafe"
#define KANA_MSG_SELECT_LANGUAGE                 "Language"                                                     // "Select language"
#define KANA_MSG_REFRESH                         "\xd8\xcc\xda\xaf\xbc\xad"                                     // "Refresh"
#define KANA_MSG_WATCH                           "\xb2\xdd\xcc\xab"                                             // "Info screen"
#define KANA_MSG_PREPARE                         "\xbc\xde\xad\xdd\xcb\xde\xbe\xaf\xc3\xb2"                     // "Prepare"
#define KANA_MSG_TUNE                            "\xc1\xae\xb3\xbe\xb2"                                         // "Tune"
#define KANA_MSG_PAUSE_PRINT                     "\xb2\xc1\xbc\xde\xc3\xb2\xbc"                                 // "Pause print"
#define KANA_MSG_RESUME_PRINT                    "\xcc\xdf\xd8\xdd\xc4\xbb\xb2\xb6\xb2"                         // "Resume print"
#define KANA_MSG_STOP_PRINT                      "\xcc\xdf\xd8\xdd\xc4\xc3\xb2\xbc"                             // "Stop print"
#define KANA_MSG_CARD_MENU                       "SD\xb6\xb0\xc4\xde\xb6\xd7\xcc\xdf\xd8\xdd\xc4"               // "Print from SD"
#define KANA_MSG_NO_CARD                         "SD\xb6\xb0\xc4\xde\xb6\xde\xb1\xd8\xcf\xbe\xdd"               // "No SD card"
#define KANA_MSG_DWELL                           "\xbd\xd8\xb0\xcc\xdf"                                         // "Sleep..."
#define KANA_MSG_USERWAIT                        "\xbc\xca\xde\xd7\xb8\xb5\xcf\xc1\xb8\xc0\xde\xbb\xb2"         // "Wait for user..."
#define KANA_MSG_RESUMING                        "\xcc\xdf\xd8\xdd\xc4\xbb\xb2\xb6\xb2"                         // "Resuming print"
#define KANA_MSG_PRINT_ABORTED                   "\xcc\xdf\xd8\xdd\xc4\xc1\xad\xb3\xbc\xbb\xda\xcf\xbc\xc0"     // "Print aborted"
#define KANA_MSG_NO_MOVE                         "\xb3\xba\xde\xb7\xcf\xbe\xdd"                                 // "No move."
#define KANA_MSG_KILLED                          "\xbc\xae\xb3\xb7\xae"                                         // "KILLED. "
#define KANA_MSG_STOPPED                         "\xc3\xb2\xbc\xbc\xcf\xbc\xc0"                                 // "STOPPED. "
#define KANA_MSG_CONTROL_RETRACT                 "Retract mm"
#define KANA_MSG_CONTROL_RETRACT_SWAP            "Swap Re.mm"
#define KANA_MSG_CONTROL_RETRACTF                "Retract  V"
#define KANA_MSG_CONTROL_RETRACT_ZLIFT           "Hop mm"
#define KANA_MSG_CONTROL_RETRACT_RECOVER         "UnRet +mm"
#define KANA_MSG_CONTROL_RETRACT_RECOVER_SWAP    "S UnRet+mm"
#define KANA_MSG_CONTROL_RETRACT_RECOVERF        "UnRet  V"
#define KANA_MSG_AUTORETRACT                     "AutoRetr."
#define KANA_MSG_FILAMENTCHANGE                  "\xcc\xa8\xd7\xd2\xdd\xc4\xba\xb3\xb6\xdd"                     // "Change filament"
#define KANA_MSG_INIT_SDCARD                     "SD\xb6\xb0\xc4\xde\xbb\xb2\xd6\xd0\xba\xd0"                   // "Init. SD card"
#define KANA_MSG_CNG_SDCARD                      "SD\xb6\xb0\xc4\xde\xba\xb3\xb6\xdd"                           // "Change SD card"
#define KANA_MSG_ZPROBE_OUT                      "Z\xcc\xdf\xdb\xb0\xcc\xde \xcd\xde\xaf\xc4\xde\xb6\xde\xb2"   // "Z probe out. bed"
#define KANA_MSG_POSITION_UNKNOWN                "\xb9\xde\xdd\xc3\xdd\xcaXY\xb2\xc4\xde\xb3\xba\xdeZ"          // "Home X/Y before Z"
#define KANA_MSG_ZPROBE_ZOFFSET                  "Z\xb5\xcc\xbe\xaf\xc4"                                        // "Z Offset"
#define KANA_MSG_BABYSTEP_X                      "\xcb\xde\xc4\xde\xb3 X"                                       // "Babystep X"
#define KANA_MSG_BABYSTEP_Y                      "\xcb\xde\xc4\xde\xb3 Y"                                       // "Babystep Y"
#define KANA_MSG_BABYSTEP_Z                      "\xcb\xde\xc4\xde\xb3 Z"                                       // "Babystep Z"
#define KANA_MSG_ENDSTOP_ABORT                   "Endstop abort"
#define KANA_MSG_END_HOUR                        "hours"
#define KANA_MSG_END_MINUTE                      "minutes"
#define KANA_MSG_ENGLISH_LANGUAGE                "English"
#define KANA_MSG_CHINESE_LANGUAGE                "Chinese"
#define KANA_MSG_JAPANESE_LANGUAGE               "Japanese"

/* These are from language.h. PLEASE DON'T TRANSLATE! All translatable messages can be found in language_en.h
#define KANA_MSG_HEATING                         "\xb6\xc8\xc2\xc1\xad\xb3..."                                  // "Heating..."
#define KANA_MSG_HEATING_COMPLETE                "\xb6\xc8\xc2\xb6\xdd\xd8\xae\xb3"                             // "Heating done."
#define KANA_MSG_BED_HEATING                     "\xcd\xde\xaf\xc4\xde\xb6\xc8\xc2\xc1\xad\xb3"                 // "Bed Heating."
#define KANA_MSG_BED_DONE                        "\xcd\xde\xaf\xc4\xde\xb6\xc8\xc2\xb6\xdd\xd8\xae\xb3"         // "Bed done."
#define KANA_MSG_ENDSTOPS_HIT                    "endstops hit: "
                   ^ typho
*/

#if ENABLED(DELTA_CALIBRATION_MENU)
  #define KANA_MSG_DELTA_CALIBRATE               "Delta Calibration"
  #define KANA_MSG_DELTA_CALIBRATE_X             "Calibrate X"
  #define KANA_MSG_DELTA_CALIBRATE_Y             "Calibrate Y"
  #define KANA_MSG_DELTA_CALIBRATE_Z             "Calibrate Z"
  #define KANA_MSG_DELTA_CALIBRATE_CENTER        "Calibrate Center"
#endif // DELTA_CALIBRATION_MENU
#define KANA_MSG_RESUME_PRINT_OK                 KANA_MSG_RESUME_PRINT "?"
#define KANA_MSG_RESUME_PRINT_Y                  "Yes"
#define KANA_MSG_RESUME_PRINT_N                  "No"
#endif // LANGUAGE_KANA_H
