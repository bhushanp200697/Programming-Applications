import java.net.*;
import java.io.*;

public class server
{
    public static void main(String[] args) throws Exception
    {
        System.out.println("server application is running...");

        ServerSocket ss = new ServerSocket(2100);
        System.out.println("server is running at port no 2100 and waiting for client request");

        Socket s = ss.accept();
        System.out.println("request of client gets accepted");

        PrintStream ps = new PrintStream(s.getOutputStream());

        BufferedReader br1 = new BufferedReader(new InputStreamReader(s.getInputStream()));
        BufferedReader br2 = new BufferedReader(new InputStreamReader(System.in));

        String str1,str2;

        while((str1 = br1.readLine()) != null)
        {
            System.out.println("client says : "+str1);
            System.out.print("enter message for client");
            str2 = br1.readLine();
            ps.println(str1);
        }
    }
}
