// Written by Bryan Smith
//
#include <iostream>
// Relative paths to d_random and d_vector files. These are required for program to run.
#include "..\..\..\..\Downloads\d_random.h" 
#include "C:\Users\Owner\Downloads\d_vector.h"
#include <vector>
using namespace std;
int main()
{
	miniVector<int> v;
	randomNumber rnd;
	int idx;
	for (idx = 0; idx < 15; idx++) {
		v.push_back(rnd.random(100));	
	}
	// Function defintions are included in the d_vector header file.
	cout << "Original: ";
	v.writeMiniVector(v);
	v.sortMiniVector(v);
	cout << "Sorted: ";
	v.writeMiniVector(v);
	system("PAUSE");
}