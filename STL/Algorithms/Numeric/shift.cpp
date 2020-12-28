// C++ code to demonstrate the working of 
// shift() and cshift() 
#include<iostream> 
#include<valarray> // for valarray functions 
using namespace std; 
int main() 
{ 
	// Initializing valarray 
	valarray<int> varr = { 10, 2, 20, 1, 30 }; 
	
	// Declaring new valarray 
	valarray<int> varr1; 
	
	// using shift() to shift elements to left 
	// shifts valarray by 2 position 
	varr1 = varr.shift(2); 
	
	// Displaying elements of valarray after shifting 
	cout << "The new valarray after shifting is : "; 
	for ( int&x : varr1) cout << x << " "; 
	cout << endl; 
	
	// using cshift() to circulary shift elements to right          ------ > Burada eleman kaybı olmaz
	// rotates valarray by 3 position 
	varr1 = varr.cshift(-2); 
	
	// Displaying elements of valarray after circular shifting 
	cout << "The new valarray after circular shifting is : "; 
	for ( int&x : varr1) cout << x << " "; 
	cout << endl; 

	return 0; 
	
} 

/*

    Output:

    The new valarray after shifting is : 20 1 30 0 0 
    The new valarray after circular shifting is : 1 30 10 2 20 

*/



/*

    shift (): - Bu işlev, öğeleri bağımsız değişkeninde belirtilen sayıda kaydırdıktan 
    sonra yeni valarray'i döndürür. Sayı pozitif ise sola kaydırma, sayı negatifse sağa 
    kaydırma uygulanır.

    cshift (): - Bu işlev, öğeleri bağımsız değişkeninde belirtilen sayıya göre dairesel 
    olarak kaydırdıktan (döndürdükten) sonra yeni valarray'i döndürür. Sayı pozitif ise 
    sola-dairesel kaydırma, sayı negatif ise sağa-dairesel kaydırma uygulanır

*/
