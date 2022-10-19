#include "Functions.h"

//simply just prints the array
void printArray(int* array, int size){
	int arraySize = size;
	for(int i=0; i<size; i++){
		if (array[i] == -1) return;
		cout << array[i] << " ";
		if ((i+1)%10 == 0) cout << endl;
	}
}

//Check if a certain integer exists in the array if the number is present return the index where the number is present. 
int checkIfExsits(int* array, int size, int number){
	
	for(int i=0; i<size; i++){
		if (array[i] == number) {
      		return i;
   		}
	}
	return -1;
}

//A function that can modify the value of an integer when called with the index of the integer in the array and return the new value and old value back to the user.
void modInt(int* array, int size, int index, int newVal){
	cout << array[index] << endl;
    array[index] = newVal;
	cout << array[index] << endl;
	printArray(array, size);
	return;
}

//A function that adds a new integer to the end of the array
void addNewInt(int* array, int size, int number){
	for(int i=0; i<size; i++){
		if (array[i] == -1) {
      		array[i] = number;
			printArray(array, size);
			return;
   		}
	}
}

//A function which intakes an index of an array and remove the integer corresponding to that index.
void removeInt(int* array, int size, int index){
	for(int i=0; i<size; i++){
		if (i == index) {
      		for (int j = i; j < size-1; j++){
				array[j] = array[j+1];
			}
   		}
	}
	printArray(array, size);
}

void menu(){
	cout << "Choose an option:" << endl << " 1) Print Array\n 2) Check if a Number Exsits\n 3) Modify an Interger\n 4) add new int\n\n:";

}


//A company has two different kinds of employees: professional and nonprofessional. Generally, professional employees have a monthly salary, whereas nonprofessional employees are paid an hourly rate. Similarly, professional employees have a certain number of days of vacation, whereas nonprofessional employees receive vacation hours based on the number of hours they have worked. The amount contributed for health insurance is also different for each kind of employee. a.Use an abstract class Employee to store information common to all employees and to declare member functions for calculating weekly salary(number of hours worked * hourly rate)and computing health care contributions and vacation days earned that week(come up with some rules for these 2) .You need 3 functions (calculating weekly salary,health care contributions, and Vacation days). b.Define derived classes Professional and Nonprofessional. Create instance for them. c.Test your classes.