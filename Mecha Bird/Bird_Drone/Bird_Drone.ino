
int potPin = A2;

//RGB pin values 
int red_light_pin= 0;
int green_light_pin = 1;
int blue_light_pin = 2;

////THIS VARIABLE WILL BE COMAPRED TO THE MILLIS TIME TO SEE IF IT IS LARGER THAN THE TIMER
//long lastTime;
////THIS VARIABLE WILL SIMPLY HOLD A 100 VALUE BECAUSE I WANT THE LED TO FLASH IN 100 MILLISECOND INTERVALS
//long timer;

void setup() {


  pinMode(red_light_pin, OUTPUT);
  pinMode(green_light_pin, OUTPUT);
  pinMode(blue_light_pin, OUTPUT);

//  lastTime = 0;
//  timer = 100;
}

void loop() {
  // Get a distance measurement and store it as distance_cm:

int  sensorValue = analogRead(potPin);
//  int tuneRed = map(sensorValue, 600, 0, 0, 255);
//  int tuneGreen = map(sensorValue, 0, 600, 255, 0);
//  int tuneBlue = map(sensorValue, 0, 600, 100, 200);
//
//  analogWrite(red_light_pin, tuneRed);
//  analogWrite(green_light_pin, tuneGreen);
//  analogWrite(blue_light_pin, tuneBlue);
//
//}
 

  if(sensorValue > 0 && sensorValue < 100){
  RGB_color(255, 255, 255); // white
  } 
   if (sensorValue > 101 && sensorValue < 200) {
    RGB_color(255, 255, 0); // Yellow  
  }
  else if (sensorValue > 201 && sensorValue < 300) {
    RGB_color(0, 180, 255); // cyan  
  }
  else if (sensorValue > 301 && sensorValue < 400) {
    RGB_color(0, 255, 0); // green  
  }
  else if (sensorValue > 401 && sensorValue < 500) {
    RGB_color(0, 0, 255); // blue
  } 
  else if (sensorValue > 501 && sensorValue < 600) {
    RGB_color(255, 0, 255); // magenta
  }
  else if (sensorValue > 601) {
    RGB_color(255, 0, 0); // red
  }
 
}

void RGB_color(int red_light_value, int green_light_value, int blue_light_value)
 {
  analogWrite(red_light_pin, red_light_value);
  analogWrite(green_light_pin, green_light_value);
  analogWrite(blue_light_pin, blue_light_value);
}
