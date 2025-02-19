import java.util.*;

class ArrayDemo
{
    public int Arr[];

    public ArrayDemo(int iSize)
    {
        Arr = new int[iSize];
    }

    public void Accept()
    {   
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter array element : ");
        for(int i = 0; i < Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }
    }
    public int Difference()
    {
        int iSumEven = 0, iSumOdd = 0;
        for(int i = 0; i < Arr.length; i++)
        {
            if(Arr[i] % 2 == 0)
            {
                iSumEven += Arr[i];
            }
            else
            {
                iSumOdd += Arr[i];
            }
        }

        return iSumEven - iSumOdd;
    }
}

class program181
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRet = 0;
        int Arr[];
        System.out.println("Enter Size of array : ");
        int size = sobj.nextInt();

        ArrayDemo obj = new ArrayDemo(size);

        obj.Accept();
        iRet = obj.Difference();

        System.out.println("Output : "+iRet);

    }    
}
