#include<stdio.h>
int main()
{
  FILE *file1;

    file1 = fopen("text.txt","r");
    char ch;




    if(file1 == NULL)
    {
        printf("File Dosenot exist");

    }
    else
    {
        printf("File Created\n");

        while(!feof(file1))
        {
            ch = fgetc(file1);
            printf("%c",ch);

        }


        printf("\nFile Read Successfully");
        fclose(file1);


    }



    getch();
}
