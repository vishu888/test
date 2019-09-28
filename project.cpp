#include<iostream>
using namespace std;

class lib
{
	public:
	char name_author[50];
	char name_book[50];
	
	void get_details();
	void issue();
	void choice();
	void returnbook();
	void student();
	void librarian();
	void faculty();
	void search_books();
};
void lib::choice()
{
	int ch;
	switch(ch)
	{
		case 1:
			student();
			break;
		case 2:
			librarian();
			break;
		case 3:
			faculty()
			break;
		case 4:
			search_books()
			break;
	}
}
void librarian()
{
	int t;
	char password[20];
	char orgpass[20]={'p','a','s','s'}
	cout"ENTER THE PASSWORD"<<endl;
	cin.getline(password,20);
	t=strcmp(password,orgpass);
	if(t==0)
	{
		
	}
}


