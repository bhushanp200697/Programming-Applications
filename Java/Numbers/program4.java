// Program to display 5 times Hello on screen

import java.util.*;

class Number
{
    public void Display()
    {
        for(int i = 1; i <= 5; i++)
        {
            System.out.println("Hello");
        }
    }
}

class program4
{
    public static void main(String b[])
    {
        Number obj = new Number();

        obj.Display();
    }
}