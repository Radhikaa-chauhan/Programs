#include<iostream>
using namespace std;
int main(){
  int a[100],b[100],c[100],d[100];
  int n,m,t;
  cout <<"Enter the size of array 1 \n";
  cin>>n;
  cout<<"Enter the sorted array 1 \n";
  for(int i=0 ;i<n; i++){
    cin>>a[i];
  }
  cout<<"Enter the size of array 2 \n";
  cin>>m;
  cout<<"Enter the sorted array 2 \n";
  for(int i=0; i<m; i++){
    cin>>b[i];
  }
  for(int i=0 ; i<n ; i++){
    c[i] = a[i];
    for(int j= 0; j<m ; j++){
    c[j+n] = b[j];
  }}

  for(int i=0 ; i<m+n ; i++){
    for(int j=i+1 ; j<m+n ; j++){
    if(c[i]>c[j]){
      t=c[i];
      c[i]=c[j];
      c[j]=t;
    }}
  }
  cout<<"The sorted array is\n";
  for(int i=0 ; i<m+n ; i++){
    cout<<c[i];
    cout<<"\t";
  }
 
return 0;
}