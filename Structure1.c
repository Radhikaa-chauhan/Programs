#include<stdio.h>
struct student{
  char name[50];
  int  roll_no;
  float marks[6],total_marks[6];
};
int main(){
struct student S[3];
printf(" Enter the details of students in order name ,roll no. and marks in 6 subjects\n");
for(int i=0 ;i<3; i++){
  scanf("%s%d",S[i].name,&S[i].roll_no);
  for(int j=0 ; j<6 ;j++){
  scanf("%d",&S[i].roll_no);
 }}
 printf("The student details are:\n");
 for(int i=0 ;i<3; i++){
  printf("%s %d\n",S[i].name,S[i].roll_no);
  for(int j=0 ; j<6 ;j++){
  printf(" %d \n",S[i].roll_no);}
 }
 for(int i=0 ; i<3 ;i++){
 int min_1= S[i].marks[0];
for(int j =0 ;j<6 ; j++){
if(min_1<S[i].marks[j]){
min_1 = S[i].marks[j];
}
}
printf("min marks is %d",min_1);
   }}


  
