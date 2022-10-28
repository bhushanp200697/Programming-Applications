// Accept the size of gold coin and display the corresponding bill amount

// 1  gram : 4000  RS
// 2  gram : 8000  RS
// 5  gram : 20000 RS
// 10 gram : 40000 RS

#include <iostream>
using namespace std;

class Number
{
public:
    int iWeight;

    void Accept() // Setter
    {
        cout << "Enter the gold coin size that you want to purchase" << endl;
        cin >> iWeight;
    }

    void Display() // Getter
    {
        cout << "The gold coin size is: " << this->iWeight << endl;
    }

    void JwelersPortal()
    {
        switch (iWeight)
        {
            case 1:
                printf("Your bill amount is 4000\n");
                break;

            case 2:
                printf("Your bill amount is 8000\n");
                break;

            case 5:
                printf("Your bill amount is 20000\n");
                break;

            case 10:
                printf("Your bill amount is 40000\n");
                break;

            default:
                printf("Invalid weight\n");
        }
    }
};

int main()
{
    Number nobj;

    nobj.Accept();
    nobj.Display();

    nobj.JwelersPortal();

    return 0;
}
