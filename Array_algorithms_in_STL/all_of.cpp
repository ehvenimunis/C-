/*
    C ++ 11'den itibaren, C ++ STL'sine bazı yeni ve ilginç algoritmalar eklenmiştir. 
    Bu algoritmalar bir dizi üzerinde çalışır ve kodlama sırasında zamandan 
    tasarruf etmede yararlıdır ve dolayısıyla rekabetçi programlamada da yararlıdır.
*/

/*

all_of()

    Bu işlev, tüm dizi öğeleri üzerinde çalışır ve her bir öğeyi tek tek kontrol eder. Her öğede belirli bir özelliği 
    kontrol eder ve aralıktaki her öğe belirtilen özelliği karşıladığında true, aksi 
    takdirde false döndürür.

*/

// C++ code to demonstrate working of all_of() 
#include<iostream> 
#include<algorithm> // for all_of() 
using namespace std; 
int main() 
{ 
	// Initializing array 
	int ar[6] = {1, 2, 3, 4, 5, -6}; 

	// Checking if all elements are positive 
	std::all_of(ar, ar+6, [](int x) { return x>0; })? 
		cout << "All are positive elements" : 
		cout << "All are not positive elements"; 

	return 0; 

} 

/*

    Output:

    All are not positive elements

*/