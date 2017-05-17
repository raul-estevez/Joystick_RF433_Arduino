// transmitter.pde
//
// Simple example of how to use VirtualWire to transmit messages
// Implements a simplex (one-way) transmitter with an TX-C1 module
//
// See VirtualWire.h for detailed API docs
// Author: Mike McCauley (mikem@airspayce.com)
// Copyright (C) 2008 Mike McCauley
// $Id: transmitter.pde,v 1.3 2009/03/30 00:07:24 mikem Exp $

#include <VirtualWire.h>

const int led_pin = 2;
const int led_pin2 = 3;
const int transmit_pin = 12;
const int receive_pin = 2;
const int transmit_en_pin = 3;
const int xPin = A0;
const int yPin = A1;
int xVal;
int yVal;
int xMap;
int yMap;


void setup()
{
    // Initialise the IO and ISR
    vw_set_tx_pin(transmit_pin);
    vw_set_rx_pin(receive_pin);
    vw_set_ptt_pin(transmit_en_pin);
    vw_set_ptt_inverted(true); // Required for DR3100
    vw_setup(2000);       // Bits per sec
    pinMode(led_pin, OUTPUT);
    Serial.begin(9600);
}

byte count = 1;

void loop() {
  xVal = analogRead(xPin);
  yVal = analogRead(yPin);


  Serial.println(yVal);
  trans_Y();
  trans_X();


}
