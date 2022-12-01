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
                byte buffer[] = new byte[100];
                int ret = 0;

                while((ret = fiobj.read(buffer)) != -1)
                {
                    String str1 = new String(buffer,StandardCharsets.UTF_8);
                    System.out.println(str1);
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

class program5
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