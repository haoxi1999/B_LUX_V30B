# B_LUX_V30B
Arduino library for the luxmeter used in the mystery module B_LUX_V30B module. The B_LUX_V30B is sold online under brands like DFRobot and BCE. However, the module appears to have incomplete/incorrect IIC protocol implementation which prevents the use of Wire library of Arduino. The library developed by https://github.com/DFRobot/DFRobot_B_LUX_V30B is based on a software implementation of non-standard IIC bus cannot simultaneously operate with the Wire library on the hardware SCL and SDA pins. (e.g. [ISSUE](https://github.com/DFRobot/DFRobot_B_LUX_V30B/issues/3)). This repository enables the B_LUX_V30B module to be operated by Wire library, thus eliminates the need of extra 2 pins for customized software IIC implementation. This repository distributes with GPLv3 license.

This library was modified from https://github.com/dantudose/MAX44009.

-- Tested Platform

Seeeduino XIAO (samd)

Revision history:

1. rev 1.0.0 - modified for B_LUX_V30B


-- original repository 

Revision history:
1. rev. 1.0.0 - added support for Wire library
2. rev. 1.0.1 - fixed initialization bug
              - fixed lux reading mode
