/* 
	Editor: http://www.visualmicro.com
	        visual micro and the arduino ide ignore this code during compilation. this code is automatically maintained by visualmicro, manual changes to this file will be overwritten
	        the contents of the Visual Micro sketch sub folder can be deleted prior to publishing a project
	        all non-arduino files created by visual micro and all visual studio project or solution files can be freely deleted and are not required to compile a sketch (do not delete your own code!).
	        note: debugger breakpoints are stored in '.sln' or '.asln' files, knowledge of last uploaded breakpoints is stored in the upload.vmps.xml file. Both files are required to continue a previous debug session without needing to compile and upload again
	
	Hardware: Arduino Mega w/ ATmega2560 (Mega 2560), Platform=avr, Package=arduino
*/

#ifndef _VSARDUINO_H_
#define _VSARDUINO_H_
#define __AVR_ATmega2560__
#define F_CPU 16000000L
#define ARDUINO 156
#define ARDUINO_AVR_MEGA2560
#define ARDUINO_ARCH_AVR
#define __cplusplus
#define GCC_VERSION 40302
#define __inline__
#define __asm__(x)
#define __extension__
//#define __ATTR_PURE__
//#define __ATTR_CONST__
#define __inline__
//#define __asm__ 
#define __volatile__
#define GCC_VERSION 40301
#define volatile(va_arg) 

typedef void *__builtin_va_list;
#define __builtin_va_start
#define __builtin_va_end
//#define __DOXYGEN__
#define __attribute__(x)
#define NOINLINE __attribute__((noinline))
#define prog_void
#define PGM_VOID_P int
#define NEW_H
/*
#ifndef __ATTR_CONST__
#define __ATTR_CONST__ __attribute__((__const__))
#endif

#ifndef __ATTR_MALLOC__
#define __ATTR_MALLOC__ __attribute__((__malloc__))
#endif

#ifndef __ATTR_NORETURN__
#define __ATTR_NORETURN__ __attribute__((__noreturn__))
#endif

#ifndef __ATTR_PURE__
#define __ATTR_PURE__ __attribute__((__pure__))
#endif            
*/
typedef unsigned char byte;
extern "C" void __cxa_pure_virtual() {;}



#include <arduino.h>
#include <pins_arduino.h> 
#undef F
#define F(string_literal) ((const PROGMEM char *)(string_literal))
#undef PSTR
#define PSTR(string_literal) ((const PROGMEM char *)(string_literal))
#undef cli
#define cli()
#define pgm_read_byte(address_short)
#define pgm_read_word(address_short)
#define pgm_read_word2(address_short)
#define digitalPinToPort(P)
#define digitalPinToBitMask(P) 
#define digitalPinToTimer(P)
#define analogInPinToBit(P)
#define portOutputRegister(P)
#define portInputRegister(P)
#define portModeRegister(P)


