//Display the string

#include<stdio.h>

int main()
{
    char Arr[] = "Hello";
    int i = 0;

    printf("The string is: \n");
    
    for(i = 0; Arr[i] != '\0'; i++)
    {
        printf("%c",Arr[i]);
    }

    return 0;
}
