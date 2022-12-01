
import java.util.*;
import java.io.*;

class FileHandeling
{
    public void filePacking(String fName)
    {

        try
        {
            Scanner sobj = new Scanner(System.in);

            File fobj=new File(fName);

            File allfiles[] = fobj.listFiles();
            String name;

            System.out.println("Enter file name which you have to packed");
            String packedFile = sobj.nextLine();

            File fobj1 = new File(packedFile);
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

                    for(int j = name.length(); j<100; j++)
                    {
                        name = name + " ";
                    }
                    
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

class Packer
{
    public static void main(String arg[])
    {
 
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter direcory / folder name");
        String Foldername= sobj.nextLine();
        
        FileHandeling obj = new FileHandeling();

        obj.filePacking(Foldername);

        sobj.close();
    }
}