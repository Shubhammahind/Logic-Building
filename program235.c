#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char Name[20];
    char str[30] = {'\0'};

    printf("Enter the file name that you want open\n");
    scanf("%[^'\n']s", Name);

    printf("Enter string : ");
    scanf(" %[^'\n']s", str);
    
    fd = open(Name,O_RDWR | O_APPEND);

    write(fd,str,11);

    close(fd);
    

    return 0;
}