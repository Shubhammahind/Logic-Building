import java.util.*;

class Digit
{
    public int Product(int Arr[])
    {
        int i = 0 , iMul = 1;
        while(i < Arr.length)
        {
            if(Arr[i] % 2 != 0)
            {
                iMul *= Arr[i];
            }
            i++;
        }
        return iMul;
    }
}

class program195
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0;
        System.out.println("Enter the size : ");
        iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter array element : ");
        for(int i = 0; i < Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }

        Digit obj = new Digit();
        int iRet = obj.Product(Arr);

        System.out.println("Product of all odd element is : "+iRet);
        
       
    }    
}
