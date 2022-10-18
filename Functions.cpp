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
