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
int main()
{
//creates 2 random numbers
	int seed= time(0);
	srand(seed);
	int num1;
	int num2;
	num1= (rand()%(0-999+1))+0;
	num2= (rand()%(0-999+1))+0;
//finds solution for 2 random numbers
	int solution;
	solution = num1+num2;
//outputs 2 random numbers
	cout << "Press Enter to check answer"<<endl;
	cout<<"  "<<right<<num1<<endl;
	cout<<"+ "<<right<<num2<<endl;
	cout<<"--------"<<endl;
//outputs solution after user preses 'e'
	
	cin.get();
	cout<<"  "<<right<<solution<<endl;





	return 0;
}