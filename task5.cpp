#include <iostream>
using namespace std;
float
 findgreatest(string no2, string no1,float
 no3);
int main() {
    
  string no1;
  cout<<"Enter Purchase Day: ";
  cin >> no1;
  
  string no2;
  cout<<"Enter Purchase Month: ";
  cin >> no2;
  
  float
   no3;
  cout<<"Enter Purchase Amount: ";
  cin >> no3;


 
  
float
 result=findgreatest(no2,  no1, no3);
 
   cout<<"Payable Amount after discount: "<<result;
}
float
 findgreatest(string no2, string no1,float
 no3) {
if(no1=="Sunday" &&  no2=="October"){
   float dis =no3*0.10;
float total=no3-dis;
    return total;
}
if(no1=="Sunday"){
 float dis =no3*0.050;
float total=no3-dis;
    return total;
}
else{}

return no3;
}
