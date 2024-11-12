#include<iostream>
using namespace std;
int power(int a, int b){
  if(b==0){
    return 1;
  }
  else if(b>0){
    return a*power(a,b-1);
  }
}
int main(){
  int base,exp;
  cout<<"Enter the base and exponent"<<endl;
  cin>>base>>exp;
int z = power(base,exp);
cout<<"Base raised to the power exp is "<<z<<endl;
return 0; 
}