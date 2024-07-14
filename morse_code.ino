#include <Keyboard.h>

#include "morse_code_alphabet.h"

#define input_pin 2

#define min_dot_time 0
#define max_dot_time 5
#define send_delay 5
#define scan_delay 40

int pressed_timer = 0;
int no_press_timer = 0;

Letter* current_letter = &start;

void setup() {
  Keyboard.begin();
  pinMode(input_pin, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(input_pin) == LOW) {
    pressed_timer++;
    no_press_timer = 0;
  }
  else if (pressed_timer <= max_dot_time && pressed_timer > min_dot_time) {
    current_letter = current_letter->dot;
    pressed_timer = 0;
  } 
  else if (pressed_timer > max_dot_time) {
    current_letter = current_letter->dash;
    pressed_timer = 0;
  } 
  else {
    if (no_press_timer >= send_delay) {
      if (current_letter->letter != NULL) {
        Keyboard.press(current_letter->letter);
        Keyboard.release(current_letter->letter);
      }
      current_letter = &start;
    }
    no_press_timer++;
    pressed_timer = 0;
  }

  delay(scan_delay);
}
