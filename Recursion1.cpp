#include <iostream>
using namespace std;
int fact(int num){
  if(num==0||num==1){
    return 1;
  }
  else{
    return (num*fact(num-1));
  }
}
int main(){
  int num_1;
  cout<<"Enter a number whose factorial you want  to find"<<endl;
  cin>>num_1;
  int z= fact(num_1);
  cout<<"The factorial of the entered no. is "<<z;
  return 0;
}