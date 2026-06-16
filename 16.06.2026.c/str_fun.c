#include<stdio.h>

struct Student
{
    int rollno;
    float marks;
};
void display(int rollno,float marks);

int main()
{
    struct Student s;
    printf("Enter the rollno :");
    scanf("%d",&s.rollno);
    
    printf("Enter the marks :");
    scanf("%f",&s.marks);
    
    display(s.rollno,s.marks);
    
    return 0;
}
void display(int rollno,float marks)
{
    printf("Student details:\n");
    printf("Student Rollno : %d\n",rollno);
    printf("Student marks : %.2f\n",marks);
}
