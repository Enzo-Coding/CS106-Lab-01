#include <stdio.h>

/* 
 * evenBits - return word with all even-numbered bits set to 1
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 8
 *   Rating: 1
 */
int evenBits(void)
{
    return 85 | 85 << 8 | 85 << 16 | 85 << 24;
}

int test_evenBits(void)
{
    int result = 0;
    int i;
    for (i = 0; i < 32; i += 2)
        result |= 1 << i;
    return result;
}

int main(void)
{
    printf("expected: %x\n", evenBits());
    printf("actual  : %x\n", test_evenBits());
}
