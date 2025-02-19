import java.util.*;

class Digit
{
    public int Multiply(int iNo)
    {
        int iMult = 1, iDigit = 0;
        while(iNo != 0)
        {
            iDigit = iNo  % 10;
            if(iDigit != 0)
            {
                iMult *= iDigit;
            }
            iNo = iNo / 10;
        }
        return iMult;
    }
}

class program189
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        System.out.println("Enter the value : ");
        iValue = sobj.nextInt();

        Digit obj = new Digit();
        int iRet = obj.Multiply(iValue);

        System.out.println("multiplication of digits : "+iRet);
    }    
}
