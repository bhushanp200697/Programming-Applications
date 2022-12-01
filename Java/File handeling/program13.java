// Accept the directory name from user and write data from all .txt file into another .txt file.

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
            String name;

            System.out.println("Enter the file name in which you have to write the data");
            String newfile = sobj.nextLine();

            File fobj1 = new File(newfile);
            boolean bobj = fobj1.createNewFile();

            FileOutputStream foobj = new FileOutputStream(fobj1);
            FileInputStream fiobj = null;

            int ret = 0;
            byte buffer[] = new byte[100];


            for(int i = 0; i < allfiles.length; i++)
            {
                name = allfiles[i].getName();

                if(name.endsWith(".txt"))
                {
                    name = name +" "+(allfiles[i].length());
                    System.out.println(name);
                    
                    byte namearray[] = name.getBytes();
                    foobj.write(namearray,0,namearray.length);

                    fiobj = new FileInputStream(allfiles[i]);

                    while((ret = fiobj.read(buffer)) != -1)
                    {
                        foobj.write(buffer,0,ret);
                    }
                    fiobj.close();
                }
            }
        } 
        catch(Exception obj)
        {
            System.out.println(obj);
        }
    }
}

class program13
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