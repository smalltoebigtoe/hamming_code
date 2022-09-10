#include "conversion.h"

uint64_t num_to_bits(uint64_t data);
{
    uint64_t dec = 1;
    uint64_t bits = 1;

    while (1)
    {
        if (dec == data)
            break;
        else if ((dec > data) && ((dec/2) < data))
            break;

        else if ((data > dec) && (data < dec*2))
            break;
        else {
            dec *= 2;
            bits++;
        }
    }

    return bits;
}

char *to_bin(uint64_t data)
{
    uint64_t bits_used = num_to_bits(data);
    char *bin = malloc(bits_used);
    while (bits_used != 0)
    {
        uint64_t dec = BIT_INDEX_TO_DEC(bits_used);
        if (dec == data) {
           data -= dec;
           strcat(bin, "1");
        }
        else if (dec > data)
            strcat(bin, "0");
        else if (dec < data) {
            data -= dec;
            strcat(bin, "1");
        }

        bits_used -= 1;
    }

    return bin;
}

