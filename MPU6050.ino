#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>
#include <Wire.h>

Adafruit_MPU6050 mpu;


void setup() {
  Serial.begin(115200);

    if (!mpu.begin()) {
    Serial.println("Failed to find MPU6050 chip");
    while (1) {
      delay(10);
      
    }
  }

  mpu.setAccelerometerRange(MPU6050_RANGE_16_G);
  mpu.setGyroRange(MPU6050_RANGE_250_DEG);
  mpu.setFilterBandwidth(MPU6050_BAND_21_HZ);

}

void loop() {
   /* Get new sensor events with the readings */
  sensors_event_t a, g, temp;
  mpu.getEvent(&a, &g, &temp);

  
  /* Print out the values */
  Serial.print(a.acceleration.x);
  Serial.print(",");
  Serial.print(a.acceleration.y);
  Serial.print(",");
  Serial.print(a.acceleration.z);
  Serial.println("");
  
    int y=a.acceleration.y;
  int z=a.acceleration.z;
      
  if(z>limitValue){  
    
  }
      else if(z<limitValue*-1){  
        
      }
  else if(y<limitValue*-1){ //Medicine
    
  }

  else if(y>limitValue){// Food
    
  }
  else if(checkDanger()){
    
  }

}
