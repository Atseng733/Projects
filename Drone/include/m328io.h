#ifndef M328IO_H
#define M328IO_H
#include <stdint.h>
//cpu clock frequency
#define F_CPU 16000000UL
//pin io types
#define INPUT 0
#define OUTPUT 1
#define INPUT_PULLUP 2
//pin io states
#define LOW 0
#define HIGH 1
//interrupt types
#define ON_LOW 0b00
#define CHANGE 0b01
#define RISING_EDGE 0b10
#define FALLING_EDGE 0b11

//special function registers
#define REG_DEF(addr) *((volatile uint8_t*)(addr))
#define PINB REG_DEF(0x23)
#define DDRB REG_DEF(0x24)
#define PORTB REG_DEF(0x25)
#define PINC REG_DEF(0x26)
#define DDRC REG_DEF(0x27)
#define PORTC REG_DEF(0x28)
#define PIND REG_DEF(0x29)
#define DDRD REG_DEF(0x2A)
#define PORTD REG_DEF(0x2B)

#define TCCR0A REG_DEF(0x44)
#define TCCR0B REG_DEF(0x45)
#define TCNT0 REG_DEF(0x46)
#define OCR0A REG_DEF(0x47)
#define OCR0B REG_DEF(0x48)

#define TIMSK0 REG_DEF(0x6E)
#define TIMSK1 REG_DEF(0x6F)

#define TWCR REG_DEF(0xBC)
#define TWINT 7
#define TWEA  6
#define TWSTA 5
#define TWSTO 4
#define TWWC  3
#define TWEN  2
#define TWIE  0
#define TWDR REG_DEF(0xBB)
#define TWAR REG_DEF(0xBA)
#define TWSR REG_DEF(0xB9)
#define TWBR REG_DEF(0xB8)

#define UCSR0A REG_DEF(0xC0)
#define UCSR0B REG_DEF(0xC1)
#define UCSR0C REG_DEF(0xC2)
#define UBRR0L REG_DEF(0xC4)
#define UBRR0H REG_DEF(0xC5)
#define UDR0 REG_DEF(0xC6)



#endif