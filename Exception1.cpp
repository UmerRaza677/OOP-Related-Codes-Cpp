#include<iostream>
using namespace std;

void checkAge(int age){
	if(age >= 18){
		cout << "Welcome, Sir!" << endl;
	} else{	
		throw(age);				// throwing exception
	}
}

int main(){
		
	int age = 15;

	try {								//Try block
	checkAge(age);
	}
	catch(int myNum){					//Catch Exception
		cout << "Sorry, you must be 18 year old." << endl;
		cout << "Your age: " << myNum << endl;
	}

	return 0;
}