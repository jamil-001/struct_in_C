#include<stdio.h>
struct student{
       int id;
       char name[20];
       float cgpa;
};
int main(){
    struct student s;
    printf("Enter your id:\n");
    scanf("%d",&s.id);
    printf("Enter your name:\n");
    scanf("%s",s.name);
    printf("Enter your cgpa:\n");
    scanf("%f",&s.cgpa);

    printf("Name = %s\nId = %d\nCgpa = %.2f\n",s.name,s.id,s.cgpa);

return 0;
}

