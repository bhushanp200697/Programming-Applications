import java.util.*;
import java.io.*;

class FileHandeling
{
    public void CreateFile(String fName)
    {
        try
        {
            File fobj=new File(fName);
            boolean bobj = fobj.createNewFile();

            if(bobj == true)
            {
                System.out.println("File is succesfully created");
            }
            else
            {
                System.out.println("File is already existing");
            }
        } 
        catch(IOException obj)
        {
            System.out.println(obj);
        }
    }
}

class program1
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