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
