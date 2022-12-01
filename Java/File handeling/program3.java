import java.util.*;
import java.io.*;
import java.nio.charset.StandardCharsets;

class FileHandeling
{
    public void ReadFile(String fName)
    {
        try
        {
            File fobj=new File(fName);

            if(fobj.exists())
            {
                FileInputStream fiobj = new FileInputStream(fobj);
                int icnt = 0;

                while((icnt = fiobj.read()) != -1)
                {
                    System.out.print((char)icnt);
                }
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

class program3
{
    public static void main(String arg[])
    {
 
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter file name");
        String Filename= sobj.nextLine();
        
        FileHandeling obj = new FileHandeling();

        obj.ReadFile(Filename);

        sobj.close();
    }
}