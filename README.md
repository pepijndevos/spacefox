# SpaceFox

A 6DOF DIY HID. A what? A 6 degrees of freedom, do it yourself, human interface device. In other words, a 3D mouse, or an open hardware SpaceNavigator. You know, one of these thingies CAD designers use to zoom around.

All the existing DIY designs out there I could find are not actually 6DOF. Some are literally a knob on a joystick. So I set out to make a better one.

This one is based on a stewart platform made from potentiometers. It was designed so that any idiot with access to a 3D printer can build one. You might even get away with some careful jigsawing!

## Gallery

Watch the Youtube video:

[![Watch the video](https://img.youtube.com/vi/axdTv2XX5zU/maxresdefault.jpg)](https://youtu.be/axdTv2XX5zU)

Close-up of the spring-loaded potentiometers:

![IMG_20230122_151121](https://user-images.githubusercontent.com/168609/213920844-3f1e3f3d-3065-4bd1-9ab4-7fa8e2922a25.jpg)

CAD model of one of the arms:

![image](https://user-images.githubusercontent.com/168609/213920949-31435c7b-7e93-4a9d-b29e-73e77e09bedb.png)

CAD model of the knob:

![image](https://user-images.githubusercontent.com/168609/213920918-92643485-3842-4950-9df4-5a42fd7a9d67.png)

CAD model of the base

![image](https://user-images.githubusercontent.com/168609/213921023-31bc5136-c5c2-4d00-9462-9a3b7c648821.png)

## Bill of Materials

* 3x arm-Body + arm2-Body, 3D printed.
* 1x top-Body, 3D printed.
* 1x base, cut from 4 layers of 4mm triplex.
* 1x PCB [Aisler](https://aisler.net/p/TOQVENVP)
* 6x potentiometer, 6mm flatted shaft [Farnell](https://nl.farnell.com/tt-electronics-bi-technologies/p120k-f20br5k/potentiometer-rotary-5k-20mm-20/dp/2771751)
* 1x Arduino Pro Micro [Sparkfun](https://www.sparkfun.com/products/12640) [AliExpress](https://www.aliexpress.com/item/32768308647.html)
* 12x ball joint rod ends, 2mm, half pad [AliExpress](https://www.aliexpress.com/item/1005003423670988.html)
* 6x torsion spring, 1mm diameter, 3mm length, 90 degrees, 8.5mm outer diameter [AliExpress](https://www.aliexpress.com/item/1005003823259348.html)
* 6x threaded rod, 2mm, 20mm length [AliExpress](https://nl.aliexpress.com/item/1005002781646885.html)
* 9x Cherry MX compatible switches [AliExpress](https://nl.aliexpress.com/item/1005004285423123.html)
* 9x keycaps [AliExpress](https://nl.aliexpress.com/item/1005003302173904.html)
* 2mm & 3mm nuts and bolts
* 0.1" male & female headers

## Assembly instructions

1. Put the springs on the potentionmeters and snap them onto the PCB. Solder. Cut the ends short below the PCB.
2. Push the male and female headers together and insert them between the Arduino and PCB. Solder. (This way you ensure they end up straight)
3. Slide the arms halfway onto the potentionmeters facing 45 degree outwards. Apply a drop of hot glue to the slot for the spring and push them all the way in. Apply hot glue to secure the arm to the shaft.
4. Screw the rod ends onto the push rods and secure the rod ends to the arm with nuts and bolts.
5. Secure the knob to the rod ends with bolts.
7. Cut 4 sheets of the base plate (the middle sheet twice)
8. Insert Cherry MX switches in the top plate
9. Wire switches to the header on the PCB
11. Bolt the base plates together
10. Bolt the PCB onto the base plate
6. Upload the Arduino code.
8. Install [spacenavd](https://github.com/FreeSpacenav/spacenavd) and add `device-id = 1b4f:9206` to `/etc/spnavrc`.
