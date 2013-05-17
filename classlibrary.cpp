#include "stdafx.h"
#include <iostream>
//#include "stdlib.h"
#include <string>
//#include <stdlib.h>
using namespace std;
class Library{
private:
  string autherOfBook;
	string nameOfBook;
	int numberOfBook;
public:
	/*Library():autherOfBook("string"),nameOfBook("string"),numberOfBook(12){cout<<"konstruktor"<<numberOfBook;}
	}*/
void DisplayLibrary()
{
	cout<<"Auther of Book: "<<autherOfBook<<endl<<"Name of book: "<<nameOfBook<<endl<<"Number of book: "<<numberOfBook<<endl;
	cout<<getLibrary();

}	
    int getLibrary()
	{
	return numberOfBook;
	}
	void setLibrary(string aOfBook, string nOfBook,int nuOfBook){
		autherOfBook=aOfBook;
		nameOfBook=nOfBook;
		numberOfBook=nuOfBook;
	}
	

};
 
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

