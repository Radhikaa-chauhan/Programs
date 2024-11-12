#include<iostream>
using namespace std;
int Toh(int n, char s, char m, char d){
  if(n==1){
    cout<< "Move disc "<<s<<" "<<"to"<<" "<<d<<endl;
  }
  else{Toh(n-1,s,d,m);
  cout<<"Move disc "<<s<<" to"<<" "<<d<<endl;
  Toh(n-1,m,s,d);

  }
return 0;
}


int main(){
  int n;
  char s='S',m='M',d='D';
  cout<<"Enter the number of discs"<<endl;
  cin>>n;
  Toh(n,s,m,d);
}