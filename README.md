Pressure Power!

This is a interactive systems course project where I am building a project idea based on a textile sensor. For my project I am currently building a pressure sensor using different e-textile materials. This sensor can be used in a wearable projects and can be connected with a textile arduino. 

The project idea based on the pressure sensor is -

Biker emergency :
Bikers ride their bikes from small distance to a very long distance. In that period of time, they need to pass some places where there is no people, not urban or maybe in between deserted areas and mountain trails. From the emergency button idea, we can construct a refined idea where some pressure sensors are connected to a bikers helmet. The pressure sensor can be connected with a microcontroller and with that a GSM module can be connected. When a biker faces an accident and faces a high impact the sensor will trigger the mechanism. As a biker might fall an trigger the mechanism we can set a system that if a certain pressure is copiously applied on any sensor (resembles a biker is laying or not moving) then the machine can trigger. The mechanism can be such that a gsm module sends an emergency message and the geolocation to any emergency number. For the prototype, we can test several mechanisms of the pressure sensor to finalize one with accurate results. Then the mechanism triggering can be shown by an led. 

For the sensor build we require following materials:

Conductive Fabric 
EeonTex Conductive non-woven fabric is needed for the pressure sensor as it is needed to make the connection points. It can be seen from the design which can be seen in the idea exploration part.

Conductive Thread
This thread is needed to sew the connections on to neoprene.

Neoprene 
For making an outer surface for the pressure sensor.

Velostat:
Velostat is an essential component for getting the pressure input from a user.It is a material made from polymer and coated with carbon that makes it conductive.

Conductive Wool
It can be used as an alternative for velostat. 

ESD foam:
It is used as an alternative of velostat. ESD foam is an anti-static material that acts as the divider between the conductive materials.



Firsly we made a basic sensor with alumunium foil to understand the mechanism. It can be done withe the following instructions:

Basic sensor build
In this implementation, we will try to create a sensor prototype with basic materials to get the probable structure of the finalized sensor. We are considering the sensor with available aluminum foils. The basic pressure sensor built is depending on the mechanism that, putting pressure on the sensor will complete the circuit and trigger something. If we consider the output to be a digital (either 0 or 1) value it will act as a switch where for a continuous value it can act as a potentiometer where we can control the output device. 

For this simple prototype, we take two aluminum sheets folded to a square shape. we took a small paper as a divider between two sheets of aluminum. we sandwiched the paper with the folded aluminum sheets. For the pressure sensor, we will change the paper sheet to a soft material (conductive wool  /Veloster) As a paper is nonconductive we made a small hole to act as a bridge between the two sheets. we took two wires and connected it to the top and bottom sheets. One of the wires was connected with a +5v power source  Another wire was connected to a resistor with the ground and a LED. (If we use a microcontroller we connect one wire from sheet to +5v another to ground and digital pin of an Arduino. A LED is connected to the ground and to the input pin of the Arduino. Pin A0 acts as the input for the switch)  In any combination when we push down on the sensor prototype, it connects to each other via the bridge and activates the LED. If we apply small pressure the LED will glow with a minimum glow adding more pressure will increase the brightness. As these materials are basic household items the accuracy and the sensitivity will not be good.  Hence we can see the minimal of the light being controlled by the input pressure. 

Now we can start experiementing with different materials. 

All the instructions will be updated once all the experiements are executed.
