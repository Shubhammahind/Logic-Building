#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
#include<io.h>

int CountCapital(char FName[])
{
    int fd = 0;
    int ret = 0;
    int count = 0;
 

    fd = open(FName, O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    int size = lseek(fd, 0, 2);

    char arr[size];

    lseek(fd, 0, SEEK_SET);

    read(fd, arr, size);

    for(int i = 0; i < size; i++)
    {
        if(arr[i] >= 'A' && arr[i] <= 'Z')
        {
            count++;
        }
    }
    close(fd);
    return count;

   
    

}

int main()
{
    char FileName[30];
    int iRet = 0;

    printf("Enter file name : ");
    scanf("%s", FileName);

    iRet = CountCapital(FileName);

    printf("Number of capital character are %d", iRet);

    return 0;
}