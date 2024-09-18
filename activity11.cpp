#include <iostream>
using namespace std;

int main(){
  int num1, num2;
  cout << "Enter the first value: " << endl;
  cin >> num1;
  cout << "Enter the second value: " << endl;
  cin >> num2;
  if(num1 > num2){
    cout << num1;
  }
  else{
    cout << num2;
  }
  return 0;
}
