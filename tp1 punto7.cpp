#include <iostream>
using namespace std;

int main()
{
	int operacion;
	float saldo, deposito, extraccion;
	
	cout << "              cajero automatico             " << endl << endl;
	cout << "ingrese su clave: ";
	cin >> saldo;
	system("cls");
	
	while (true)
	{
		cout << "      ingrese su operacion a realizar:      " << endl << endl;
		cout << "consultar saldo: 1         extraer dinero: 2" << endl;
		cout << "depositar dinero: 3        salir: 4         " << endl;
		cout << "operacion: ";
		cin >> operacion;
		system("cls");
	
		switch (operacion)
		{
			case 1:
				cout << "su saldo es: " << saldo << endl << endl;
				break;
				
			case 2:
				cout << "cuanto dinero quiere extraer: ";
				cin >> extraccion;
				if (extraccion <= saldo)
				{
					cout << "su extraccion fue realizada con exito, su saldo es " << extraccion - saldo;
					extraccion = extraccion - saldo;
				} else if (extraccion < saldo)
				{
					cout << "su extraccion fue realizada con exito.";
					extraccion = extraccion - saldo;
				} else if (extraccion > saldo)
				{
					cout << "su extraccion no se puede realizar, intente un monto menor" << endl;
				}
				break;
				
			case 3:
				cout << "ingrese monto a depositar: ";
				cin >> deposito;
				saldo = saldo + deposito;
				cout << "su deposito fue realizado con exito" << endl;
				break;
			
			case 4:
				cout << "adios";
				return 0;
				break;
		}
		system("pause");
		system("cls");
	}
}

