#include <iostream>
#include <cstdlib>
#include "bstdlib.h"

using std::endl;
using std::cout;

bool check();

BStdLib bstd;
Debug debug;

int main()
{
	cout <<"Did you want to use this calculator for IHSS? (y or n)\n";
	if (tolower(bstd.checkChar("yYnN"))=='n')
	{
		cout <<"Sorry.";
		return 0;
	}

	int hours(0);
	int minutes(0);

	bool cont(false);

	do
	{
		cout << "How many hours?\n";
		hours=bstd.checkInt(false);

		cout << "Did you want your answer to be " << hours <<"? (y or n)\n";
		cont=check();

		if (cont==false)
		{
			cout << "Sorry\n";
			bstd.stall();
		}

	}while(!cont);

	bstd.stall();
	bstd.clearScreen();
	cont=false;

	do
	{
		cout <<"How many Minutes?\n";
		minutes=bstd.checkInt(false);

		cout <<"Did you want the answer to be " << minutes << "? (y or n)\n";
		cont=check();

		if (cont==false)
		{
			cout << "Sorry\n";
		}

	}while (!cont);

	minutes+=(hours*60);

	cont=false;

	if (hours >70)
		minutes/=2;
	int day(0);
	do
	{
		cout << "Day of the month?\n";
		day=bstd.checkInt(false);

		cout << "Did you want the answer to be " << day << "? (y or n)\n";
		cont=check();

		if (cont==false)
		{
			cout << "Sorry\n";
		}

	}while(!cont);

	if (day > 15)
		day-=15;

	int minPerDay=minutes/day;
	bstd.clearScreen();

	cout << (minPerDay/60) << " hours.\n";
	cout <<  (minPerDay % 60) << " minutes\n";
	cout << (minutes - (minPerDay*day)) << " left over\n";

	bstd.stall();

	return 0;
}

bool check()
{
	if(tolower(bstd.checkChar("yYnN"))=='n')
		return false;
	else
		return true;
}
