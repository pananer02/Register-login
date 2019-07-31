#include <iostream>
#include <string>
using namespace std;

int main(){
	char Ch;
	string user , userIn;
	int password, passwordIn;
	do{
		cout << "////////////Menu///////////" << endl;
		cout << "1. register" << endl;
		cout << "2. login" << endl;
		cout << "Q. Exit" <<endl;
		cout << "----------------------------------" << endl;
		cout << "Enter Menu : ";
		cin >> Ch;
		cout << endl;
		if(Ch == '1'){
			cout <<"*************Register*************" <<endl;
			cout << "Input username : ";
			cin >> user;
			cout << "Input password : ";
			cin >> password;
		}
		else if(Ch == '2'){
			cout <<"**************Login************"<<endl;
				do{
				cout << "Input username : ";
				cin >> userIn;
				cout << "Input password : ";
				cin >> passwordIn;
				cout << endl;
				if(user != userIn || password != passwordIn){
					cout << "Username or Password incorrect Please try again!!!" << endl;
					}
				}
			while(user != userIn || password != passwordIn);
		}
		else if(Ch =='Q'){
		}
		else {

			cout << "Error Menu!!!!!!"<< endl;
		}
		cout << endl;
	}
	while(Ch != 'Q');
	cout << "Exit Program........";
	return 0;
}