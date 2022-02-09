#include <Wire.h>
#include <B_LUX_V30B.h>

B_LUX_V30B light;
 
void setup() 
{
	Serial.begin(9600);
	Wire.begin();
	
	delay(500);
	
	if(light.begin())
  	{
    		Serial.println("Could not find a valid B_LUX_V30B sensor, check wiring!");
		while(1);
	}
}
 
void loop() 
{
	Serial.print("Light (lux):    ");
	Serial.println(light.get_lux());
	delay(1000);
}
