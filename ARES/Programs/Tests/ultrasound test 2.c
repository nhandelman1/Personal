#pragma config(Sensor, dgtl7,  sonarSensor,         sensorSONAR_inch)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
  double bob = 0;
  double cat = 0;
  double frog = 0;
  float sonarVal = 0;

  while( true )
  {
    sonarVal = SensorValue(sonarSensor);


  }//while


}//end main
