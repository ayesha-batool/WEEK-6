#include <iostream>
using namespace std;
float dis(string no1,string no2,float no3);
int main() {
string no1,no2;
cout << "Enter Purchase Day: ";
cin>>no1;
cout << "Enter Purchase Month: ";
cin>>no2;
cout << "Enter Purchase Amount: ";

float no3;
cin>>no3;
float result=dis(no1,no2,no3);
cout<<"Payable Amount after discount: "<<result;
return 0;
}

float dis(string no1,string no2,float no3) {
if(no1=="Sunday" || no2=="October"){
float dis=no3*0.1;
float total=no3-dis;
return total;
}
return no3;
}