#include <iostream>
using namespace std;
int fib(int num){
  if(num==1){
    return 0;
  }
  else if(num==2){
    return 1;
  }
  else{
    return fib(num-2)+fib(num-1);
  }
}
int main()
{ int num;
  cout<<"enter a number"<<endl;
  cin>>num;
int z = fib(num);

cout<<"The last term of fibonacci series is : "<<z;
return 0;
}