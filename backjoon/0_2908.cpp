#include <iostream>
using namespace std;

int ChangeNum(int num1)
{
  int num2 = num1/100;
  int num3 = (num1-num2*100)/10;
  int num4 = num1 - num2*100 - num3*10;

  return num4*100 + num3*10 + num2;
}
int main(void)
{
  int User_num1 = 734;
  int User_num2 = 893;

  User_num1 = ChangeNum(User_num1);
  User_num2 = ChangeNum(User_num2);

  if (User_num1 > User_num2)
    cout << User_num1 << endl;
  
  else if (User_num1 < User_num2)
    cout << User_num2 << endl;
  
  else
    cout << "It's same number" << endl;

  return 0;
}
