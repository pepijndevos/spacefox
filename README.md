# SpaceFox

A 6DOF DIY HID. A what? A 6 degrees of freedom, do it yourself, human interface device. In other words, a 3D mouse, or an open hardware SpaceNavigator. You know, one of these thingies CAD designers use to zoom around.

All the existing DIY designs out there I could find are not actually 6DOF. Some are literally a knob on a joystick. So I set out to make a better one.

This one is based on a stewart platform made from potentiometers. It was designed so that any idiot with access to a 3D printer can build one. You might even get away with some careful jigsawing!

## Gallery

Watch the Youtube video:

[![Watch the video](https://img.youtube.com/vi/rLTWWPftyac/maxresdefault.jpg)](https://youtu.be/rLTWWPftyac)

Close-up of the spring-loaded potentiometers:

![signal-2022-11-06-121013](https://user-images.githubusercontent.com/168609/200167307-481f2979-1f31-46c8-8931-465b4240828a.jpeg)

The bottom of my improvised base plate:

![signal-2022-11-06-121021](https://user-images.githubusercontent.com/168609/200167318-65644ad8-c1e8-4691-9ea2-1528596075a9.jpeg)

CAD model of one of the arms:

![image](https://user-images.githubusercontent.com/168609/200167369-572bfe2f-96a5-408b-8335-6235ece865c7.png)

CAD model of the knob:

![image](https://user-images.githubusercontent.com/168609/200167393-6c9ff864-b83c-4a8e-bd83-f75506205eaf.png)

## Bill of Materials

* 3x arm-Body + arm2-Body, 3D printed or maybe cut from 3mm triplex.
* 1x top-Body, 3D printed or maybe milled/chiseled from wood.
* 1x PCB [Aisler](https://aisler.net/p/TOQVENVP)
* 6x potentiometer, 6mm flatted shaft [Farnell](https://nl.farnell.com/tt-electronics-bi-technologies/p120k-f20br5k/potentiometer-rotary-5k-20mm-20/dp/2771751)
* 1x Arduino Pro Micro [Sparkfun](https://www.sparkfun.com/products/12640) [AliExpress](https://www.aliexpress.com/item/32768308647.html)
* 12x ball joint rod ends, 2mm, half pad [AliExpress](https://www.aliexpress.com/item/1005003423670988.html)
* 6x push rod, 2mm, 30mm length [AliExpress](https://www.aliexpress.com/item/4000374352303.html)
* 6x torsion spring, 1mm diameter, 3mm length, 90 degrees, 8.5mm outer diameter [AliExpress](https://www.aliexpress.com/item/1005003823259348.html)
* 2mm nuts and bolts
* 0.1" male & female headers

## Assembly instructions

1. Put the springs on the potentionmeters and snap them onto the PCB. Solder. Cut the ends short below the PCB.
2. Push the male and female headers together and insert them between the Arduino and PCB. Solder. (This way you ensure they end up straight)
3. Slide the arms halfway onto the potentionmeters facing 45 degree outwards. Apply a drop of hot glue to the slot for the spring and push them all the way in. Apply hot glue to secure the arm to the shaft.
4. Screw the rod ends onto the push rods and secure the rod ends to the arm with nuts and bolts.
5. Secure the knob to the rod ends with bolts.
6. Upload the Arduino code.
7. Devise some kind of base plate and somehow screw or glue the PCB to it. (Sorry this part is kind of improvised)
8. Install [spacenavd](https://github.com/FreeSpacenav/spacenavd) and add `device-id = 1b4f:9206` to `/etc/spnavrc`.

## Possible improvements

This was my first shot at it and it works well enough but it could be better.

* Put mounting holes on the PCB.
* Design a nice and heavy base plate with rubber feet.
* Find low-friction potentiometers and use weaker springs.
* Place the potentiometers closer together and user shorter push rods.
* Place the spring holes a bit further out so the springs sit straight.
* Design a knob that sits around the push rods rather than on top, for better ergonomics.
