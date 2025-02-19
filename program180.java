import java.util.*;

class StringDemo
{
    public void Reverse(String str)
    {
        int i = 0, iCount = 0;
        i = str.length() - 1;
        while(i >= 0)
        {
            char ch = str.charAt(i);
            System.out.print(ch);
            i--;
        }
   
    }
}

class program180
{
    public static void main(String S[])
    {
        Scanner sobj = new Scanner(System.in);

        String s1 = "\0";
        int iRet = 0;

        System.out.println("Enter string : ");
        s1 = sobj.nextLine();

        StringDemo obj = new StringDemo();

        obj.Reverse(s1);
    }
}