#include <Marlin.ino>
#include <Conditionals.h>
#include <Configuration.h>
#include <Configuration_adv.h>
#include <Default_Version.h>
#include <M100_Free_Mem_Chk.cpp>
#include <Marlin.h>
#include <MarlinSerial.cpp>
#include <MarlinSerial.h>
#include <Marlin_main.cpp>
#include <SanityCheck.h>
#include <Sd2Card.cpp>
#include <Sd2Card.h>
#include <Sd2PinMap.h>
#include <SdBaseFile.cpp>
#include <SdBaseFile.h>
#include <SdFatConfig.h>
#include <SdFatStructs.h>
#include <SdFatUtil.cpp>
#include <SdFatUtil.h>
#include <SdFile.cpp>
#include <SdFile.h>
#include <SdInfo.h>
#include <SdVolume.cpp>
#include <SdVolume.h>
#include <blinkm.cpp>
#include <blinkm.h>
#include <boards.h>
#include <buzzer.cpp>
#include <buzzer.h>
#include <cardreader.cpp>
#include <cardreader.h>
#include <configuration_store.cpp>
#include <configuration_store.h>
#include <digipot_mcp4451.cpp>
#include <dogm_bitmaps.h>
#include <dogm_font_data_6x9_marlin.h>
#include <dogm_font_data_HD44780_C.h>
#include <dogm_font_data_HD44780_J.h>
#include <dogm_font_data_HD44780_W.h>
#include <dogm_font_data_ISO10646_1.h>
#include <dogm_font_data_ISO10646_5_Cyrillic.h>
#include <dogm_font_data_ISO10646_CN.h>
#include <dogm_font_data_ISO10646_Kana.h>
#include <dogm_font_data_Marlin_symbols.h>
#include <dogm_lcd_implementation.h>
#include <fastio.h>
#include <language.h>
#include <language_an.h>
#include <language_bg.h>
#include <language_ca.h>
#include <language_cn.h>
#include <language_cz.h>
#include <language_da.h>
#include <language_de.h>
#include <language_en.h>
#include <language_es.h>
#include <language_eu.h>
#include <language_fi.h>
#include <language_fr.h>
#include <language_gl.h>
#include <language_it.h>
#include <language_kana.h>
#include <language_kana_utf8.h>
#include <language_nl.h>
#include <language_pl.h>
#include <language_pt-br.h>
#include <language_pt.h>
#include <language_ru.h>
#include <language_test.h>
#include <macros.h>
#include <mesh_bed_leveling.cpp>
#include <mesh_bed_leveling.h>
#include <pins.h>
#include <pins_3DRAG.h>
#include <pins_5DPRINT.h>
#include <pins_99.h>
#include <pins_AZTEEG_X1.h>
#include <pins_AZTEEG_X3.h>
#include <pins_AZTEEG_X3_PRO.h>
#include <pins_BAM_DICE_DUE.h>
#include <pins_BRAINWAVE.h>
#include <pins_BRAINWAVE_PRO.h>
#include <pins_CHEAPTRONIC.h>
#include <pins_ELEFU_3.h>
#include <pins_FELIX2.h>
#include <pins_GEN3_MONOLITHIC.h>
#include <pins_GEN3_PLUS.h>
#include <pins_GEN6.h>
#include <pins_GEN6_DELUXE.h>
#include <pins_GEN7_12.h>
#include <pins_GEN7_13.h>
#include <pins_GEN7_14.h>
#include <pins_GEN7_CUSTOM.h>
#include <pins_K8200.h>
#include <pins_LEAPFROG.h>
#include <pins_MEGACONTROLLER.h>
#include <pins_MEGATRONICS.h>
#include <pins_MEGATRONICS_2.h>
#include <pins_MEGATRONICS_3.h>
#include <pins_MELZI.h>
#include <pins_MELZI_MAKR3D.h>
#include <pins_MINIRAMBO.h>
#include <pins_MINITRONICS.h>
#include <pins_MKS_BASE.h>
#include <pins_OMCA.h>
#include <pins_OMCA_A.h>
#include <pins_PRINTRBOARD.h>
#include <pins_RAMBO.h>
#include <pins_RAMPS_13.h>
#include <pins_RAMPS_13_EFB.h>
#include <pins_RAMPS_OLD.h>
#include <pins_RIGIDBOARD.h>
#include <pins_RUMBA.h>
#include <pins_SANGUINOLOLU_11.h>
#include <pins_SANGUINOLOLU_12.h>
#include <pins_SAV_MKI.h>
#include <pins_SETHI.h>
#include <pins_STB_11.h>
#include <pins_TEENSY2.h>
#include <pins_TEENSYLU.h>
#include <pins_ULTIMAIN_2.h>
#include <pins_ULTIMAKER.h>
#include <pins_ULTIMAKER_OLD.h>
#include <planner.cpp>
#include <planner.h>
#include <qr_solve.cpp>
#include <qr_solve.h>
#include <servo.cpp>
#include <servo.h>
#include <speed_lookuptable.h>
#include <stepper.cpp>
#include <stepper.h>
#include <stepper_indirection.cpp>
#include <stepper_indirection.h>
#include <temperature.cpp>
#include <temperature.h>
#include <thermistortables.h>
#include <ultralcd.cpp>
#include <ultralcd.h>
#include <ultralcd_implementation_hitachi_HD44780.h>
#include <ultralcd_st7920_u8glib_rrd.h>
#include <utf_mapper.h>
#include <vector_3.cpp>
#include <vector_3.h>
#include <watchdog.cpp>
#include <watchdog.h>
#endif
