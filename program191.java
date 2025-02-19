import java.util.*;

class Digit
{
    public boolean Check(int Arr[], int iNo)
    {
        int i = 0;
        while(i < Arr.length)
        {
            if(Arr[i] == iNo)
            {
                return true;
            }

            i++;
        }
        return false;
    }
}

class program191
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0;
        System.out.println("Enter the size : ");
        iSize = sobj.nextInt();

        System.out.println("Enter the value vlaue : ");
        int iValue = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter array element : ");
        for(int i = 0; i < Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }

        Digit obj = new Digit();s
        boolean bRet = obj.Check(Arr, iValue);

        if(bRet ==  true)
        {   System.out.println("Number "+iValue+" is present");   }
        else
        {   System.out.println("Element is not present");   }
    }    
}
