#include "B_LUX_V30B.h"
#include <math.h>

B_LUX_V30B::B_LUX_V30B() {}

int B_LUX_V30B::begin()
{
	Wire.beginTransmission(MAX_ADDR);
	uint8_t write_count = 0;
	Wire.write(0x04);
	Wire.write(0x03);
	return Wire.endTransmission(true) ;
}


float B_LUX_V30B::get_lux(void)
{
	unsigned int data[4];

	Wire.beginTransmission(MAX_ADDR);
	Wire.write(0x00);
	// Request 4 bytes of data
	Wire.endTransmission(false);
	Wire.requestFrom(MAX_ADDR, 4);
	
 
	// Read 4 bytes of data luminance msb, luminance lsb
	if (Wire.available() == 4)
	{
    	data[0] = Wire.read();
    	data[1] = Wire.read();
		data[2] = Wire.read();
    	data[3] = Wire.read();
	} else {
		return -1.0f;
	}

	uint32_t value = 0;
	value = data[3];
	value = (value<<8)|data[2];
	value = (value<<8)|data[1];
	value = (value<<8)|data[0];
  
	return ((float)value*1.4) / 1000; 
}
