#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char Name[20];
    char Arr[10] = {'\0'};
    int iRet = 0;

    printf("Enter the file name that you want open\n");
    scanf("%[^'\n']s", Name);
    
    fd = open(Name, O_RDONLY);

    while((iRet = read(fd, Arr, 10)) != 0) // ()imp betwn iRet = read() -> when you dont give it will display wrong output
    {
        write(1, Arr, iRet);
    }
    printf("\n");     
    
    close(fd);
    

    return 0;
}