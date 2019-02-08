#include<Stepper.h>
#include<Servo.h>
Servo z ;
int pos = 0;
const double pi = 3.14159;
const int steps = 200;
Stepper x = Stepper(steps, 8, 10);
Stepper y = Stepper(steps, 1, 2);
void setup() {
  z.attach(6);
  Serial.begin(9600);
  x.setSpeed(200);
  y.setSpeed(200);
}
void loop()  
{
   int count = 0;
   Serial.println('Enter a letter : ');
   delay(2000);
   if(Serial.available() > 0)
   {
    char ischar = Serial.read();
    if(ischar == 'r')
    {
      x.step(-3000*count);
      count = 0;
    }
    else
    {
      writeletter(ischar);
      count++;
    }
   }
 }
void writeletter(char ischar)
{
  Serial.println(ischar);
  if(ischar == 'M')
  {
    
    y.step(-6000);
    sdwn();
    y.step(6000);
    for(int s = 0; s < 1500; s++)
    {
      x.step(1);
      y.step(-2);
    }   
    for(int s = 0; s < 1500; s++)
    {
      x.step(1);
      y.step(2);
    }
    y.step(-6000);
    sup();
    x.step(600);
    y.step(6000);
    
  }
   if(ischar == 'B');
  {
    
    sdwn();
    y.step(-6000);
    x.step(3000*4/5);
    for(int s = 0; s < 6000/10; s++)
    {
      x.step(1);
      y.step(1);
    } 
    y.step(6000*0.3);
    for(int s = 0; s < 6000/10; s++)
    {
      x.step(-1);
      y.step(1);
    }   
    for(int s = 0; s < 6000/10; s++)
    {
      x.step(1);
      y.step(1);
    } 
    y.step(6000*0.3);
    for(int s = 0; s < 6000/10; s++)
    {
      x.step(-1);
      y.step(1);
    }
    x.step(-3000*4/5);
    sup();
    x.step(3000*1.2);
    
  }
   if(ischar == 'A')
  {
    
    y.step(-6000);
    sdwn();
    x.step(3000/10);
    for(int s = 0; s < 6000/5; s++)
    {  
      x.step(1);
      y.step(5);
    }
    for(int s = 0; s < 6000/5; s++)
    {
      x.step(1);
      y.step(-5);
    }      
    x.step(3000/10);
    sup();
    x.step(3000/5);
    y.step(6000);
    
  }
   if(ischar == 'C')
  {
    
    x.step(3000);
    y.step(-6000/10);
    sdwn();
    y.step(6000/10);
    x.step(-3000*4/5);
    for(int s = 0; s < 6000/10; s++)
    {
      x.step(-1);
      y.step(-1);
    }    
    y.step(-6000*0.8);
    for(int s = 0; s < 6000/10; s++)
    {
      x.step(1);
      y.step(-1);
    }
    x.step(3000*4/5);
    y.step(6000*0.1);
    sup();
    y.step(6000*0.9);
    x.step(3000*0.2);
    
  }
   if(ischar == 'D')
  {
    
    sdwn();
    y.step(-6000);
    x.step(3000*4/5);
    for(int s = 0; s < 6000/10; s++)
    {
      x.step(1);
      y.step(1);
    } 
    y.step(6000*0.8);
    for(int s = 0; s < 6000/10; s++)
    {
      x.step(-1);
      y.step(1);
    }
    x.step(-3000*4/5);
    sup();
    x.step(3000*1.2);
    
  }
   if(ischar == 'E')
  {
    
    sdwn();
    y.step(-6000);
    x.step(3000);
    sup();
    x.step(-3000);
    y.step(6000*0.5);
    sdwn();
    x.step(3000*0.75);
    sup();
    x.step(-3000*0.75);
    y.step(3000*0.5);
    sdwn();
    x.step(3000);
    sup();
    x.step(3000*0.2);
    
  }
   if(ischar == 'F')
  {
    
    sdwn();
    y.step(-6000);
    sup();
    y.step(6000*0.5);
    sdwn();
    x.step(3000*0.75);
    sup();
    x.step(-3000*0.75);
    y.step(3000*0.5);
    sdwn();
    x.step(3000);
    sup();
    x.step(3000*0.2);    
    
  }
   if(ischar == 'G')
  {
    
    x.step(3000/2);
    y.step(-3000/2);
    sdwn();
    x.step(3000/2);
    y.step(-3000*0.4);
    for(int s = 0; s < 6000/10; s++)
    {
      x.step(-1);
      y.step(-1);
    }
    x.step(3000*0.6);
    for(int s = 0; s < 6000/10; s++)
    {
      x.step(-1);
      y.step(1);
    }
    y.step(6000*0.8);
    for(int s = 0; s < 6000/10; s++)
    {
      x.step(1);
      y.step(1);
    }
    x.step(3000*0.6);
    for(int s = 0; s < 6000/10; s++)
    {
      x.step(1);
      y.step(-1);
    }
    sup();
    x.step(3000*0.2);
    y.step(6000*0.1);
    
  }
   if(ischar == 'I')
  {
    
    sdwn();
    x.step(3000);
    sup();
    x.step(-3000/2);
    sdwn();
    y.step(-6000);
    sup();
    x.step(-3000/2);
    sdwn();
    x.step(3000);
    sup();
    y.step(6000);
    x.step(3000*0.2);
    
  }
   if(ischar == 'J')
  {
    
    sdwn();
    x.step(3000);
    sup();
    x.step(-3000/2);
    sdwn();
    y.step(-6000);
    x.step(-3000/2);
    y.step(6000*0.2);
    sup();
    y.step(6000*0.8);
    x.step(3000*1.2);
    
  }
   if(ischar == 'K')
  {
    
    sdwn();
    y.step(-6000);
    sup();
    y.step(6000/2);
    sdwn();
    for(int s = 0; s < 6000/2; s++)
    {
      x.step(1);
      y.step(1);
    }
    sup();
    for(int s = 0; s < 6000/2; s++)
    {
      x.step(-1);
      y.step(-1);
    }
    sdwn();
    for(int s = 0; s < 6000/2; s++)
    {
      x.step(1);
      y.step(-1);
    }
    sup();
    x.step(3000*0.2);
    y.step(6000);
    
  }
   if( ischar == 'L')
  {
    
    sdwn();
    y.step(-6000);
    x.step(3000);
    sup();
    y.step(6000);
    x.step((3000*0.2));
    
  }
   if(ischar == 'N')
  {
    
    y.step(-6000);
    sdwn();
    y.step(6000);
    for(int s = 0; s < 6000/2; s++)
    {
      x.step(1);
      y.step(-2);
    }
    y.step(6000);
    sup();
    x.step(3000*0.2);
    
  }
   if(ischar == 'O')
  {
    
    x.step(3000);
    y.step(-6000/2);
    sdwn();
    int ra = 3000/2; 
    int rb = 6000/2;
    for(float a = 0; a < 2*pi; a = a + 0.1)
    {
      double temp = a + 0.01;
      double sine = sin(a);
      double cosine = cos(a);
      double sine2 = sin(temp);
      double cosine2 = cos(temp);
      y.step((int) rb*abs(sine-sine2));
      x.step((int) ra*abs(cosine-cosine2));
    }
    y.step(6000/2);
    x.step(3000*0.2);
    
  }
   if(ischar == 'P')
  {
    
    sdwn();
    x.step(3000*4/5);
    for(int s = 0; s < 6000/10; s++)
    {
      x.step(1);
      y.step(-1);
    }
    y.step(6000*0.3);
    for(int s = 0; s < 6000/10; s++)
    {
      x.step(-1);
      y.step(-1);
    }
    x.step(3000*4/5);
    y.step(6000/2);
    sup();
    y.step(-6000/2);
    sdwn();
    y.step(-6000/2);
    sup();
    x.step(3000*1.2);
    y.step(6000);
    
  }
   if(ischar == 'Q')
  {
    
    x.step(3000);
    y.step(-6000/2);
    sdwn();
    int rb = 6000/2;
    int ra = 3000/2;
    for(float a = 0; a < 3.1415; a = a + 0.1)
    {
      double temp = a + 0.01;
      double sine = sin(a);
      double cosine = cos(a);
      double sine2 = sin(temp);
      double cosine2 = cos(temp);
      y.step((int) rb*abs(sine-sine2));
      x.step((int) ra*abs(cosine-cosine2));
    }    
    sup();
    x.step(-3000/2);
    sdwn();
    for(int s = 0; s < 6000/4; s++)
    {
      x.step(1);
      y.step(-2);
    }
    sup();
    x.step(3000*0.2);
    y.step(6000);
    
  }
   if(ischar == 'R')
  {
    
    sdwn();
    x.step(3000*4/5);
    for(int s = 0; s < 6000/10; s++)
    {
      x.step(1);
      y.step(-1);
    }
    y.step(6000*0.3);
    for(int s = 0; s < 6000/10; s++)
    {
      x.step(-1);
      y.step(-1);
    }
    x.step(3000*4/5);
    y.step(6000/2);
    sup();
    y.step(-6000/2);
    sdwn();
    y.step(-6000/2);
    sup();
    y.step(6000/2);
    sdwn();
    for(int s = 0; s < 6000/2; s++ )
    {
      x.step(1);
      y.step(1);
    }
    sup();
    y.step(6000);
    x.step(3000*0.2); 
     
  }
   if(ischar == 'S')
  {
    
    x.step(3000);
    y.step(-6000*0.2);
    sdwn();
    y.step(6000*0.2);
    x.step(3000*4/5);
    for(int s = 0; s < 6000/10; s++ )
    {
      x.step(-1);
      y.step(-1);
    }
    y.step(6000*0.3);
    for(int s = 0; s < 6000/10; s++ )
    {
      x.step(1);
      y.step(-1);
    }
    x.step(3000*0.6);
    for(int s = 0; s < 6000/10; s++ )
    {
      x.step(1);
      y.step(-1);
    }    
    y.step(6000*0.3);
    for(int s = 0; s < 6000/10; s++ )
    {
      x.step(-1);
      y.step(-1);
    }    
    x.step(3000*0.8);
    y.step(6000*0.2);
    sup();
    x.step(3000*1.2);
    y.step(6000*0.8);
    
  }
   if(ischar == 'T')
  {
    
    sdwn();
    x.step(3000);
    sup();
    x.step(-3000*0.5);
    sdwn();
    y.step(-6000);
    sup();
    x.step(3000*0.7);
    y.step(6000);
    
  }    
   if(ischar == 'U')
  {
    
    int r = 3000/2;
    sdwn();
    y.step(-6000*0.5);
    for(float a = pi; a < 2*pi; a = a + 0.01)
    {
      double temp = a + 0.01;
      double sine = sin(a);
      double cosine = cos(a);
      
      double sine2 = sin(temp);
      double cosine2 = cos(temp);
      
      y.step(abs((int)r*(sine2-sine)));
      x.step(abs((int) r*(cosine-cosine2)));
    }
    y.step(6000/2);
    sup();
    x.step(3000*0.2);
    
  }  
   if(ischar == 'V')
  {
    
    sdwn();
    for(int s = 0;s<6000/2;s++)
    {
      y.step(-2);
      x.step(1);
    }
    for(int s = 0;s<6000/2;s++)
    {
      y.step(22);
      x.step(1);
    }
    sup();
    x.step(3000*0.2);
    
  }
   if(ischar == 'W')
  {
    
    sdwn();
    y.step(-6000);
    for(int s = 0; s < 6000/4; s++)
    {
      x.step(1);
      y.step(2);
    }   
    for(int s = 0; s < 6000/4; s++)
    {
      x.step(1);
      y.step(-2);
    }
    y.step(6000);
    sup();
    x.step(3000/5);
    
  }
   if(ischar == 'X')
  {
    
    sdwn();
    for(int s = 0; s < 6000/2; s++)
    {
      x.step(1);
      y.step(-2);
    }
    sup();
    x.step(-3000);
    sdwn();
    for(int s = 0; s < 6000/2; s++)
    {
      x.step(1);
      y.step(2);
    }
    sup();
    x.step(3000*0.2);
    
  }
   if(ischar == 'Y')
  {
    
    sdwn();
    for(int s = 0; s < 6000/4; s++)
    {
      x.step(1);
      y.step(-2);
    }
    for(int s = 0; s < 6000/4; s++)
    {
      x.step(1);
      y.step(2);
    }
    sup();
    x.step(-3000/2);
    y.step(-6000/2);
    sdwn();
    y.step(-6000/2);
    sup();
    x.step(3000*0.7);
    y.step(6000);
    
  }
   if(ischar == 'Z')
  {
    sdwn();
    x.step(3000);
    for(int s = 0; s < 6000/2; s++)
    {
      x.step(-1);
      y.step(-2);
    }
    x.step(3000);
    sup();
    x.step(3000*0.2);
    y.step(6000);   
  }       
  if(ischar == ' ')
  {
    sdwn();
    x.step(3000*1.2);   
  }
}
void sup()
{
  for(pos = 0; pos < 45 ; pos++)
  {
    z.write(pos);
    delay(15);
  }
}
void sdwn()
{
  for(pos = 45; pos > 0 ; pos--)
  {
    z.write(pos);
    delay(15);
  }       
}

