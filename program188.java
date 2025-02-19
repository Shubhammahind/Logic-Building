import java.util.*;

class Digit
{
    public int CountRange(int iNo)
    {
        int iCount = 0, iDigit = 0;
        while(iNo != 0)
        {
            iDigit = iNo  % 10;
            if(iDigit > 3 && iDigit < 7)
            {
                iCount++;
            }
            iNo = iNo / 10;
        }
        return iCount;
    }
}

class program188
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        System.out.println("Enter the value : ");
        iValue = sobj.nextInt();

        Digit obj = new Digit();
        int iRet = obj.CountRange(iValue);

        System.out.println("Count of digits bettwen 3 to 7  : "+iRet);
    }    
}
