// Accept the percentage from user and display the class

/*
    0 to 35         Fail
    35 to 50        Pass class
    50 to 60        Second class
    60 to 70        First class
    70 to 100       First class with distinction
*/

#include <iostream>
using namespace std;

class Number
{
public:
    float fValue;

    Number(float x)
    {
        fValue = x;
    }

    void Display() 
    {
        cout << "The percentage is: " << this->fValue << endl;
    }

    void DisplayClass()
    {
        if ((fValue > 0.0) && (fValue < 35.0))
        {
            printf("You are fail\n");
        }
        else if ((fValue >= 35.0) && (fValue < 50.0))
        {
            printf("Pass class\n");
        }
        else if ((fValue >= 50.0) && (fValue < 60.0))
        {
            printf("Second class\n");
        }
        else if ((fValue >= 60.0) && (fValue < 70.0))
        {
            printf("First class\n");
        }
        else if ((fValue >= 70.0) && (fValue <= 100.0))
        {
            printf("First class with distinction\n");
        }
        else
        {
            printf("Invalid marks\n");
        }
    }
};

int main()
{
    float fNo = 0.0;

    cout << "Enter the percentage" << endl;
    cin >> fNo;

    Number nobj(fNo);

    nobj.Display();

    nobj.DisplayClass();

    return 0;
}
