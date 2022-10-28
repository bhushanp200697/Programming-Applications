// Accept number from user and display its factors

#include <iostream>
using namespace std;

class Number
{
public:
    int iNo;

    void Accept() // Setter
    {
        cout << "Enter the number" << endl;
        cin >> iNo;
    }

    void Display() // Getter
    {
        cout << "The number is: " << this->iNo << endl;
    }

    void DisplayFactors()
    {
        int iCnt = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        cout<<"The factors are: "<<endl;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                cout<<iCnt<<endl;
            }
        }
    }
};

int main()
{
    Number nobj;

    nobj.Accept();
    nobj.Display();

    nobj.DisplayFactors();

    return 0;
}
