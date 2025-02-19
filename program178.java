import java.util.*;

class StringDemo
{
    public int CountDiff(String str)
    {
        int i = 0, CapCount = 0, SmallCount = 0;
        
        for(i = 0; i < str.length(); i++)
        {
            char ch = str.charAt(i);
            if(ch >= 'A' && ch <= 'Z')
            {
                CapCount++;
            }
            else if(ch >= 'a' && ch <= 'z')
            {
                SmallCount++;
            }
        }   

        return SmallCount - CapCount;
    }
}

class program178
{
    public static void main(String S[])
    {
        Scanner sobj = new Scanner(System.in);

        String s1 = "\0";
        int iRet = 0;

        System.out.println("Enter string : ");
        s1 = sobj.nextLine();

        StringDemo obj = new StringDemo();

        iRet = obj.CountDiff(s1);

        System.out.println("Diff bet small and capital : "+iRet);
    }
}