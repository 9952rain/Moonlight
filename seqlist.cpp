#include <iostream>

using namespace std;

#define MAXSIZE 64
struct Seqlist {
	int data[MAXSIZE];
	int last;
};

void initSeq(Seqlist &seqlist)
{
	//seqlist.data = {0};
	seqlist.last = -1;
}

void putSeq(Seqlist &seqlist, int n)  // ×·¼Ó 
{
	if (n > MAXSIZE)
	{
		cerr << " list lenth must < " << MAXSIZE << endl;
		return;
	}
	if (n <= seqlist.last)
	{
		cerr << "has data!!" << endl;
		return;
	}

	for (int i = seqlist.last+1; i < n; ++i)
		seqlist.data[i] = i*i;
	seqlist.last = n-1;
	return;			 
}

int getSeqLenth(Seqlist &seqlist)
{
	return (seqlist.last + 1);
}

void insertSeq(Seqlist &seqlist, int data, int pos)
{
	if ( pos < 0 || pos > MAXSIZE -1)
	{
		cout << " must 0 < pos and  pos < " << MAXSIZE << endl;
		return;
	}
	
	if ( pos > seqlist.last + 1)
	{
		cout << " the pos > last data" << endl;
		return;
	}
	
	for (int i = seqlist.last; i >= pos-1; --i)
		seqlist.data[i+1] = seqlist.data[i];
	
	seqlist.data[pos-1] = data; 
	++seqlist.last;
	return;
			
}

void deleteSeq(Seqlist &seqlist, int pos)
{
	if ( pos < 0 || pos > seqlist.last)
	{
		cout << "the pos no data'" << endl;
		return;
	}
	
	for (int i = pos-1; i < seqlist.last; ++i)
		seqlist.data[i] = seqlist.data[i+1];
	
	seqlist.data[seqlist.last] = 0;
	--seqlist.last;	
	return;
} 

void printSeq(Seqlist &seqlist)
{
	cout << "data = ";
	for (int i = 0;  i <= seqlist.last; ++i)
		cout << seqlist.data[i] << " ";	
	cout << endl;		
}

int main()
{
	Seqlist seqlist;
	initSeq(seqlist);
	putSeq(seqlist, 10);
	printSeq(seqlist);
	insertSeq(seqlist, 55, 5);
	printSeq(seqlist);
	deleteSeq(seqlist, 8);
	printSeq(seqlist);
	
	return 0;
}
