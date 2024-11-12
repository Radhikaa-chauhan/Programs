// Sum of digits using recursion by Radhika Chauhan

#include<iostream>
using namespace std;
int sum_of_digits(int num){
  if(num==0){
    return 0;
  }
else{
    return num%10 + sum_of_digits(num/10);
  }
}
int main(){
  int num;
  cout<<"Enter a number"<<endl;
  cin>>num;
  int z = sum_of_digits(num);
  cout<<"The sum of digits are "<<z;
}