#include <stdio.h>
#include <stdint.h>

#include "parity.h"

int main(void)
{
    uint64_t data = 0x3C33;
    //printf("parity checking 0x%llx...\n", data);
    
    // error calling check_parity
    //printf("parity output: %d.\n", check_parity(data));
    //printf("0x%llx -> %lld\n", data, to_bin(data));
    uint64_t num;
    while (1)
    {
        printf("Enter a number: ");
        scanf("%lld", &num);
        printf("%lld -> %d\n", num, check_parity(num));
    }
 
    return 0;
}
