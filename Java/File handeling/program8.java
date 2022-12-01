import java.util.*;
import java.io.*;

class FileHandeling
{
    public void writeData(String fName)
    {
        try
        {
            File fobj=new File(fName);
            boolean bobj = fobj.createNewFile();

            if(bobj == true)
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
                System.out.println("File is already existing");
            }
        } 
        catch(Exception obj)
        {
            System.out.println(obj);
        }
    }
}

class program8
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