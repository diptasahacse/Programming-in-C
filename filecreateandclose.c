#include<stdio.h>
int main()
{
  FILE *file1;

    file1 = fopen("text.txt","w");  //w = write,r = read,a = append,w+ = write+read,r+ = read + write ,a+ = append + read

    if(file1 == NULL)
    {
        printf("File Dosenot exist");

    }
    else
    {
        printf("File Created");
        fclose(file1);

    }



    getch();
}
