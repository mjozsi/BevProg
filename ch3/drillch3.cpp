#include "../std_lib_facilities.h"

int main()
{
	string first_name;
	
	cout<<"Enter the name of the person you want to write to.\n";
	cin>>first_name;
	cout<<"Dear "<<first_name<<"!\n"<<"How are you? I am fine. I miss you.\n";
	cout<<".Had some probleams lately but now everything is back on the track.\n";
	
	cout<<"Please write the name of your friend you would like to ask about.\n";
	string friend_name;
	cin>>friend_name;
	cout<<"Have you seen "<<friend_name<<" lately?\n";
	
	char friend_sex=0;
	cout<<"Please write the gender of your friend (f/m).\n";
	
	cin>>friend_sex;
	if (friend_sex=='f')
		cout<<"If you see "<<friend_name<<" please ask her to call me.\n";
	if (friend_sex=='m')
		cout<<"If you see "<<friend_name<<" please ask him to call me.\n";
	
	int age;
	cout<<"Please enter the age of the recipient.\n";
	cin>>age;
	
	string simple_error=("you're kidding");
	if (age<=0)
		cout<<simple_error;
	else
		if (age>=100)
		 	cout<<simple_error;
	
	cout<<"I hear you just had a birthday and you are "<<age<<"years old.\n";
	
	if (age==12)
		cout<<"Next year you will be "<<age+1<<".\n";
	else
		if(age==17)
			cout<<"Next year you will be able to vote.\n";
			else
				if (age>70) 
					cout<<"I hope you are enjoying retirement.\n";
	cout<<"\nYours sincerely,\n\nJózsi\n";
	return 0;
	



}
