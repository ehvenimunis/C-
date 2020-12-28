// C++ program to demonstrate working of erase()
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	// Initializing vector with array values
	int arr[] = {5, 10, 15, 20, 20, 23, 42, 45};
	int n = sizeof(arr)/sizeof(arr[0]);
	vector<int> vect(arr, arr+n);

	cout << "Vector is :";
	for (int i=0; i<6; i++)
		cout << vect[i]<<" ";

	// Delete second element of vector
	vect.erase(vect.begin()+1); // This erases selected element in vector and shifts and resizes the vector elements accordingly.

	cout << "\nVector after erasing the element: ";
	for (int i=0; i<5; i++)
		cout << vect[i] << " ";

	// sorting to enable use of unique()
	sort(vect.begin(), vect.end());

	cout << "\nVector before removing duplicate "
			" occurrences: ";
	for (int i=0; i<5; i++)
		cout << vect[i] << " ";

	// Deletes the duplicate occurrences
	vect.erase(unique(vect.begin(),vect.end()),vect.end()); // Bu, tek bir satırda sıralanmış vektördeki yinelenen oluşumları siler.

	cout << "\nVector after deleting duplicates: ";
	for (int i=0; i< vect.size(); i++)
		cout << vect[i] << " ";

	return 0;
}


/*
	Vector is :5 10 15 20 20 23 
	Vector after erasing the element: 5 15 20 20 23 
	Vector before removing duplicate  occurrences: 5 15 20 20 23 
	Vector after deleting duplicates: 5 15 20 23 42 45 
*/