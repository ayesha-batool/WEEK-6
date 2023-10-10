#include<iostream>
using namespace std;
float dis(string day,string month,float amount);
int main() {
    string day,month;
  cout << "Enter Purchase Day: ";
  cin>>day;
  cout << "Enter Purchase Month: ";
cin>>month;
cout << "Enter Purchase Amount: ";

float amount;
cin>>amount;
float result=dis(day,month,amount);
cout<<"Payable Amount after discount: "<<result;
  return 0;
}

float dis(string day,string month,float amount) {
if(day=="Sunday" && month=="October" || month=="March"|| month=="August"){
float dis=amount*0.1;
float total=amount-dis;
return total;
}
if(day=="Monday" && month=="November" || month=="December"){
float dis=amount*0.05;
float total=amount-dis;
return total;
}
return amount;
}