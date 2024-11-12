#include<iostream>
using namespace std;
int gcd(int x, int y){
  if(x==0){
    return y;
  }
  else if(y==0){
    return x;
  }
  else{
    return gcd(y,x%y);
  }
}
int main(){
  int a,b;
  cout<<"Enter two numbers : "<<endl;
  cin>>a>>b;
  int z= gcd(a,b);
cout<<"The greatest common factor is "<<z<<endl;
}