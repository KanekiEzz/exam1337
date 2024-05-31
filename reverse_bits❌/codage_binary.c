#include <stdio.h>

/*
int main()
{
    int a = 5;  // 00000101 in binary
    int b = 3;  // 00000011 in binary

    a |= b;
    // a = a | b;

    printf("%d", a);
}
*/

// swap pitscs
/*
int main()
{
    unsigned char c = 0b00100110; // 0010 0110 
    char z = (c << 4); // 0110 0000
    char y = (c >> 4); // 0000 0100 
    char x = z | y; //  100  // 0b00000010   
    char v = 0b01100100; 
    printf("%d == %d",x,v);
}
*/



int main() {
    unsigned char octet = 150;
    int i = 0;

    while (i <= 7)
    {
        printf("%d", (octet >> i) & 1);
        i++;
    }
    printf("\n");
    return 0;
}

