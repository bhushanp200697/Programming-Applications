import java.net.*;
import java.io.*;

public class client
{
    public static void main(String[] args) throws Exception
    {
        System.out.println("client application is running...");

        Socket s = new Socket("localhost",2100);        //localhost == ip address
        System.out.println("client is waitting for server to accept the request");

        PrintStream ps = new PrintStream(s.getOutputStream());

        BufferedReader br1 = new BufferedReader(new InputStreamReader(s.getInputStream()));
        BufferedReader br2 = new BufferedReader(new InputStreamReader(System.in));

        String str1,str2;

        while(!(str1 = br2.readLine()).equals("end"));
        {
            ps.println(str1);
            System.out.print("enter message for server : ");
            str2 = br1.readLine();
            System.out.print("server says : "+str2);
        }
    }
}