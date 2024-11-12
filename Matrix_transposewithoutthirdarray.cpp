#include<iostream>
using namespace std;
int main(){
  int a[100][100];
  int r1,c1;
  cout <<"Enter the no. of rows and columns of array  \n";
  cin>>r1>>c1;
   
  cout<<"Enter the  array  \n";
  for(int i=0 ;i<r1; i++){
    for(int j=0 ;j<c1; j++){
    cin>>a[i][j];
  }}
  cout<<"Before transposing the array is: \n";
  for(int i=0; i<r1; i++){
    for(int j=0 ;j<c1; j++){
    cout<<a[i][j]<<endl;
  }}

 for(int i=0; i<r1; i++){
    for(int j=0 ;j<c1; j++){
 int temp=a[i][j];
 a[i][j]= a[j][i];
 a[j][i]= temp;
  }}
cout<<"The transpose of matrix is"<<endl;
for(int i=0; i<c1; i++){
    for(int j=0 ;j<r1; j++){
    cout<<a[i][j]<<endl;
  }}
  }
 

  