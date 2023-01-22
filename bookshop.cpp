#include<iostream>



using namespace std;

class book	{
private:
	string author,title,publisher;
	float price;
	int stock;
public:
	book()
	{
	author;
	title;
	publisher;
	price;
	stock;
	}
	void data();
	void editdata();
	void showdata();
	int search();
	void buybook();

};

void book::data()
  {
    cout<<"Enter Author Name:";
	cout<<"Enter Title Name: ";

	cout<<"Enter Publisher Name: ";

	cout<<"Enter Price: ";

	cout<<"Enter Stock Position: ";


}

void book::editdata()	{

	cout<<"\nEnter Author Name: ";
	cout<<"Enter Title Name: ";
	cout<<"Enter Publisher Name: ";
	cout<<"Enter Price: ";
	cout<<"Enter Stock Position: ";

}

void book::showdata()	{
	cout<<"\nAuthor Name: "<<author;
	cout<<"\nTitle Name: "<<title;
	cout<<"\nPublisher Name: "<<publisher;
	cout<<"\nPrice: "<<price;
	cout<<"\nStock Position: "<<stock;

}




void book::buybook()	{
	int count;
	cout<<"\nEnter Number Of Books to buy: ";
	cin>>count;
	if(count<=stock)	{
		stock=stock-count;
		cout<<"\nBooks Bought Sucessfully";
		cout<<"\nAmount: Rs. "<<(price);count;
	}
	else
		cout<<"\nRequired Copies not in Stock";
}

int main()	{
	book *B[20];
	int i=0,r,t,choice;
	char titlebuy[20],authorbuy[20];
	while(1)	{
		cout<<"\n\t\tMENU"
		<<"\n1. Entry of New Book"
		<<"\n2. Buy Book"
		<<"\n3. Search For Book"
		<<"\n4. Edit Details Of Book"
		<<"\n5. Exit"
		<<"\n\nEnter your Choice: ";
		cin>>choice;

		switch(choice)	{
			case 1:	B[i] = new book;
				B[i]->data();
				i++;	break;

			case 2: cin.ignore();
				cout<<"\nEnter Title Of Book: "; cin.getline(titlebuy,20);
				cout<<"Enter Author Of Book: ";  cin.getline(authorbuy,20);
				for(t=0;t<i;t++)	{
						{
						B[t]->buybook();
						break;
					}
				}
				if(t==1)
				cout<<"\nThis Book is Not in Stock";

				break;
			case 3: cin.ignore();
				cout<<"\nEnter Title Of Book: "; cin.getline(titlebuy,20);
				cout<<"Enter Author Of Book: ";  cin.getline(authorbuy,20);

				for(t=0;t<i;t++)	{
					{
						cout<<"\nBook Found Successfully";
						B[t]->showdata();
						break;
					}
				}
				if(t==i)
				cout<<"\nThis Book is Not in Stock";
				break;

			case 4: cin.ignore();
				cout<<"\nEnter Title Of Book: "; cin.getline(titlebuy,20);
				cout<<"Enter Author Of Book: ";  cin.getline(authorbuy,20);

				for(t=0;t<i;t++)	{
						{
						cout<<"\nBook Found Successfully";
						B[t]->editdata();
						break;
					}
				}
                        322if(t==i)
				cout<<"\nThis Book is Not in Stock";
				break;

			case 5: exit(0);
			default: cout<<"\nInvalid Choice Entered";

		}
	}




	return 0;
}
