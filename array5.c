# include <stdio.h>
int main(){
 
  int a[100];
  int n,count=0,x;
  printf("Enter the no. of elements in array \n");
  scanf("%d",&n);
  printf("Enter the elements in array \n");
  for(int i =0 ; i<n ; i++){
    scanf("%d",&a[i]);}
  printf("Enter the value whose repition u want to check ");
  scanf("%d",&x);
  for(int i=0 ;i<n; i++){
    if(a[i]==x){
      count++;
    }
    else{
      printf("Not Repeated\n");
    }
  }
  printf("The repition of %d is %d ", x,count);
  printf("\n");
  printf("The array is :");
 for(int i =0 ; i<n ; i++){
  printf("%d ", a[i]);
 }
return 0;
}