# JOURNAL ENTRIES FOR SNOWFLAKE32
## NOVEMBER 13: designing the schematic, pcb, and some messy art
*total hours: 4*

alright, since i did a bit today, im going to break this up into sections: schematic, pcb and art, and misc.

### schematic
im going to be honest, ive worked with the esp32 s3 before, so the schematic only took like an hour of my time to make. i added 3 LEDs to act as snowflakes falling plus a power indicator. 
i followed the same pinout from an S3 devboard people have probably seen a million times. why change something people are probably already used to? added 2 buttons for boot and reset.

<img width="1497" height="682" alt="image" src="https://github.com/user-attachments/assets/b0173b63-8fb0-459c-9b87-0e3e2e3a3ece" />

### pcb
from the front, it looks like your run of the mill esp32 s3 devboard... probably because it is. i just had the idea as im typing this: maybe i can make it more of a raspberry pi zero style (2x22 header pins),
or maybe an arduino uno style (screw holes, two 1x22 sockets on either end)? doing this would give me more room for silkscreen art and maybe some more components.

<img width="608" height="819" alt="Screenshot 2026-11-13 223930" src="https://github.com/user-attachments/assets/72141411-342f-427a-9b3e-a84965da3fdd" />

you can see most of the art that i did on the back. it's not the prettiest, and since kicad doesn't have support for color silkscreen that jlcpcb can print, im going to have to do it the old fashioned style and 
work with the layers i have (exposed copper, silkscreen, traces(?), etc). if i were to go with a (relatively) bigger board, i'll make a whole scene rather than just an igloo, a fire, and a message. i dont know what 
that scene will be yet, but i'll figure it out another day.

<img width="1179" height="771" alt="Screenshot 2026-11-13 223924" src="https://github.com/user-attachments/assets/66d7d6d0-9501-498e-b5d1-1e690c7db241" />

there's a lot of changes that are going to be made to the pcb (new layout, drawings, etc), but one thing will stay the same: the blue color. i have NEVER ordered a blue pcb before, i've always stuck with green for speed.
since im in no rush and it looks nice, im going with blue. i want it to look good for whoever gets my devboard

### misc
- i've actually never ordered assembly from jlcpcb before, so i dont know the process of going from kicad to jlcpcb, specifically assigning lcsc components to the board
- im really tempted to make an arduino or pi zero type board now.....

bottom line: got the schematic done, will change layout and art tomorrow

## NOVEMBER 14: pcb layout + updated schematic
*total hours: ~4 (3:49)*

i dont know why today took 4 hours, i think it was just still me getting adjusted to kicad. anyways, to make it look less generic, i made it look more like a raspberry pi zero.
i added a jst connector slot for batteries, as well as the charging module for it. i also added some mounting holes, a micro sd card slot, and some extra power pins. the only thing
i need to add to my pcb now is art and figure out how to get assembly working.

*front*

<img width="616" height="909" alt="image" src="https://github.com/user-attachments/assets/d2e005d9-e41b-4e84-acdd-91c4ab0f2a4f" />

*back*

<img width="846" height="860" alt="image" src="https://github.com/user-attachments/assets/458abb91-b477-4230-a81b-999cd0c0e5d9" />

if you have a strong eye, you'd notice that it's pretty bare. that's a job for another day... or maybe tonight, we'll see. 

misc
- the color in the screenshot isn't exactly the color that jlcpcb provides
- i hope this battery charger works because i dont want any fires being started (it's my first time making a charging circuit)

## NOVEMBER 15-17TH: FINISHING TOUCHES

im talking art, routing, quick arduino sketch, a little bit of everything. this took around **5 hours** staggered across a few days. 

<img width="376" height="724" alt="image" src="https://github.com/user-attachments/assets/76b3b1f0-35d7-417c-97d7-4c4484cf6fcd" />

when i say quick sketch, it's just lights. find the file in /firmware or just copy-paste this after hooking it up to your computer.

```cpp
void setup(){
pinMode(1, OUTPUT); pinMode(2, OUTPUT); pinMode(3, OUTPUT);
}

// so i dont need to call redundant digital write calls
void togglesnowflake(int pin){
digitalWrite(pin, HIGH);
delay(2000);
digitalWrite(pin, LOW);
delay(2000);
}

void loop(){
togglesnowflake(1);
togglesnowflake(2);
togglesnowflake(3);
}
```

this is untested but... come on, if this doesnt work, im retiring from programming for good.

i sent this to the slack channel but never logged this in the journal (jlcpcb color):

<img width="1399" height="713" alt="image" src="https://github.com/user-attachments/assets/c44b964d-1346-4e88-bc5a-9b34eedb7ed6" />

please note that there's a BUNCH of **WARNINGS**, not errors. most, if not all, are 
