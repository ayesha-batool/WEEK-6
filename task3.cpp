#include <iostream>
using namespace std;
float perimeter(char shape, float no1);
int main() {
    char shape;
  cout << "Enter the shape (s for square, c for circle, t for triangle, h for hexagon): ";
  cin >> shape;
  float no1;
  cout<<"Enter the value: ";
  cin >> no1;
float result=perimeter(shape,no1);
  cout<<"The perimeter is: "<<result<<endl;
  return 0;
}
float perimeter(char shape, float no1) {
if(shape=='t'){
float formula=no1*3;
return formula;
}
if(shape=='s'){
float formula=no1*4;
return formula;
}
if(shape=='c'){
float formula=no1*6.28;
return formula;
}
if(shape=='h'){
float formula=no1*6;
return formula;
}

}