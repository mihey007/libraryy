#include "stdafx.h"
#include <iostream>
//#include "stdlib.h"
#include <string>
//#include <stdlib.h>
#include "mihey.h"
using namespace std;
int main()
{
    Library my;
  string aOfBook;
	string nOfBook;
	int nuOfBook;
	cout<<"Type Auther of book"<<endl;
	cin>>aOfBook;
	cout<<"Type Name of book"<<endl;
	cin>>nOfBook;
	cout<<"Type Number of book"<<endl;
	cin>>nuOfBook;
	my.setLibrary(aOfBook,nOfBook,nuOfBook);
	my.DisplayLibrary();
	system("pause");
	return 0;
}
