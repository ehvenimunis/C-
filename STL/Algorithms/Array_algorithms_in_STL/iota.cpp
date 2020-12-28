/*
    Bu işlev, diziye sürekli değerler atamak için kullanılır. 
    Bu işlev 3 bağımsız değişkeni, dizi adını, boyutunu ve 
    başlangıç numarasını kabul eder.

*/

// C++ code to demonstrate working of iota() 
#include<iostream> 
#include<numeric> // for iota() 
using namespace std; 
int main() 
{ 
	// Initializing array with 0 values 
	int ar[6] = {0}; 

	// Using iota() to assign values 
	iota(ar, ar+6, 20); 

	// Displaying the new array 
	cout << "The new array after assigning values is : "; 
	for (int i=0; i<6 ; i++) 
	cout << ar[i] << " "; 

	return 0; 

} 


/*

    Output:

    The new array after assigning values is : 20 21 22 23 24 25

*/