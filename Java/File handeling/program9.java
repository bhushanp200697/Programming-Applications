import java.util.*;
import java.io.*;

class FileHandeling
{
    public void writeData(String fName)
    {

        try
        {
            Scanner sobj = new Scanner(System.in);

            File fobj=new File(fName);

            System.out.println("Enter new file name to create");
            String newfile = sobj.nextLine();

            File fobjnew = new File(newfile);
            boolean bobj1 = fobjnew.createNewFile();

            if(fobj.exists())
            {
                FileInputStream fiobj = new FileInputStream(fobj);
                FileOutputStream foobj = new FileOutputStream(fobjnew);

                byte buffer[] = new byte[100];
                int Ret = 0;

                if((Ret = fiobj.read(buffer)) != -1)
                {
                    foobj.write(buffer);
                }

                foobj.close();
                fiobj.close();
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

class program9
{
    public static void main(String arg[])
    {
 
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter the existing file name");
        String Filename= sobj.nextLine();
        
        FileHandeling obj = new FileHandeling();

        obj.writeData(Filename);

        sobj.close();
    }
}