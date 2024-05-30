// data type-----------------------------------------------------------------------------------------
float f = 3.14159; // 4 bytes (32 bits of precision) 6 - 7 digits %f
double d = 3.14159265359; // 8 bytes (64 bits of precision) 15 - 16 digits %lf
#include <stdbool.h>
bool b = true;                  // 1 byte (true or false) %d

char ch = 'c';        // single character %c
char CH[] = "python"; // array of characters (string) %s

char c = -128;                 // 1 byte (-128 to +127) %d or %c |%d --> dicimal value of the character
unsigned char Uc = 225;        // 1 byte (0 to +225) %d or %c |%c --> value in the ascii table

short int Si = 32767;           // 2 bytes (-32,768 to +32,767) %d
unsigned short int USi = 65535; // 2 bytes (0 to +65,535) %d

int I = 2147483647,  // 4 bytes (-2,147,483,648 to +2,147,483,647) %d
unsigned int Ui = 4294967295; // 4 bytes (0 to +4,294,967,295) %u

long long int LLi = 9,223,372,036,854,775,807; // 8 bytes (-9 quintillion to +9 quintillion) %lld
unsigned long long int Ulli = 18,446,744,073,709,551,615U; // 8 bytes (0 to +18 quintillion) %llu




//BITWISE OPERATORS = special operators used in bit level programming
// "&"": AND /\ "|"":OR /\ "^": XOR /\ "<<":left shift /\ ">>": right shift
int x = 6;   //00000110
int y = 12;  //00001100
int z = 0;   //00000000
z = x & y; --> z = 4    //00000100
z = x | y; --> z = 14  //00001110
z = x ^ y; --> z = 10 //00001010

// *******************************************************************

// swap pitscs
int main()
{
    unsigned char c = 0b00100110; // 0010 0110 
    char z = (c << 4); // 0110 0000
    char y = (c >> 4); // 0000 0100 
    char x = z | y; //  100  // 0b00000010   
    char v = 0b01100100; 
    printf("%d == %d",x,v);
}


// *******************************************************************
// code marouane   2 4 8 = 14
                   1 11 21 = 
int main()
{
    char l[257];
    scanf("%[^\n]", l);

    int sum = 0;
    int number = 0;
    int i = 0;
    while(l[i])
    {
        while(l[i] >= '0' && l[i] <= '9')
        {
            number = number * 10 + l[i] - '0';
            i++;
        }
        if(number % 2 == 0)
            sum += number;
        else
            sum -= number;

        number = 0;
        i++;
    }

    printf("%d\n", sum);

    return 0;
}

// ************************************************************************************
#include <stdio.h>


int main()
{
    int n;
    scanf("%d", &n);

    int i = 0;
    while(i < n)
    {   
        int l = 1;
        while(l <= n)
        {
            printf("%d", l);
            l++;
        }
        i++;
    }
    printf("\n");

    return 0;
}