import java.util.*;

class Digit
{
    public int CountEven(int iNo)
    {
        int iCount = 0, iDigit = 0;
        while(iNo != 0)
        {
            iDigit = iNo  % 10;
            if(iDigit % 2 == 0 && iDigit != 0)
            {
                iCount++;
            }
            iNo = iNo / 10;
        }
        return iCount;
    }
}

class program186
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        System.out.println("Enter the value : ");
        iValue = sobj.nextInt();

        Digit obj = new Digit();
        int iRet = obj.CountEven(iValue);

        System.out.println("Count of even digits : "+iRet);
    }    
}
