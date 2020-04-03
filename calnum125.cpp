#include <iostream>

using namespace std;

int calnum ()
{
	int count=0;
	for (int m = 0; m <= 100/5; ++m)
		for (int n = 0; n <= (100-5*m)/2; ++n)
			++count;
	return count;
}

int main()
{
	cout << "keyways = " << calnum() << endl;;	
	return 0;
}
