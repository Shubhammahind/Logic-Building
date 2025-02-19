#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char Name[20];
    char Arr[10] = {'\0'};
    int iRet = 0;
    int iCount = 0;

    printf("Enter the file name that you want open\n");
    scanf("%[^'\n']s", Name);
    
    fd = open(Name, O_RDONLY);

    int size = lseek(fd, 0, SEEK_END);//lseek() returns the new file offset

    printf("Size of file is %d\n", size);

    close(fd);
    

    return 0;
}