#include<stdio.h>
int main()
{
  FILE *file1;

    file1 = fopen("text.txt","a"); //when i using a mode..if any file was not cteated,then new file will be create..if any file was already cteated then it wile be write from end line in the file
    char c[20] = " Keya Saha";

    int length = strlen(c);

    if(file1 == NULL)
    {
        printf("File Dosenot exist");

    }
    else
    {
        printf("File Created\n");

        for(int i = 0;i < length;i++)
        {
            fputc(c[i],file1);


        }
        printf("File Write Created");
        fclose(file1);


    }



    getch();
}
