#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

const size_t MAGIC = 354335;
unsigned int yay[MAGIC];

unsigned int rec(const unsigned int * const max, const unsigned int i);

unsigned int rec(const unsigned int * const max, const unsigned int i) {

  return i == *max ? 0 : rec(max, i + 1) + yay[i];

}

int main(void) {
  unsigned int max;

  scanf("%u", &max);

  assert(max < MAGIC);

  printf("%u", rec(&max, 0));

  return 0;
}
