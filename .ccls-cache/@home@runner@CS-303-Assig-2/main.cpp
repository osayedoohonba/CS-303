//Osayamen Edo-Ohonba
//UMKC-CS 303-Assig 1
//Sep 23 2022
#include <iostream>
#include "Functions.h"


int main() {
	int num;
	int num2;
	int x = -1;
	int arr[size] = {};
	//-1 setter for null parts of array
	for(int i=0; i<200; i++){
		arr[i] = -1;
	}
	
	string str;
	ifstream inFile ("NumFile.txt");
	int count = 0;
	if (inFile.is_open()){
		while(getline(inFile, str, ' ')){
			arr[count] = stoi(str);
    		count++;
    	}
		inFile.close();
	}
	else return 1;
	
	int input = 0;
	//Add a try and catch blocks to the user inputs for the following functions from assignment 1

	//A function that can modify the value of an integer when called with the index of the integer in the array and return the new value and old value back to the user.
	//▪A function that adds a new integer to the end of the array2)

	do{
		try{
			menu();
			cin >> input;
			switch(input) {
				case -1:
					cout << "goodbye!";
					break;
				case 1:
					cout << endl;
					printArray(arr, size);
					cout << endl;
					input = 0;
					break;
				case 2:
					cout << "Enter number to check" << endl;
					cin >> num;
					cout << checkIfExsits(arr, size, num) << endl;
					cout << endl;
					input = 0;
					break;
				case 3:
					cout << "Enter index" << endl;
					cin >> num;
					cout << "Enter number to replace" << endl;
					cin >> num2;
					modInt(arr, size, num, num2);
					cout << endl;
					input = 0;
					break;
				case 4:
					cout << "Enter number to add" << endl;
					cin >> num;
					addNewInt(arr, size, num);
					cout << endl;
					input = 0;
					break;
				default:
					cout << endl;
					throw x;
			}
		}
		catch(int x)
		{
			cout << "Input Error\n" << endl;
			break;
		}
	}while(input == 0);
	return 0;
}