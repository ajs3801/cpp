#include <iostream>
#include <string>
using namespace std;

//sub-function---------------------------------------------------------------------------------------------------
int DisplayName(string name)
{
  while (true)
  {
    string Quit;
    cout << "Your name is " << name << endl;
    cin.ignore();

    while (Quit != "y" | Quit != "n")
    {
      cout << "Display it again? [y/n]";
      getline(cin,Quit);

      if (Quit == "y")
      {
        cout << "Your name is " << name << endl;
        continue;
      }  

      else if (Quit == "n")
        return 0;

      else
      {
        cout << "Input ERROR. Make sure to input [y] or [n]" << endl;
        continue;
      }
    }

    return 0;
  }
}

int DisplayAge(int age)
{
  while (true)
  {
    string Quit;
    cout << "Your age is " << age << endl;
    cin.ignore();

    while (Quit != "y" | Quit != "n")
    {
      cout << "Display it again? [y/n]";
      getline(cin,Quit);

      if (Quit == "y")
      {
        cout << "Your age is " << age << endl;
        continue;
      }  

      else if (Quit == "n")
        return 0;

      else
      {
        cout << "Input ERROR. Make sure to input [y] or [n]" << endl;
        continue;
      }
    }
  }

  return 0;
}

int DisplayGender(string gender)
{
  while (true)
  {
    string Quit;
    cout << "Your gender is " << gender << endl;  
    cin.ignore();
    while (Quit != "y" | Quit != "n")
    {
      cout << "Display it again? [y/n]";
      getline(cin,Quit);

      if (Quit == "y")
      {
        cout << "Your gender is " << gender << endl;
        continue;
      }  

      else if (Quit == "n")
        return 0;

      else
      {
        cout << "Input ERROR. Make sure to input [y] or [n]" << endl;
        continue;
      }
    }
  }

  return 0;
}

int DisplayAll(string name, int age, string gender)
{
  while (true)
  {
    string Quit;
    cout << "Your name is " << name << endl;
    cout << "Your age is " << age << endl;
    cout << "Your gender is " << gender << endl;
    cin.ignore();

    while (Quit != "y" | Quit != "n")
    {
      cout << "Display it again? [y/n]";
      getline(cin,Quit);

      if (Quit == "y")
      {
        cout << "Your name is " << name << endl;
        cout << "Your age is " << age << endl;
        cout << "Your gender is " << gender << endl;
        continue;
      }  

      else if (Quit == "n")
        return 0;

      else
      {
        cout << "Input ERROR. Make sure to input [y] or [n]" << endl;
        continue;
      }
    }
  }

  return 0;
}

int ModifyInfor(string &name , int &age , string &gender)
{
  while (true)
  {
    cin.ignore();
    int user_input;
    char again;

    cout << "5.1 modify your name" << endl;
    cout << "5.2 modify your age" << endl;
    cout << "5.3 modify your gender" << endl;
    cout << "5.4 quit" << endl;
    cout << "Input [1],[2],[3],[4]";
    cin >> user_input;

    if (user_input == 1)
    {
      cout << "Input modified name...";
      cin >> name;
      cin.ignore();

      while (true)
      {
        cout << "modify again? [y,n]";
        cin >> again;

        if (again == 'y')
          break;

        else if (again == 'n')
          return 0;
        
        else
          cout << "[Input ERROR]";
      }

      continue;
    }

    else if (user_input == 2)
    {
      cout << "Input modified age...";
      cin >> age;
      cin.ignore();

      while (true)
      {
        cout << "modify again? [y,n]";
        cin >> again;

        if (again == 'y')
          break;

        else if (again == 'n')
          return 0;
        
        else
          cout << "[Input ERROR]";
      }

      continue;
    }

    else if (user_input == 3)
    {
      cout << "Input modified gender [M,FM]...";
      cin >> gender;
      cin.ignore();

      while (true)
      {
        cout << "modify again? [y,n]";
        cin >> again;

        if (again == 'y')
          break;

        else if (again == 'n')
          return 0;
        
        else
          cout << "[Input ERROR]";
      }

      continue;
    }

    else if (user_input == 4)
      return 0;

    else
      cout << "Type ERROR, make sure to input [5.1],[5.2],[5.3],[5.4]" << endl;
  }
}

//sub-function-end---------------------------------------------------------------------------------------------------
//main-function------------------------------------------------------------------------------------------------------
int main(void)
{
  string name,gender;
  int age=0;

  //initialize personal data
  cout << "[Initialize your information...]" << endl;

  cout << "Input your name...";
  getline(cin,name);
  cout << name << endl;

  cout << "Input your age...";
  cin >> age;
  cout << age << endl;

  cin.ignore();

  cout << "Input your gender(M/FM)...";
  getline(cin,gender);
  cout << gender << endl;

  cout << "\n";
  //Loop
  while (true)
  {
    int user_input = 0;

    cout << "=================================================" << endl;
    cout << "1. display your name" << endl;
    cout << "2. display your age" << endl;
    cout << "3. display your gender" << endl;
    cout << "4. display ALL your information" << endl;
    cout << "5. modify your information" << endl;
    cout << "6. quit program" << endl;
    cout << "Input integer whatever you want...";
    cin >> user_input;
    cout << "=================================================" << endl;

    if (user_input == 1)
      DisplayName(name);

    else if (user_input == 2)
      DisplayAge(age);

    else if (user_input == 3)
      DisplayGender(gender);

    else if (user_input == 4)
      DisplayAll(name, age, gender);

    else if (user_input == 5)
      ModifyInfor(name,age,gender);

    else if (user_input == 6)
      break;
    
    else
      cout << "[Input ERROR]" << endl;
  }

  return 0;
}
//main-function-end--------------------------------------------------------------------------------------------------
