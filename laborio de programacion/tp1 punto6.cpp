#include <iostream>
#include <unistd.h>

using namespace std;

int main() 
{
	int entrada, precio;
	float descuento = 0;
	int precio = 20000;
	
    cout <<  "precio de la entrada: " << precio << endl;
    cout << "ingresa la cantidad de entradas que quiera comprar (maximo 4 por persona)" << endl;
    cin >> entrada;
    if(entrada>4)
    {
    	cout<<"esta comprando mas de la cantidad permitida"<<endl;
    	return 0;
	}

    if (entrada == 1)
    {
    	descuento = 0;
	}
	else if (entrada == 2)
	{
		descuento = 0.15;
	}
	else if (entrada == 3)
	{
		descuento = 0.20;
	}
	else if (entrada == 4)
	{
  	  descuento = 0.25;
	}
	int total = entrada * precio;
	float totaldescontado = total - (total * descuento);
	
    cout << "RESUMEN DE COMPRA" << endl;
    sleep (1);
    cout << "entradas compradas " << entrada << endl;
    cout << "precio sin descuento " << total << endl;
    cout << "descuento aplicado " << descuento * 100<<"% " << endl;
    cout << "precio final con descuento" << totaldescontado << endl;
}
