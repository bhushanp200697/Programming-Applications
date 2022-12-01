import java.util.*;
import java.io.*;

class FileHandeling
{
    public void displayFiles(String fName)
    {

        try
        {
            Scanner sobj = new Scanner(System.in);

            File fobj=new File(fName);

            File allfiles[] = fobj.listFiles();

            for(int i = 0; i < allfiles.length; i++)
            {
                System.out.println(allfiles[i].getName());
            }
        } 
        catch(Exception obj)
        {
            System.out.println(obj);
        }
    }
}

class program11
{
    public static void main(String arg[])
    {
 
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter direcory / folder name");
        String Filename= sobj.nextLine();
        
        FileHandeling obj = new FileHandeling();

        obj.displayFiles(Filename);

        sobj.close();
    }
}