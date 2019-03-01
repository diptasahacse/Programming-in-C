#include<stdio.h>

//enum is a custom datatype which consist of integer constant...this look like a structure and union;
enum Week_Library
{

    Sat,Sun,Mon,Tue,Wed,Thu,Fri


};
int main()
{
  enum Week_Library Day1,Day2;

    Day1 = Fri;
    Day2 = Tue;

    printf("Day 1 =%d",Day1);
    printf("\nDay 2 =%d",Day2);


    getch();
}
