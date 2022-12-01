import java.util.*;
import java.io.*;

class FileHandeling
{
    public void CreateFile(String fName)
    {
        try
        {
            File fobj=new File(fName);

            if(fobj.exists())
            {
                long size = fobj.length();
                System.out.println("File size is : "+size);
            }
            else
            {
                System.out.println("File is already existing");
            }
        } 
        catch(Exception obj)
        {
            System.out.println(obj);
        }
    }
}

class program2
{
    public static void main(String arg[])
    {
 
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter file name");
        String Filename= sobj.nextLine();
        
        FileHandeling obj = new FileHandeling();

        obj.CreateFile(Filename);

        sobj.close();
    }
}