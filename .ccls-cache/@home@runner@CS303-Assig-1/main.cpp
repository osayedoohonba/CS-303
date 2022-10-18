//Osayamen Edo-Ohonba
//UMKC-CS 303-Assig 1
//Sep 23 2022
#include <iostream>
#include "Functions.h"


int main() {
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

	//Will improve the array manipulation on Assig 2 and make it more user friendly.
	//Modifications will be made in code for this week.
	printArray(arr, size);
	cout << endl << endl;
	cout << checkIfExsits(arr, size, 200) << endl;
	cout << endl << endl;
	addNewInt(arr, size, 7);
	cout << endl << endl;
	removeInt(arr, size, 7);
	cout << endl << endl;
	modInt(arr, size, 21, 6);
}