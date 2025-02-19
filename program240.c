#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
#include<io.h>
#include<string.h>

void DisplayN(char FName[], int n)
{
    int fd = 0;
    int ret = 0;
    int count = 0;
 

    fd = open(FName, O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return ;
    }

    int size = lseek(fd, 0, 2);

    char *arr = malloc(sizeof(size));

    lseek(fd, 0, SEEK_SET);

    read(fd, arr, size);

    for(int i = 0; i < n; i++)
    {
        printf("%c",arr[i]);
    }
    printf("\n");
    free(arr);
    close(fd);
  
}

int main()
{
    char FileName[30];
    int iValue = 0;

    printf("Enter file name : ");
    scanf("%s", FileName);

    printf("Enter the number of character : ");
    scanf("%d", &iValue);

    DisplayN(FileName, iValue);

    return 0;
}