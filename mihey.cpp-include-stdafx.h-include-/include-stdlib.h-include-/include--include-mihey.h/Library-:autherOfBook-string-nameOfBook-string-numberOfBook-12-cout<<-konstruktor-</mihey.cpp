#include "stdafx.h"
#include <iostream>
//#include "stdlib.h"
#include <string>
//#include <stdlib.h>
#include "mihey.h"

  /*Library():autherOfBook("string"),nameOfBook("string"),numberOfBook(12){cout<<"konstruktor"<<numberOfBook;}
	}*/
void Library::DisplayLibrary()
{
	cout<<"Auther of Book: "<<autherOfBook<<endl<<"Name of book: "<<nameOfBook<<endl<<"Number of book: "<<numberOfBook<<endl;
	cout<<getLibrary();

}	
    int Library::getLibrary()
	{
	return numberOfBook;
	}
	void Library::setLibrary(string aOfBook, string nOfBook,int nuOfBook){
		autherOfBook=aOfBook;
		nameOfBook=nOfBook;
		numberOfBook=nuOfBook;
	}
 
