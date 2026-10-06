#include<iostream>
using namespace std;
class Student
{
	public:
	int roll_no;
	string name;
	float marks;
void Accept()
{ 
	cout<<"enter name:";
	cin>>name;
	cout<<"enter rollno:";
	cin>>roll_no;
	cout<<"enter marks:";
	cin<<marks;
}
void Result()
{
if(marks>=40)
{
	cout<<"pass";
}
else
{
	cout<<"fail";
}
}
