import java.util.*;

class ArrayDemo
{
    public void Display(int Arr[])
    {
        for(int i = 0; i < Arr.length; i++)
        {
            if(Arr[i] % 5 == 0 && Arr[i] % 2 == 0)
            {
                System.out.print(Arr[i]+" ");
            }
           
        }

     
    }
}

class program183
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Size of array : ");
        int iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter array element : ");
        for(int i = 0; i < Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }

        ArrayDemo obj = new ArrayDemo();

        obj.Display(Arr);

    }    
}
