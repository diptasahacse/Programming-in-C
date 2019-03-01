#include<stdio.h>
int main()
{
  FILE *file1;

    file1 = fopen("text.txt","a");
    char name[30];
    char uniname[40];
    int age;




    if(file1 == NULL)
    {
        printf("File Dosenot exist");

    }
    else
    {
        printf("File Created\n");

        printf("Enter Your Name =");
        gets(name);    //get data from user

        printf("Enter Your Uni Name =");
        gets(uniname);    //get data from user

        printf("Enter Your Age =");
        scanf("%d",&age);   //get data from user


        fprintf(file1,"Name = %s \nUniversity Name = %s\nAge = %d",name,uniname,age);
        printf("File Write Created");
        fclose(file1);


    }



    getch();
}
