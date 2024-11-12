// Reversing of an array using recursion by Radhika Chauhan


#include<iostream>
using namespace std;
int reverse_number(int num ,int rev=0){
if(num==0){
  return rev;}
else rev=(rev*10 + num%10);
return reverse_number(num/10,rev);
}
int main(){
int num;
cout<<"Enter a number"<<endl;
cin>>num;
int z = reverse_number(num);
cout<<"The reverse of the number is "<<z<<endl;
  
}