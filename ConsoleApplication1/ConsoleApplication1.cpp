/*#include <iostream>

void mundo() {
    std::cout << "Hello World!\n";
}

int sumar(int n1, int n2) {
    int suma = 0;
    suma = n1 + n2;
    return suma;
}

int main()
{
    int a, b;
    mundo();
    mundo();
    mundo();
    mundo();
    printf("Escribe 2 numeros para la suma\n");
    scanf_s("%i %i", &a, &b);

    printf("La suma es %i", sumar(a,b));
    return 0;
}*/

/*#include<iostream>
using namespace std;

int sum(int a = 7, int b = 5) {
    return a + b;
}

float sum(float a, float b) {
    return a + b;
}

double sum(double a, double b) {
    return a + b;
}

double sum(int a, double b) {
    return a + b;
}

//template<class T>
template<typename T, typename R>
T sum(T a, R b) {
    return a + b;
}

void main() {
    //cout << sum(1) << endl;
    cout << sum(10.9f,5.3f) << endl;
    cout << sum(10, 7) << endl;
    cout << sum(9.8, 1.2) << endl;
    cout << sum(5, 8.2);
}*/
/*#include <iostream>
using namespace std;

void cambio(int a,int b) {
	cout  << a << " " << b << endl;
	int temp = a;
	a = b;
	b = temp;
	cout << a << " " << b << endl;
}

void main() {
	int a = 10, b = 20;
	cambio(a, b);
	cout << a << " " << b << endl;
}*/

/*#include <iostream>
using namespace std;

int g = 5;

void fun(){
    int a = 10;
	a++;
	g++;
	cout << a << " " << g << endl;
}

void main() {
	cout << g <<endl;
    fun();
	cout << g <<endl;
}*/

/*#include <iostream>
using namespace std;

int x = 10;
void main() {
    int x = 20;
    {
		int x = 30;
		cout << x << endl;
    }
	cout << x << endl;
	cout << ::x << endl;
}*/

/*#include<iostream>
using namespace std;


void fun() {
    int s = 10;
    s++;
    cout << s << endl;
}

int main() {
    fun();
    fun();
    fun();
    return 0;
}*/

/*#include<iostream>
using namespace std;

void fun(int n) {
    if (n > 0) {
        cout << n << endl;
        fun(n - 1);
        cout << n << endl;
    }
}

int main() {
    int x = 5;
    fun(x);
    return 0;
}*/

/*
    Funciones Matematicas:
ceil(x) -> Redondea al entero mayor mas cercano
fabs(x) -> Devuelve el valor absoluto de x
floor(x) -> Redondea al entero menor mas cercano
sqrt(x) -> Saca la raiz cuadrada de x
fmod(x,y) -> Calcula el resto de la division de x/y
pow(x,y) -> Calcula x elevado a la potencia y
*/

/*#include <stdio.h>
#include <math.h>

void funcionMate();

int main() {

    funcionMate();
    return 0;
}

void funcionMate() {

    float x, y, cambio = 0;

    printf("Escribe dos numeros:\n");
    scanf_s("%f %f", &x, &y);

    cambio = pow(x, y); //Redondea al siguiente numero entero 2.1 -> 3
    printf("%.2f", cambio);
}*/

/*
    Funciones Trigonometricas

        (Si requiere la libreria math.h)

acos(x) -> Calcula el Arco Coseno de x
asin(x) -> Calcula el Arco Seno de x
atan(x) -> Calcula el Arco Tangente de x
cos(x) -> Calcula el Coseno de x
sin(x) -> Calcula el Seno de x
tan(x) -> Calcula la Tangente de x
*/
/*#include <stdio.h>
#include <math.h>

void funcionTrigonometrica() {

    float x, cambio = 0;
    printf("Escribe un numero\n");
    scanf_s("%f", &x);

    cambio = asin(x);
    printf("El resultado es %f", cambio);

}

int main() {
    funcionTrigonometrica();
    return 0;
}*/






