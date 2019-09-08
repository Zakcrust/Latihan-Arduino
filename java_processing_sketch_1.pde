import processing.serial.*;
Serial comPort;
boolean ledState = false;
void setup()
{
  comPort = new Serial(this,"CustomPort",9600);
  background(255,0,0);
}

void mousePressed()
{
  ledState =  !ledState;
  
  if(ledState)
  {
     background(0,255,0);
     comPort.write('a');
  }
  else
  {
    background(255,0,0);
    comPort.write('b');
  }
}
