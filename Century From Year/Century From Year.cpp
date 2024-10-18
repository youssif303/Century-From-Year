#include<iostream>
using namespace std;
void century(int year)
{
	
	if (year % 100 == 0)
		cout << "we are in Century= " << year/100;
	else
		cout << "we are in Century= " << year / 100 +1;
}    
int main()
{
	century(2024);
	//ceil(1805/100);
	return 0;
}
