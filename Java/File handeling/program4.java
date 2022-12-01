import java.util.*;
import java.io.*;


class FileHandeling
{
    public void ReadFile(String fName)
    {
        try
        {
            File fobj=new File(fName);

            if(fobj.exists())
            {
                BufferedReader bobj = new BufferedReader(new FileReader(fobj));
                String str;

                while((str = bobj.readLine()) != null)
                {
                    System.out.print(str);
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

class program4
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