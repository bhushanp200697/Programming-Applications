//Accept two string from user and compare that strings

#include<stdio.h>
#include<stdbool.h>

bool strcmpX(char *src, char *dest)
{
    while((*src != '\0') && (*dest != '\0'))
    {
        if(*src != *dest)
        {
            break;
        }
        src++;
        dest++;
    }
    if((*src == '\0') && (*dest == '\0'))
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    char Arr[20];
    char Brr[20];
    bool bRet;

    printf("Enter first string: \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter second string: \n");
    scanf(" %[^'\n']s",Brr);

    bRet = strcmpX(Arr,Brr);
    if(bRet == true)
    {
        printf("Strings are equal \n");
    }
    else
    {
        printf("Strings are not equal\n");
    }

    return 0;
}
