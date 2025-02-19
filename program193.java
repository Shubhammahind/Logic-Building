import java.util.*;

class Digit
{
    public int LastOcc(int Arr[], int iNo)
    {
        int i = 0, index = -1;
        while(i < Arr.length)
        {
            if(Arr[i] == iNo)
            {
                index = i;
            }

            i++;
        }
        return index;
    }
}

class program193
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

        Digit obj = new Digit();
        int iRet = obj.LastOcc(Arr, iValue);
        
        System.out.println("index : "+iRet);
    }    
}
