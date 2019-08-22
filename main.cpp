#include <iostream>
void ejercicio_x (int, int) 
{

    return;
}

int main (int, char * [])
{
	/*Respuesta de la 1 : 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
	  Respuesta de la 2 : 7, 5, 10
	  Respuesta de la 3 : T	   L  	T
	  Respuesta de la 4 : 4
	  Respuesta de la 5 : Debería dar error, ya que ese puntero solo es para variables tipo double, y la dirección que se le asigna es la de un char
	  Respuesta de la 6 : 

	  		void swap(int* x, int*y)
	  		{
				temp = *x;
				*x = *y;
				*y = x;
	  		}
	  		int main()
	  		{
				int a = 3;
				int b = 4;
				int* ptr_1, *ptr_2;
				ptr_1 = &a;
				ptr_2 = &b;
				swap(ptr_1,ptr_2);
				std::cout << *ptr_1 << " " << *ptr_2 << std::endl;
	  		}

	  Respuesta de la 7 : 2  8
	  Respuesta de la 8 : 0  8
	  Respuesta de la 9 : 8 15
	  Respuesta de la 10 : 8
	  Respuesta de la 11 : 
	  
	  #include <iostream>
	  int main()
	  {
	  	int a = 5;
	  	int * ptr = &a;
		std::cout << *a << " " << a << std::endl
	  }
	  Respuesta de la 12 : 13 13
	  Respuesta de la 13 : 7 5 10
	  Respuesta de la 14 : 4 1
	  Respuesta de la 15 :

	  int main()
	  {
		int a = 2, b = 3, c = 0;
		int* ptr_1, *ptr_2;
		c = *ptr_1 + * ptr_2;
		std::cout << c << std::endl;
	  }

	  Respuesta de la 16 : 19
	  Respuesta de la 17 : Error, el puntero no es inicializado con alguna direccion de memoria donde alocar el valor 5
	  Respuesta de la 18 : 18 
	  Respuesta de la 19 : Busca por un string algun espacio en blanco desde el final de este, y cuando lo en cuentra, reemplaza el espacio que se encuentra a la derecha del ultimo caracter con un '\0'
	  Respuesta de la 20 : Busca sobre un string comas y las reemplaza con espacios en blanco
}
