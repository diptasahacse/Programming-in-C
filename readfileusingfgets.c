#include<stdio.h>
int main()
{
  FILE *file1;

    file1 = fopen("text.txt","r");
    char ch[40];




    if(file1 == NULL)
    {
        printf("File Dosenot exist");

    }
    else
    {
        printf("File Created\n");

        while(!feof(file1))
        {
            fgets(ch,39,file1);
            printf("%s \n",ch);

        }


        printf("\nFile Read Successfully");
        fclose(file1);


    }



    getch();
}
