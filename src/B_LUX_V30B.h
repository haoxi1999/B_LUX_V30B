#ifndef B_LUX_V30B_h
#define B_LUX_V30B_h
#include <Arduino.h>
#include <Wire.h>

#define MAX_ADDR 0x4A // or 0x4B if A0 pin connected to Vcc

class B_LUX_V30B {
    public:
		B_LUX_V30B();
		
		int begin();
		        
		float get_lux(void);
		
};



#endif
