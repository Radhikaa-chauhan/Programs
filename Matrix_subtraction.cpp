#include<iostream>
using namespace std;
int main(){
  int a[100][100],b[100][100],c[100][100];
  int r1,r2,c1,c2,t;
  cout <<"Enter the no. of rows and columns of array 1 \n";
  cin>>r1>>c1;
   cout <<"Enter the no. of rows and columns of array 2\n";
  cin>>r2>>c2;
  if(r1==r2 && c1==c2){
  cout<<"Enter the  array 1 \n";
  for(int i=0 ;i<r1; i++){
    for(int j=0 ;j<c1; j++){
    cin>>a[i][j];
  }}
  
  cout<<"Enter the  array 2 \n";
  for(int i=0; i<r2; i++){
    for(int j=0 ;j<c2; j++){
    cin>>b[i][j];
  }}

 for(int i=0; i<r1; i++){
    for(int j=0 ;j<c1; j++){
   c[i][j]=a[i][j]-b[i][j];
  }}
cout<<"The sum of matrices is"<<endl;
for(int i=0; i<r1; i++){
    for(int j=0 ;j<c1; j++){
    cout<<c[i][j]<<endl;
  }}
  }
  else{
    cout<<"We cannot perform the subtraction because the number of rows and  columns of matrix 1 and matrix 2 are not equal";
  }

  }