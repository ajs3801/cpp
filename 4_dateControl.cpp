//date class design
//cin.ignore().. 이해가 되는 것 같으면서도 안되는 것 같은 놈...
#include <iostream>
using namespace std;

class Data
{
  private:
    int _year;
    int _month;
    int _day;

  public:
    void SetData(int year, int month, int day)
    {
      _year = year;
      _month = month;
      _day = day;
    }

    void AddDay(int inc)
    {
      _day = _day + inc;

      if (_month == 2)
      {
        if (_day > 28)
        {
          _month = _month + 1;
          _day = _day - 28;
        }
      }

      else if (_month%2 == 0) //when month is even number
      {
        if (_day > 30)
        {
          _month = _month + 1;
          _day = _day - 30;
        }
      }

      else if (_month%2 == 1) //when month is odd number
      {
        if (_day > 31)
        {
          _month = _month + 1;
          _day = _day - 30;
        }
      }
    }

    void AddMonth(int inc)
    {
      _month = _month + inc;

      if (_month > 12)
      {
        _month = _month - 12;
        _year = _year + 1;
      }
    }

    void AddYear(int inc)
    {
      _year = _year + inc;
    }

    void ShowData()
    {
      cout << "Current date : ";
      cout << _year << "." << _month << "." << _day << endl;
    }

};

void Line(void)
{
  cout << "============================================" << endl;
} 

void ShowDisplay(void)
{
  cout << "1. add day" << endl;
  cout << "2. add month" << endl;
  cout << "3. add year" << endl;
  cout << "4. show date" << endl;
  cout << "5. quit" << endl;
  cout << "[user input]...";
}

int main(void)
{
  Data data;

  //Basic Setting.
  int UserYear;
  int UserMonth;
  int UserDay;

  cout << "Input Year: ";
  cin >> UserYear;

  cout << "Input Month: ";
  cin >> UserMonth;

  cout << "Input Day: ";
  cin >> UserDay;

  //data Init 
  data.SetData(UserYear,UserMonth,UserDay);

  //loop
  while (true)
  {
    cin.ignore();
    Line();
    ShowDisplay();
    int Input=0;
    cin >> Input;

    if(Input == 1)
    {
      int IncDay=0;
      Line();
      cout << "How many day you want to increase? ";
      cin >> IncDay;

      data.AddDay(IncDay);
      continue;
    }

    else if (Input == 2)
    {
      int IncMonth=0;
      Line();
      cout << "How many month you want to increase? ";
      cin >> IncMonth;

      data.AddMonth(IncMonth);
      continue;
    }

    else if (Input == 3)
    {
      int IncYear=0;
      Line();
      cout << "How many year you want to increase? ";
      cin >> IncYear;

      data.AddYear(IncYear);
      continue;
    }

    else if (Input == 4)
    {
      Line();
      data.ShowData();
    }  
      

    else if (Input == 5)
      break;

    else if (Input > 5)
    {
      Line();
      cout << "Input ERROR" << endl;
    }     
  }

  return 0;
}
