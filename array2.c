# include <stdio.h>
int main(){
  int a[100];
  int n,pos=0,x;
  printf("Enter the no. of elements in array \n");
  scanf("%d",&n);
  printf("Enter the elements of sorted array \n");
  for(int i =0 ; i<n ; i++){
    scanf("%d",&a[i]);
  }
  printf("Enter the element u want to insert\n");
  scanf("%d",&x);
 for(int i=0 ; i<n ; i++){
  if(x>a[i]){
    pos++;
   
  }
 }
 for(int i = n ; i>=pos; i--){
    a[i] = a[i-1];
   }
     a[pos] = x;
  
  printf("The array is :");
 for(int i =0 ; i<n ; i++){
  printf("%d ", a[i]);
 }
return 0;
}