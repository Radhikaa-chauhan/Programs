#include<iostream>
using namespace std;
int main(){
  int a[100][100],b[100][100];
  int r1,c1,t;
  cout <<"Enter the no. of rows and columns of array  \n";
  cin>>r1>>c1;
   
  cout<<"Enter the  array  \n";
  for(int i=0 ;i<r1; i++){
    for(int j=0 ;j<c1; j++){
    cin>>a[i][j];
  }}
  

 for(int i=0; i<r1; i++){
    for(int j=0 ;j<c1; j++){
   b[j][i]=a[i][j];
  }}
cout<<"The transpose of matrices is"<<endl;
for(int i=0; i<c1; i++){
    for(int j=0 ;j<r1; j++){
    cout<<b[i][j]<<endl;
  }}
  }
 

  