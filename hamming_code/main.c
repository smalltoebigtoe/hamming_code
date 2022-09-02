#include <stdio.h>
#include <stdint.h>

#include "parity.h"

int main(void)
{
    uint64_t data = 0x3C33;
    uint64_t num;

    while (1)
    {
        printf("Enter a number: ");
        scanf("%lld", &num);
        printf("%lld -> %s\n", num, to_bin(num));
    }
 
    return 0;
}
