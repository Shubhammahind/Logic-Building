import java.util.*;

class StringDemo
{
    public int CountSmall(String str)
    {
        int i = 0, iCount = 0;
        while(i < str.length())
        {
            char ch = str.charAt(i);
            if(ch >= 'a' && ch <= 'z')
            {
                iCount++; 
            }
            i++;
        }
        return iCount;
    }
}

class program177
{
    public static void main(String S[])
    {
        Scanner sobj = new Scanner(System.in);

        String s1 = "\0";
        int iRet = 0;

        System.out.println("Enter string : ");
        s1 = sobj.nextLine();

        StringDemo obj = new StringDemo();

        iRet = obj.CountSmall(s1);

        System.out.println("Count Small : "+iRet);
    }
}