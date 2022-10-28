//Display the string

#include<stdio.h>

void Display(char str[])
{
    printf("The string is: \n");
    
    while(*str != '\0')
    {
        printf("%c",*str);
        str++;
    }
}

int main()
{
    char Arr[] = "Hello";

    Display(Arr);

    return 0;
}
