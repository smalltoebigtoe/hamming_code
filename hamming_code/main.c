#include <stdio.h>
#include <stdint.h>

#include "parity/parity.h"

int main(void)
{
    uint64_t data = 0x3C33;
    uint64_t num;

    while (1)
    {
        printf("Enter a number: ");
        scanf("%lld", &num);
        printf("%lld -> %d\n", num, to_bin(num));
        parity_set(&num, 0, 1);
        printf("%lld -> %d\n", num, to_bin(num));
    }
 
    return 0;
}
