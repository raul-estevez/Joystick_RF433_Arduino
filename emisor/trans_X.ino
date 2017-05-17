int trans_X() {

   if (xVal >= 0 && xVal < 128) {
    char msg2[1] = {'a'};

    digitalWrite(led_pin, HIGH); // Flash a light to show transmitting
    vw_send((uint8_t *)msg2, 1);
    vw_wait_tx(); // Wait until the whole message is gone
    digitalWrite(led_pin, LOW);
    delay(250);
  }
  if (xVal >= 128 && xVal < 256) {
    char msg2[1] = {'b'};

    digitalWrite(led_pin, HIGH); // Flash a light to show transmitting
    vw_send((uint8_t *)msg2, 1);
    vw_wait_tx(); // Wait until the whole message is gone
    digitalWrite(led_pin, LOW);
    delay(250);
  }
  if (xVal >= 256 && xVal < 384) {
    char msg2[1] = {'c'};

    digitalWrite(led_pin, HIGH); // Flash a light to show transmitting
    vw_send((uint8_t *)msg2, 1);
    vw_wait_tx(); // Wait until the whole message is gone
    digitalWrite(led_pin, LOW);
    delay(250);
  }
  if (xVal >= 384 && xVal < 512) {
    char msg2[1] = {'d'};

    digitalWrite(led_pin, HIGH); // Flash a light to show transmitting
    vw_send((uint8_t *)msg2, 1);
    vw_wait_tx(); // Wait until the whole message is gone
    digitalWrite(led_pin, LOW);
    delay(250);
  }
  if (xVal >= 512 && xVal < 640) {
    char msg2[1] = {'e'};

    digitalWrite(led_pin, HIGH); // Flash a light to show transmitting
    vw_send((uint8_t *)msg2, 1);
    vw_wait_tx(); // Wait until the whole message is gone
    digitalWrite(led_pin, LOW);
    delay(250);
  }
  if (xVal >= 640 && xVal < 768) {
    char msg2[1] = {'f'};

    digitalWrite(led_pin, HIGH); // Flash a light to show transmitting
    vw_send((uint8_t *)msg2, 1);
    vw_wait_tx(); // Wait until the whole message is gone
    digitalWrite(led_pin, LOW);
    delay(250);
  }
  if (xVal >= 768 && xVal < 896) {
    char msg2[1] = {'g'};

    digitalWrite(led_pin, HIGH); // Flash a light to show transmitting
    vw_send((uint8_t *)msg2, 1);
    vw_wait_tx(); // Wait until the whole message is gone
    digitalWrite(led_pin, LOW);
    delay(250);
  }
  if (xVal >= 896 && xVal <= 1024) {
    char msg2[1] = {'h'};

    digitalWrite(led_pin, HIGH); // Flash a light to show transmitting
    vw_send((uint8_t *)msg2, 1);
    vw_wait_tx(); // Wait until the whole message is gone
    digitalWrite(led_pin, LOW);
    delay(250);
  }
}
