#include <stdio.h>

int ft_atoi(char *str){
    int i = 0;
    int m = 0;
    int j = 0;
    int arr[11]={0};
    while(str[i] == '+' || str[i] == ' ' || str[i] == '-' || (str[i] >= '0' && str[i] <= '9') ){
        if(str[i] == '-')
            m++;
        else if(str[i] >= '0' && str[i] <= '9'){
            arr[j] = str[i];
            j++;
        }
        i++;
    }
    i = 1;
    while(j>0){
        arr[10] = arr[10] + (arr[j-1] - 48)*i;
        i = i*10;
        j--;
    }
    if(m%2 == 1)
    arr[10] = -arr[10];
    return arr[10];
}