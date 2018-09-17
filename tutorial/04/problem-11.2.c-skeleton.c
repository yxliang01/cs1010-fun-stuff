/*
 * @AUTHOR: Xiao Liang (C1A)
 */

#include "cs1010.h"

int main(void) {

  const long answer = 1000000; // TODO: CHANGE ME

  const char[] STR_TOO_HIGH = "too high";
  const char[] STR_TOO_LOW = "too low";
  const char[] STR_CORRECT = "CORRECT!";

  // Read guess and feedback to user
  const long guess = cs1010_read_long();
  while (guess != answer) {
    if (guess > answer) {
      cs1010_println_string(STR_TOO_HIGH);
    } else if (guess < answer) {
      cs1010_println_string(STR_TOO_LOW);
    }
    // Read guess and feedback to user
    guess = cs1010_read_long();
  }

  cs1010_println_string(STR_CORRECT);

  return 0;
}
