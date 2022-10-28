// Accept the size of gold coin and display the corresponding bill amount

// 1  gram : 4000  RS
// 2  gram : 8000  RS
// 5  gram : 20000 RS
// 10 gram : 40000 RS

import java.util.*;

class Number
{
    public int iWeight;

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the gold coin size that you want to purchase");
        iWeight = sobj.nextInt();
    }

    public void Display()
    {
        System.out.println("The gold coin size is: "+this.iWeight);
    }

    public void JwelersPortal()
    {
        switch (iWeight)
        {
            case 1:
                System.out.println("Your bill amount is 4000\n");
                break;

            case 2:
            System.out.println("Your bill amount is 8000\n");
                break;

            case 5:
            System.out.println("Your bill amount is 20000\n");
                break;

            case 10:
            System.out.println("Your bill amount is 40000\n");
                break;

            default:
            System.out.println("Invalid weight\n");
        }
    }
}

class program25
{
    public static void main(String arg[])
    {
        Number obj = new Number();

        obj.Accept();
        obj.Display();

        obj.JwelersPortal();
        
    }
}