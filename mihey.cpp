#include "stdafx.h"
#include <iostream>
//#include "stdlib.h"
#include <string>
//#include <stdlib.h>
using namespace std;
class Library
{
private:
  string autherOfBook;
  string nameOfBook;
	string theme;
	int numberOfBook;
	int pageOfBook;
public:
	/*Library():autherOfBook("string"),nameOfBook("string"),page of book("string"),numberOfBook(12),theme("int"){cout<<"konstruktor"<<numberOfBook;}
	}*/
void DisplayLibrary()
{
	cout<<"Auther of Book: "<<autherOfBook<<endl<<"Name of book: "<<nameOfBook<<endl<<"page of book: "<<pageOfBook<<endl<<"Number of book: "<<numberOfBook<<endl<<"theme: "<<theme<<endl;
	cout<<getLibrary();

}	
    int getLibrary()
	{
	return numberOfBook;
	}
	void setLibrary(string aOfBook, string nOfBook,string teme,int nuOfBook,int peOfBook){
		autherOfBook=aOfBook;
		nameOfBook=nOfBook;
		theme=teme;
		numberOfBook=nuOfBook;
		pageOfBook=peOfBook;
	}


};
 
int main()
{
    Library my;
	string aOfBook;
	string nOfBook;
	string teme;
	int nuOfBook;
	int peOfBook;

	cout<<"Type Auther of book"<<endl;
	cin>>aOfBook;
	cout<<"Type Name of book"<<endl;
	cin>>nOfBook;
	cout<<"Type theme"<<endl;
	cin>>teme;
	cout<<"Type Number of book"<<endl;
	cin>>nuOfBook;
	cout<<"Type page of book"<<endl;
	cin>>peOfBook;
	my.setLibrary(aOfBook,nOfBook,teme,nuOfBook,peOfBook);
	my.DisplayLibrary();
	system("pause");
	return 0;
}
