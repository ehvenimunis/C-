// C++ program to illustrate the 
// element accesser in vector 
#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	vector<int> g1; 

	for (int i = 1; i <= 10; i++) // ----> 10 20 30 ..... 100
		g1.push_back(i * 10); 

	cout << "\nReference operator [g] : g1[2] = " << g1[2]; 

	cout << "\nat : g1.at(4) = " << g1.at(4); 

	cout << "\nfront() : g1.front() = " << g1.front(); 

	cout << "\nback() : g1.back() = " << g1.back(); 

	// pointer to the first element 
	int* pos = g1.data(); 

	cout << "\nThe first element is " << *pos; 
	return 0; 
} 

/*
    Reference operator [g] : g1[2] = 30
    at : g1.at(4) = 50
    front() : g1.front() = 10
    back() : g1.back() = 100
    The first element is 10
*/

/*
    reference operator [g] - Vektörde "g" konumundaki öğeye bir referans verir
    at (g) - Vektörde "g" konumundaki öğeye bir referans verir
    front () - Vektördeki ilk öğeye bir başvuru döndürür
    back () - Vektördeki son öğeye bir başvuru döndürür
    data () - Sahip olduğu öğeleri saklamak için vektör tarafından dahili olarak kullanılan bellek dizisine doğrudan bir işaretçi döndürür.
*/