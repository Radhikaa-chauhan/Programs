#include<stdio.h>
struct student{
  char name[50];
  int  roll_no;
 int age;
};
int main(){
struct student S[5];
printf("Enter the details of 5 students in order name , age and roll no.\n");
for(int i =0 ;i<5 ;i++){
scanf("%s%d%d",S[i].name,&S[i].age,&S[i].roll_no);
}
printf("The details of the student with roll no 1 are : ");
for(int i=0; i<5 ;i++){
  if(S[i].roll_no==1){
    printf("%s %d %d",S[i].name,S[i].age,S[i].roll_no);
  }
}}