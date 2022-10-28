//Display the string

#include<stdio.h>

int main()
{
    char Arr[] = "Hello";
    int i = 0;

    printf("The string is: \n");

    while(Arr[i] != '\0')
    {
        printf("%c",Arr[i]);
        i++;
    }

    return 0;
}
