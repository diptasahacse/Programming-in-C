#include<stdio.h>
int main()
{
  FILE *file1;

    file1 = fopen("student_record.txt","a");
    char name[100];
    char yes[10] = "Yes";
    char no[10] = "No";
    char per[3] = "%";
    char depertment[40];
    float java,c,cpp,python,avg;







    if(file1 == NULL)
    {
        printf("File Dosenot exist");



    }
    else
    {
        printf("Enter Student Name : ");
        scanf("%s",&name);

        printf("Enter Depertment Name : ");
        scanf("%s",&depertment);


        printf("Enter Attendance of Java : ");
        scanf("%f",&java);

        printf("Enter Attendance of C : ");
        scanf("%f",&c);


        printf("Enter Attendance of C++ : ");
        scanf("%f",&cpp);

        printf("Enter Attendance of Python : ");
        scanf("%f",&python);
        avg = (java+c+cpp+python)/4;
        if(avg < 75)
        {
            fprintf(file1,"\n%s\t%s\t\t  %.1f\t\t  %.1f\t\t  %.1f\t\t  %.1f%\t\t  %.2f\t\t  %s",name,depertment,java,c,cpp,python,avg,no);

        }
        else{
            fprintf(file1,"\n%s\t%s\t\t  %.0f%s\t\t  %.0f%s\t\t  %.0f%s\t\t  %.0f%s\t\t  %.2f%s\t\t%s",name,depertment,java,per,c,per,cpp,per,python,per,avg,per,yes);
        }








        fclose(file1);




    }



    getch();
}
