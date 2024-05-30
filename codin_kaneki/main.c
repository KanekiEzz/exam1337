// desimale => hexadicimale

//================kaneki===============
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int r;
    scanf("%d", &r);
    int g;
    scanf("%d", &g);
    int b;
    scanf("%d", &b);

    printf("#%02X%02X%02X\n", r, g, b);

    return 0;
}

//================marouane===============

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void	hexadec(int c)
{
	char hd[] = "0123456789ABCDEF";
	printf("%c",hd[c / 16]);
	printf("%c",hd[c % 16]);
}

int main()
{
    int r;
    scanf("%d", &r);
    int g;
    scanf("%d", &g);
    int b;
    scanf("%d", &b);

    printf("#");
    hexadec(r);
    hexadec(g);
    hexadec(b);


    return 0;
}


// strchr => strchr  

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{
    char s[2049];
    scanf("%[^\n]",s);
    int i = 0;
    int sum = 0;
    while(s[i])
    {
        if(strchr("AEIOUYaeiouy",s[i])==NULL)
            sum += s[i];
        i++;
    }
    printf("%d",sum);
    return 0;
}

// me 

// 3
// ***
// **
// *
// *
// **
// ***
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int n;
    scanf("%d", &n);
    int i = 0;
    int m = n;
    while(i < n)
    {
        int l = 0;
        while(l < m)
        {
            printf("*");
            l++;
        }
        m--;
        i++;
        if(i != n)
            printf("\n");
    }
    int x = 0;
    
    while(x <= n)
    {
        int l = 0;
        while(l < m)
        {
            printf("*");
            l++;
        }
        m++;
        n--;
        if(i != n)
            printf("\n");
    }
    return 0;
}