#include<stdio.h>

struct address{
    char city[30];
    int zipcode;
    char state[30];
};

struct student{
    int rollno;
    char name[30];
    float CGPA;
    struct address studentaddress;
};

int main(){
    struct student student1;

    printf("enter roll no:");
    scanf("%d", &student1.rollno);

    
    printf("enter name:");
    scanf("%s", student1.name);

    printf("enter CGPA:");
    scanf("%f", &student1.CGPA);

     printf("enter city:");
    scanf("%s", student1.studentaddress.city);

    printf("enter zip code:");
    scanf("%f", &student1.studentaddress.zipcode);

     printf("enter state:");
    scanf("%f", &student1.studentaddress.state);

    printf("\n----student profile-----\n");

    printf("%d\n", student1.rollno);
    printf("%s\n", student1.name);
    printf("%f\n", student1.CGPA);

     printf("%s\n", student1.studentaddress.city);
    printf("%d\n", student1.studentaddress.zipcode);
    printf("%s\n", student1.studentaddress.state);

    return 0;
}


    



