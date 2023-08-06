#include <iostream>
#include <string>
#include<cmath>
#include<cstdlib>

using namespace std;
int randnumber(int to, int from)
{
	int randnum = rand() % (from - to + 1) + to;
	return randnum;
}
int main()
{	
	srand((unsigned)time(NULL));
	
	cout << char(randnumber(97, 122)) << endl;
	cout << char(randnumber(65, 90)) << endl;
	cout << char(randnumber(33, 47)) << endl;
	cout << char(randnumber(48, 57)) << endl;
		
	return 0;
}
