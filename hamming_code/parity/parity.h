#ifndef PARITY_H
#define PARITY_H

#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

bool parity_check(uint64_t data, bool parity);
void flip_bit(uint64_t *data, uint64_t nth_bit);
void parity_set(uint64_t *data, uint64_t nth_bit, bool parity);

#endif

