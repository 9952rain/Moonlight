#include <iostream> 

using namespace std;

int calCowNum(int year)
{
	int cownum = 1;
	for (int i = 1; i <= year; ++i)
	{
		if (i >= 4)
		{
			if ((year-i)> 3)
			{
				cownum += calCowNum((year-i));
			}
			else
			{
				++cownum;
			}
		}	
	}
	
	return cownum;
}

int main()
{
	cout << "cows number = " << calCowNum(20) << endl;
	return 0;
} 
