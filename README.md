# shut it

Shut it is an Arduino electronics project - a digital door alarm,
that will yell at you, if it detects that the door has been open
for too long.

![project picture](https://raw.githubusercontent.com/anroots/shut-it/master/inside-look.jpg)

It was created to notify colleagues about a door that should
be closed, but was constantly left open.

## Operational model

The project is a battery-powered Atmega chip, with a LED, a buzzer and a reed switch.

1. The door has a reed switch - when the door is open, the switch activates and will power on the Atmega328 chip
2. A red status light is lit, notifying that the door is open
3. 30 seconds pass
4. If the door is still open, the device will start playing a two-tone alarm via a Piezo buzzer
5. When the door is shut, power is cut and the device shuts up

## Authors

This project was realized by Epp Õlekõrs under the supervision of Ando Roots.
This was Epp's first electronics / Arduino project - congratz.

## License

The project is licensed under the MIT license.
