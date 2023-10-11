#include <iostream>
using namespace std;
int findgreatest(int no2, int no1,int no3);
int main() {
    
  int no1;
  cout<<"Enter the first number: ";
  cin >> no1;
  
  int no2;
  cout<<"Enter the second number: ";
  cin >> no2;
  
  int no3;
  cout<<"Enter the third number: ";
  cin >> no3;

int result=findgreatest(no2,  no1, no3);
  cout<<"The greatest number among "<<no1<<", "<<no2<<", and "<<no3<<" is: "<<result;
  return 0;
}
int findgreatest(int no2, int no1,int no3) {
if(no1>no2 && no1>no3){
    return no1;
}
if(no2>no1 && no2>no3){
return no2;
}
if(no3>no1 && no3>no2){

return no3;
}
}