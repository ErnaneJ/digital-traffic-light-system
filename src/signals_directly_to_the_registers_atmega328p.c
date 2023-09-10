// Program for building a traffic light in which the closed signal stays for 5s,
// the attention signal is 2s and the open signal is 5s.

// manipulating the signals directly to the registers

// We are using ports 4, 5 and 6 on the Arduino to output the red, 
// yellow and green LED signals respectively

// These ports correspond to the D register group on the ATmega328p microcontroller

#include <util/delay.h>

int main(void)
{              // 0GYR 0000
  DDRD = 0x70; // 0111 0000 => setting only the necessary ports as output
  while(1)
  {
    // closed sign
    PORTD = 0x10; // 0001 0000 => turning on the red LED
    _delay_ms(5000); // 5 seconds

    // attention sign
    PORTD = 0x20; // 0010 0000 => turning on the yellow LED
    _delay_ms(2000); // 2 seconds

    // open signal
    PORTD = 0x40; // 0100 0000 => turning on the green LED
    _delay_ms(5000); // 5 seconds
    PORTD = 0x00; // 0000 0000 => turning off all LEDs
  }

  return 0;
}