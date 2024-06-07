#include	<stdio.h>

unsigned char reverse_bits(unsigned int octet)
{
	unsigned char ret_val;
	int i;

	ret_val = 0;
	i = 0;
	while(i < 7)
	{
		if(octet % 2 == 1)
			ret_val |= 1;
		octet = octet / 2;
		ret_val = ret_val * 2;
		i++;
	}

	if(octet % 2 == 1)
		ret_val |= 1;
	return ret_val;
}

int main() {
    unsigned char octet = 150;
    unsigned char reversed = reverse_bits(octet);
    int i = 7;

		printf()

		while (i >= 0)
		{
      printf("%d", (reversed >> i) & 1);
			i--;
		}
    printf(")\n");

    return 0;
}