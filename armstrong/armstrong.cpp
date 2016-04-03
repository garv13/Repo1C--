// armstrong.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"

using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	int i,j=0;
	for (i = 0;; i++)
	{ 
		if(i%2!=0)
		{
			printf("%d\n",i);
			j++;
		}
		if(j==25)
			break;
	}
	cin>>i;
	return 0;
}

