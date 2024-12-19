/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
using namespace std;
#include <cstdlib>
#include <iostream>
#include <ctime>
#include<string>
#include <iostream>

int main()
{
  //creates variables for name,age,city,college,profession,animal,pets name
  string name;
  int age;
  string nameOfCity;
  string nameOfCollege;
  string profession;
  string typeOfAnimal;
  string petsName;
  //asks the user for name,age,city,college,profession,animal,pets name
  cout << "What is your name?: "<<endl;
  getline(cin,name);
  cout<<"what is your age?: "<<endl;
  cin >> age;
  cin.ignore();
  cout <<"What is the name of your city?: "<<endl;
  getline(cin,nameOfCity);
  cout <<"What is the name of your college?: "<<endl;
  getline(cin,nameOfCollege);
  cout<<"What is your profession?: "<<endl;
  getline(cin,profession);
  cout<< "what is the type of animal you have?: "<<endl;
  getline(cin,typeOfAnimal);
  cout <<"What is your pets name?: "<<endl;
  getline(cin,petsName);
  //outputs story 
cout<<"There once was a person named " <<name<<" who lived in "<<nameOfCity<<". At the age of "
<<age<<" went to college at "<<nameOfCollege<<". "<<name<<" graduated and went to work as a "
<<profession<<". Then "<<name<<" adopted a "<<typeOfAnimal<<" named "<<petsName<<". They both lived happily ever after."
<<endl;
    return 0;
}