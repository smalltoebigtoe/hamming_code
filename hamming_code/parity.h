#ifndef PARITY_H
#define PARITY_H

#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>

#define BIT_INDEX_TO_DEC(index) pow(2, index-1)

uint64_t num_to_bits(uint64_t data);
char *to_bin(uint64_t data);
bool check_parity(uint64_t data);

#endif

