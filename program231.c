#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char Name[20];

    printf("Enter the file name that you want open\n");
    scanf("%[^'\n']s", Name);
    
    fd = open(Name, O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File succesfully open witg FD %d\n", fd);
        close(fd);
    }

    

    return 0;
}