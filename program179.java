import java.util.*;


class StringDemo
{
    public boolean ChkVowel(String str)
    {
        int i = 0, iCount = 0;
        while(i < str.length())
        {
            char ch = str.charAt(i);
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                iCount++; 
                return true;
            }
            i++;
        }
        return false;
    }
}

class program179
{
    public static void main(String S[])
    {
        Scanner sobj = new Scanner(System.in);

        String s1 = "\0";
        boolean bRet = false;

        System.out.println("Enter string : ");
        s1 = sobj.nextLine();

        StringDemo obj = new StringDemo();

        bRet = obj.ChkVowel(s1);

        if(bRet == true)
        {   System.out.println("it contains vowels");   }
        else
        {   System.out.println("Not contain");          }

       
    }
}