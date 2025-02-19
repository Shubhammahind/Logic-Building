import java.util.*;

class StringDemo
{
    public int CountCapital(String str)
    {
        int i = 0, iCount = 0;
        while(i < str.length())
        {
            char ch = str.charAt(i);
            if(ch >= 'A' && ch <= 'Z')
            {
                iCount++; 
            }
            i++;
        }
        return iCount;
    }
}

class program176
{
    public static void main(String S[])
    {
        Scanner sobj = new Scanner(System.in);

        String s1 = "\0";
        int iRet = 0;

        System.out.println("Enter string : ");
        s1 = sobj.nextLine();

        StringDemo obj = new StringDemo();

        iRet = obj.CountCapital(s1);

        System.out.println("Count of capital : "+iRet);
    }
}