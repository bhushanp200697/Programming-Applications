// Accept the percentage from user and display the class

/*
    0 to 35         Fail
    35 to 50        Pass class
    50 to 60        Second class
    60 to 70        First class
    70 to 100       First class with distinction
*/

import java.util.*;

class Number
{
    public float fValue;

    public Number(float x)
    {
        fValue = x;
    }

    public void Display()
    {
        System.out.println("The numbers is: "+this.fValue);
    }

    public void DisplayClass()
    {
        if ((fValue > 0.0) && (fValue < 35.0))
        {
            System.out.println("You are fail");
        }
        else if ((fValue >= 35.0) && (fValue < 50.0))
        {
            System.out.println("Pass class");
        }
        else if ((fValue >= 50.0) && (fValue < 60.0))
        {
            System.out.println("Second class");
        }
        else if ((fValue >= 60.0) && (fValue < 70.0))
        {
            System.out.println("First class");
        }
        else if ((fValue >= 70.0) && (fValue <= 100.0))
        {
            System.out.println("First class with distinction");
        }
        else
        {
            System.out.println("Invalid marks");
        }
    }
}

class program24
{
    public static void main(String arg[])
    {
        float fNo = 0.0f;

        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the percentage");
        fNo = sobj.nextFloat();

        Number obj = new Number(fNo);

        obj.Display();

        obj.DisplayClass();
        
    }
}