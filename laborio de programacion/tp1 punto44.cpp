#include <iostream>
using namespace std;

int main()
{
	int num;
    cout << "ingrese un numero menor a 4 cifras: ";
    cin >> num;
    
    while(true)
    {
    	if (num >= 999)
    	{
    		cout << "intente con un numero menor a 4 cifras" << endl << endl;
    		return main();
		} else if (num >= 99)
		{
			cout << "su numero es de 3 cifras";
			return 0;
		} else if (num >= 9)
		{
			cout << "el numero ingresado de dos cifras";
			return 0;
		} else if (num >= 0)
		{
			cout << "el numero es de una cifra";
			return 0;
		}
	} 
}

