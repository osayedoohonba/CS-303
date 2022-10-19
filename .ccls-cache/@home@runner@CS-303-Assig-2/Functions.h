#pragma once

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
using namespace std;

//constant integer for easier accses to size variable
const int size = 200;

void printArray(int* array, int size);
void modInt(int* array, int size, int index, int newVal);
int checkIfExsits(int* array, int size, int number);
void addNewInt(int* array, int size, int number);
void removeInt(int* array, int size, int index);
void menu();