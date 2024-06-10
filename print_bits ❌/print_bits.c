#include <unistd.h>
#include <stdio.h>

void	print_bits(unsigned char octet)
{
    int i = 0;
    char bits;
    while (i <= 7)
    {
        bits = ((octet >> (7 - i)) & 1) + '0';
        // bits = ((octet >> 1) & 1) + '0';
        write(1, &bits , 1);
        i++;
    }
}

int main()
{
    unsigned char octet = 2;
    print_bits(octet);
    write(1, "\n", 1);
}

// int main() {
//     unsigned char octet = 2;
//     int i = 0;

//     while (i <= 7)
//     {
//         // printf("%d", (octet >> (7-i)) & 1);
//         printf("%d", (octet >> i) & 1);
//         i++;
//     }
//     printf("\n");
//     return 0;
// }
