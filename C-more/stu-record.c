// as a database. array of strcture
#include<stdio.h>
struct student{
    int id;
    char name[10];
    char dob[10];
    int marks;
};
int main(){
 int n;
 printf("enter the number of student you want to store: ");
 scanf("%d",&n);
 struct student record[n];
 for(int i=0; i<n; i++){
    printf("enter the %d student id: ",(i+1));
    scanf("%d",&record[i].id);
    printf("enter the %d student name: ",(i+1));
    scanf("%s",&record[i].name);
    printf("enter the %d student dob month: ",(i+1));
    scanf("%s",&record[i].dob);
    printf("enter the %d student marks: ",(i+1));
    scanf("%d",&record[i].marks);
 }
 for(int i=0; i<n; i++){
    printf("\nId- %d\t",record[i].id);
    printf("Name- %s\t",record[i].name);
    printf("dob- %s\t",record[i].dob);
    printf("marks- %d",record[i].marks);
}
return 0;
}

