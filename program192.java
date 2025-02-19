import java.util.*;

class Digit
{
    public int FirstOcc(int Arr[], int iNo)
    {
        int i = 0;
        while(i < Arr.length)
        {
            if(Arr[i] == iNo)
            {
                return i;
            }

            i++;
        }
        return -1;
    }
}

class program192
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
        int iRet = obj.FirstOcc(Arr, iValue);
        
        System.out.println("index : "+iRet);
    }    
}
