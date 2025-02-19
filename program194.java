import java.util.*;

class Digit
{
    public void Display(int Arr[], int iStart, int iEnd)
    {
        int i = 0;
        while(i < Arr.length)
        {
            if(Arr[i] > iStart && Arr[i] < iEnd)
            {
                System.out.print(Arr[i]+" ");
            }
            i++;
        }
    }
}

class program194
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0;
        System.out.println("Enter the size : ");
        iSize = sobj.nextInt();

        System.out.println("Enter the Start : ");
        int iValue = sobj.nextInt();

        System.out.println("Enter the End : ");
        int iValue2 = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter array element : ");
        for(int i = 0; i < Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }

        Digit obj = new Digit();
        obj.Display(Arr, iValue, iValue2);
        
       
    }    
}
