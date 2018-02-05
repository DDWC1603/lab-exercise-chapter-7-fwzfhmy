
#include <iostream>
#include <string.h>

using namespace std;

int main()
{

	string myName="Fawwaz";

	while(true)
	{ string userName;
		cout << "Enter your name (or 'quit' to exit): ";
		cin >> userName;

		if(userName=="Abu")
	       	{
			cout<<"Hey Abu!"<<endl;
		}
		else if(userName=="quit")
		{
			cout<<endl;
			break;
		}
		else
		{
			cout<<"Aha! its "<<myName<<endl;
		}
	}
	return 0;
}
