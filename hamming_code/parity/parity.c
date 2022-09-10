#include "parity.h"
#include "conversion.h"


bool parity_check(uint64_t data, bool parity) // no decimal input
{
    char *conv_data = to_bin(data);
    uint64_t positive_bit = 0;
    for (int i = 0; i < strlen(conv_data); i++)
    {
        if (conv_data[i] == '1')
            positive_bit++;
    }
    if (parity == 1)
        return ((positive_bit % 2) == 0);
    else
        return (((strlen(conv_data)-positive_bit) % 2) == 0);
}

void flip_bit(uint64_t *data, uint64_t nth_bit)
{
    // here
}

void parity_set(uint64_t *data, uint64_t nth_bit, bool parity)
{
    /* TODO: BIT_FLIP not working */
    if (!parity_check(*data, parity))
        flip_bit(data, nth_bit);
}

