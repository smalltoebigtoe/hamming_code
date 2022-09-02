#ifndef PARITY_H
#define PARITY_H

#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>

//#define BINARY_CHAR_SIZE ((CHAR_BIT * sizeof(uint64_t) - 1) / 3 + 2)

uint64_t num_to_bits(uint64_t data);
uint64_t bit_index_to_dec(uint64_t index);
char *to_bin(uint64_t data);
bool check_parity(uint64_t data);

#endif

