#include<stdio.h>
int main(){
  int a[100];
  int n,z,pos;
  printf("Enter the no. of elements in array \n");
  scanf("%d",&n);
  printf("Enter the elements in array \n");
  for(int i =0 ; i<n ; i++){
    scanf("%d",&a[i]);
  }printf("Enter the element u want to delete the ");
  scanf("%d",&z);
  for(int i=0 ;i<n ;i++){
  if(a[i]==z){
    pos = i;
    break;
}}

for(int i = pos ; i<n-1 ; i++){
  a[i]= a[i+1];
}
  printf("The array is :");
 for(int i =0 ; i<n-1 ; i++){
  printf("%d ", a[i]);
 }
return 0;
}