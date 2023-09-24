#include <iostream>
#include <string>
#include <locale>

using namespace std;

extern string strGlobalSalary;
extern unsigned short height;

void ReadPersonData(string& _name, unsigned short& _age, double& _salary);
void ReadPersonData(string& _name, unsigned short& _age, unsigned short& height, unsigned short& _weight);
void WritePersonData(const string& _name, const string& _height, const string& _weight, const unsigned short* _age);

string ReadPersonName();
unsigned short ReadPersonAge();
void ReadPersonSalary(double* _salary);
void ReadPersonHeight();
void ReadPersonWeight(unsigned short& _weight);
