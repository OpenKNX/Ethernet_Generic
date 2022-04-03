/****************************************************************************************************************************
  Ethernet_Generic.h - Driver for W5x00

  Ethernet_Generic is a library for the W5x00 Ethernet shields trying to merge the good features of
  previous Ethernet libraries
  
  Based on and modified from 
  
  1) Ethernet Library         https://github.com/arduino-libraries/Ethernet
  2) EthernetLarge Library    https://github.com/OPEnSLab-OSU/EthernetLarge
  3) Ethernet2 Library        https://github.com/adafruit/Ethernet2
  4) Ethernet3 Library        https://github.com/sstaub/Ethernet3
    
  Built by Khoi Hoang https://github.com/khoih-prog/EthernetWebServer
  Version: 2.0.0
  
  Copyright 2018 Paul Stoffregen
  
  Permission is hereby granted, free of charge, to any person obtaining a copy of this
  software and associated documentation files (the "Software"), to deal in the Software
  without restriction, including without limitation the rights to use, copy, modify,
  merge, publish, distribute, sublicense, and/or sell copies of the Software, and to
  permit persons to whom the Software is furnished to do so, subject to the following
  conditions:
  
  The above copyright notice and this permission notice shall be included in all
  copies or substantial portions of the Software.
  
  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
  INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A
  PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
  HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
  OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
  SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
  
  Version Modified By   Date      Comments
  ------- -----------  ---------- -----------
  2.0.0   K Hoang      31/03/2022 Initial porting and coding to support SPI2, debug, h-only library
 *****************************************************************************************************************************/

#pragma once

#ifndef ETHERNET_GENERIC_H
#define ETHERNET_GENERIC_H


/////////////////////////////////////////////////////////

#define ETHERNET_GENERIC_VERSION            "Ethernet_Generic v2.0.0"

#define ETHERNET_GENERIC_VERSION_MAJOR      2
#define ETHERNET_GENERIC_VERSION_MINOR      0
#define ETHERNET_GENERIC_VERSION_PATCH      0

#define ETHERNET_GENERIC_VERSION_INT        2000000

/////////////////////////////////////////////////////////

#if USING_SPI2
  #define ETHERNET_GENERIC_USING_SPI2     true
  
  #if(_ETG_LOGLEVEL_> 3)
    #warning ETHERNET_GENERIC_USING_SPI2 in Ethernet_Generic.h
  #endif
#else
  #define ETHERNET_GENERIC_USING_SPI2     false
  
  #if(_ETG_LOGLEVEL_> 3)
    #warning ETHERNET_GENERIC_USING_SPI in Ethernet_Generic.h
  #endif
#endif

/////////////////////////////////////////////////////////

#include "Ethernet_Generic.hpp"
#include "Ethernet_Generic_Impl.h"

/////////////////////////////////////////////////////////

#endif    // ETHERNET_GENERIC_H
