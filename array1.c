#include<stdio.h>
int main(){
  int a[100],n,x,y;
  printf("Enter the no.of elements in the array \n");
  scanf("%d",&y);
  printf("Enter the array \n");
  for(int i=0 ; i<y ; i++){
    scanf("%d",&a[i]);
  }
   printf("Enter the position u want to insert the element\n");
   scanf("%d",&n);
   printf("Enter the element \n");
  scanf("%d",&x);
  for(int i = y ; i>=n-1; i--){
    a[i] = a[i-1];
   }
     a[n-1] = x;
  printf("The array is :");
 for(int i =0 ; i<y ; i++){
  printf("%d ", a[i]);
 }
return 0;

}