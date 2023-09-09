// Program for building a traffic light in which the closed signal stays for 5s,
// the attention signal is 2s and the open signal is 5s.

// manipulating the signals directly to the registers

// We are using ports 4, 5 and 6 on the Arduino to output the red, 
// yellow and green LED signals respectively

// These ports correspond to the G, E and H registers group on the ATmega2560 microcontroller

#include <util/delay.h>

int main(void)
{              // 0GYR 0000
  DDRG = 0x20; // 0010 0000 => setting only the necessary ports as output (pin 4 board Arduino)
  DDRE = 0x8;  // 0000 1000 => setting only the necessary ports as output (pin 5 board Arduino)
  DDRH = 0x8;  // 0000 1000 => setting only the necessary ports as output (pin 6 board Arduino)
  while(1)
  {
    // closed sign
    PORTG = 0x20; // 0010 0000 => turning on the red LED
    _delay_ms(5000); // 5 seconds
    PORTG = 0x00;
    // attention sign
    PORTE = 0x8; // 0000 1000 => turning on the yellow LED
    _delay_ms(2000); // 2 seconds
    PORTE = 0x00;
    // open signal
    PORTH = 0x8; // 0000 1000 => turning on the green LED
    _delay_ms(5000); // 5 seconds
    PORTH = 0x00; // 0000 0000 => turning off all LEDs
  }

  return 0;
}