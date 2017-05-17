// receiver.pde
//
// Simple example of how to use VirtualWire to receive messages
// Implements a simplex (one-way) receiver with an Rx-B1 module
//
// See VirtualWire.h for detailed API docs
// Author: Mike McCauley (mikem@airspayce.com)
// Copyright (C) 2008 Mike McCauley
// $Id: receiver.pde,v 1.3 2009/03/30 00:07:24 mikem Exp $

#include <VirtualWire.h>

const int led_pin = 13;
const int transmit_pin = 12;
const int receive_pin = 11;
const int transmit_en_pin = 3;


void setup()
{
    delay(1000);
    Serial.begin(9600);	// Debugging only
    Serial.println("setup");

    // Initialise the IO and ISR
    vw_set_tx_pin(transmit_pin);
    vw_set_rx_pin(receive_pin);
    vw_set_ptt_pin(transmit_en_pin);
    vw_set_ptt_inverted(true); // Required for DR3100
    vw_setup(2000);	 // Bits per sec

    vw_rx_start();       // Start the receiver PLL running

    pinMode(led_pin, OUTPUT);
}

void loop()
{
    uint8_t buf[VW_MAX_MESSAGE_LEN];
    uint8_t buflen = VW_MAX_MESSAGE_LEN;

    if (vw_get_message(buf, &buflen)) {
	int i;

        digitalWrite(led_pin, HIGH); // Flash a light to show received good message
	// Message with a good checksum received, dump it.
	//Serial.print("Got: ");

	for (i = 0; i < buflen; i++) {
	
	  /*  Serial.print(buf[i], HEX);
	    Serial.print(' ');*/
  if (buf[i] == 97) {
    Serial.println("Acabo de recibir la letra: A/97/61");
  } else
  if (buf[i] == 98) {
    Serial.println("Acabo de recibir la letra: B/98/62");
  } else
  if (buf[i] == 99) {
    Serial.println("Acabo de recibir la letra: C/99/63");
  } else
  if (buf[i] == 100) {
    Serial.println("Acabo de recibir la letra: D/100/64");
  } else
  if (buf[i] == 101) {
    Serial.println("Acabo de recibir la letra: E/101/65");
  } else
  if (buf[i] == 102) {
    Serial.println("Acabo de recibir la letra: F/102/66");
  } else
  if (buf[i] == 103) {
    Serial.println("Acabo de recibir la letra: G/103/67");
  } else
  if (buf[i] == 104) {
    Serial.println("Acabo de recibir la letra: H/104/68");
  } else
  if (buf[i] == 105) {
    Serial.println("Acabo de recibir la letra: I/105/69");
  } else
  if (buf[i] == 106) {
    Serial.println("Acabo de recibir la letra: J/106/6A");
  } else
  if (buf[i] == 107) {
    Serial.println("Acabo de recibir la letra: K/107/6B");
  } else
  if (buf[i] == 108) {
    Serial.println("Acabo de recibir la letra: L/108/6C");
  } else
  if (buf[i] == 109) {
    Serial.println("Acabo de recibir la letra: M/109/6D");
  } else
  if (buf[i] == 110) {
    Serial.println("Acabo de recibir la letra: N/110/6E");
  }
}

  






	Serial.println();
        digitalWrite(led_pin, LOW);
    }
}
