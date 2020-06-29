#ifndef AVR_IO_H
#define AVR_IO_H
#include <stdint.h>
#include <m328io.h>
#include <avr/interrupt.h>

//set pin to input output or input_pullup
void pinMode(uint8_t pin, uint8_t mode);
//set a pin output low or high
void digitalWrite(uint8_t pin, uint8_t mode);
//read a pin's output
uint8_t digitalRead(uint8_t pin);
//attach external interrupt
void attachExInterrupt(uint8_t pin, void(*userFunc)(void), uint8_t INT_TYPE);

#endif