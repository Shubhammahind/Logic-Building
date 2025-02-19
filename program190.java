import java.util.*;

class Digit
{
    public int CountDiff(int iNo)
    {
        int iEven = 0, iOdd = 0, iDigit = 0;
        while(iNo != 0)
        {
            iDigit = iNo  % 10;
            if(iDigit % 2 == 0)
            {
                iEven += iDigit;
            }
            else
            {
                iOdd += iDigit;
            }
            iNo = iNo / 10;
        }
        return iEven - iOdd;
    }
}

class program190
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        System.out.println("Enter the value : ");
        iValue = sobj.nextInt();

        Digit obj = new Digit();
        int iRet = obj.CountDiff(iValue);

        System.out.println("Diff is : "+iRet);
    }    
}
