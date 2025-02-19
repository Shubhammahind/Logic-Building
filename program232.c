#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char Name[20];

    printf("Enter the file name that you want create\n");
    scanf("%[^'\n']s", Name);
    
    fd = creat(Name, 0777);

    if(fd == -1)
    {
        printf("Unable to create file\n");
    }
    else
    {
        printf("File succesfully create\n");
        close(fd);
    }

    

    return 0;
}