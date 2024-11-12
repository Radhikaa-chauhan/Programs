# include <stdio.h>
int main(){
 
  int a[100];
  int n;
  printf("Enter the no. of elements in array \n");
  scanf("%d",&n);
  printf("Enter the elements in array \n");
  for(int i =0 ; i<n ; i++){
    scanf("%d",&a[i]);
  }
  printf("The array is :");
 for(int i =0 ; i<n ; i++){
  printf("%d ", a[i]);
 }
return 0;
}