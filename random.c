// Hemanth Kamana
#include <stdio.h>
#include <stdlib.h>

int randchar(int seed) {
  srand(seed);
  return 97 + (rand() % 26);
}
