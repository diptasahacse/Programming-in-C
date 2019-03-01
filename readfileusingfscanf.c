#include<stdio.h>
int main()
{
  FILE *file1;

    file1 = fopen("text.txt","r");
    char ch[40];
    char ch1[40];




    if(file1 == NULL)
    {
        printf("File Dosenot exist");

    }
    else
    {
        printf("File Created\n");

        fscanf(file1,"%s %s",ch,ch1);
        printf("%s %s",ch,ch1);


        printf("\nFile Read Successfully");
        fclose(file1);


    }



    getch();
}
