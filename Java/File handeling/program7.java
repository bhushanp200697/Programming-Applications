import java.util.*;
import java.io.*;

class FileHandeling
{
    public void writeData(String fName)
    {
        try
        {
            File fobj=new File(fName);

            if(fobj.exists())
            {
                Scanner sobj = new Scanner(System.in);

                FileOutputStream foobj = new FileOutputStream(fobj);

                System.out.println("Enter the data that you want to write in the file");
                String str = sobj.nextLine();

                byte bdata[] = str.getBytes();

                foobj.write(bdata);

                foobj.close();
                sobj.close();
            }
            else
            {
                System.out.println("There is no such file");
            }
        } 
        catch(Exception obj)
        {
            System.out.println(obj);
        }
    }
}

class program7
{
    public static void main(String arg[])
    {
 
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter file name");
        String Filename= sobj.nextLine();
        
        FileHandeling obj = new FileHandeling();

        obj.writeData(Filename);

        sobj.close();
    }
}