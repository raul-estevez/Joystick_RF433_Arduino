int trans_Y() {

  if (yVal >= 0 && yVal < 170) {
    char msg[1] = {'i'};

    digitalWrite(led_pin, HIGH); // Flash a light to show transmitting
    vw_send((uint8_t *)msg, 1);
    vw_wait_tx(); // Wait until the whole message is gone
    digitalWrite(led_pin2, LOW);

  }
  if (yVal >= 170 && yVal < 340) {
    char msg[1] = {'j'};

    digitalWrite(led_pin2, HIGH); // Flash a light to show transmitting
    vw_send((uint8_t *)msg, 1);
    vw_wait_tx(); // Wait until the whole message is gone
    digitalWrite(led_pin2, LOW);

  }
  if (yVal >= 340 && yVal < 510) {
     char msg[1] = {'k'};

     digitalWrite(led_pin2, HIGH); // Flash a light to show transmitting
     vw_send((uint8_t *)msg, 1);
     vw_wait_tx(); // Wait until the whole message is gone
     digitalWrite(led_pin2, LOW);

  }
  if (yVal >= 510 && yVal < 680) {
    char msg[1] = {'l'};

    digitalWrite(led_pin2, HIGH); // Flash a light to show transmitting
    vw_send((uint8_t *)msg, 1);
    vw_wait_tx(); // Wait until the whole message is gone
    digitalWrite(led_pin2, LOW);

  }
  if (yVal >= 680 && yVal < 850) {
    char msg[1] = {'m'};

    digitalWrite(led_pin2, HIGH); // Flash a light to show transmitting
    vw_send((uint8_t *)msg, 1);
    vw_wait_tx(); // Wait until the whole message is gone
    digitalWrite(led_pin2, LOW);

  }
    if (yVal >= 850 && yVal <= 1024) {
    char msg[1] = {'n'};

    digitalWrite(led_pin2, HIGH); // Flash a light to show transmitting
    vw_send((uint8_t *)msg, 1);
    vw_wait_tx(); // Wait until the whole message is gone
    digitalWrite(led_pin2, LOW);

  }

}
