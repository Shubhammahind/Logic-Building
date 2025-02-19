#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
#include<io.h>
#include<string.h>

int CountWhite(char FName[])
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

    char *arr = malloc(sizeof(size));

    lseek(fd, 0, SEEK_SET);

    read(fd, arr, size);

    for(int i = 0; i < size; i++)
    {
        if(arr[i] == ' ')
        {
            count++;
        }
    }

    free(arr);
    close(fd);
    return count;
}

int main()
{
    char FileName[30];
    int iRet = 0;

    printf("Enter file name : ");
    scanf("%s", FileName);

    iRet = CountWhite(FileName);

    printf("Number of white spaces are %d", iRet);

    return 0;
}