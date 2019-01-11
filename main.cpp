#include <iostream>
#include<cstdlib>

using namespace std;

//6.20

bool esMultiplo(int a, int b)
    {
        if(!(b % a))
            return true;
        else
            return false;
    }

//6.22

void cuadrado(int lado)
{
   for( int i = 1; i <= lado; i++ )
   {
      for( int j = 1; j <= lado; j++)
      {
         cout << "*";
      }
      cout << endl;
   }
}

//6.24

int Parte_entera(int a, int b)
{
   return (a / b) * b;
}

int Residuo(int a, int b)
{
   return a % b;
}

int Separar(int i)
{
   if(i >= 10000)
   {
      cout << i/10000 << "  ";
      i = i % 10000;
   }
   if(i >= 1000)
   {

      cout << i/1000 << "  ";
      i = i % 1000;
   }
   if(i >= 100)
   {
      cout << i/100 << "  ";
      i = i % 100;
   }
   if(i >= 10)
   {
      cout << i/10 << "  ";
      i = i % 10;
   }
   cout << i;
}

//6.26

//conversion a celsius
double Celsius(double f)
{
   return (f - 32 ) * 5 / 9;
}

//conversion a fahrenheit
double Fahrenheit(double c)
{
   return c * 9 / 5 + 32;
}

//6.28

void Num_perfecto(int n)
{
   int j = 0;

   for(int i = 1; i < n; i++)
   {
      if(n % i == 0)
      {
         j = j + i;
      }
   }
   if(n == j)
   {
      cout << n << " es un numero perfecto y sus divisores son: " << endl;

      for(int i = 1; i < n; i++)
      {
         if(n % i == 0)
         {
            cout << i << endl;
         }
      }
   }
}

//6.30

int Revertir(int nume)
{
    int a, b, c, d, e, temp;

    a = nume / 10000;
    temp = nume%10000;
    b = temp / 1000;
    temp = nume%1000;
    c = temp / 100;
    temp = nume%100;
    d = temp / 10;
    temp = nume % 10;
    e = temp;

    cout << e << " " << d << " " << c << " " << b << " " << a;
}

//6.32

int Puntos(int promedio)
{
   if(promedio >= 90)
      return 4;
   else if( promedio >= 80)
      return 3;
   else if(promedio >= 70)
      return 2;
   else if(promedio >= 60)
      return 1;
   else
      return 0;
}

//6.34

 void juego()
 {
    int intento, numero;
    char eleccion = 's';
    while(eleccion == 's')
    {
        numero = rand() % 1001;

        cout << "Prueba un numero del 1 al 1000 \n";
        cin >>intento;

        while(numero != intento)
        {
            if(numero > intento)
            {
                cout << "Muy bajo. Intenta de nuevo" << endl;
                cin >> intento;
            }
            if(numero < intento)
            {
                cout << "Muy alto. Intenta de nuevo" << endl;
                cin >> intento;
            }

        }
        cout << "Excelente, adivinaste el numero. Seguir jugando (s/n)";
        cin >> eleccion;
    }
}

//6.36

int potencia(int base, int exponente)
{
   while(exponente != 1)
   {
      return base * potencia(base, (exponente - 1));
   }
   return base;
}

//6.38


//6.40

unsigned long factorial(unsigned long numero){
        if(numero <= 1) {
            return 1;
        }
        else{
            return numero * factorial(numero - 1);
        }
}

int main()
{
    //6.20

    cout << esMultiplo(10, 20) << endl;

    //6.22

    cuadrado(5);

    //6.24

    int a, b;
    int i;

    cout << "Ingrese 2 enteros: \n";
    cin >> a >> b;
    cout << "La parte entera del cociente es: " << Parte_entera(a, b) << endl;
    cout << "El residuo es: " << Residuo(a, b) << endl;

    cout << "Ingrese un entero entre 1 y 32767: ";
    cin >> i;
    Separar(i);
    cout << endl;

    //6.26

    double f, c;

    cout << "Temperatura en Fahrenheit: " << endl;
    cin >> f;
    cout << "Equivalente en Celsius: \n" << Celsius(f) << endl;

    cout << "Temperatura en Celsius: " << endl;
    cin >> c;
    cout << "Equivalente en Fahrenheit: \n" << Fahrenheit(c) << endl;

    cout << "Tabla de conversiones: \n";
    cout << "\nCelsius\tFahrenheit\n";

    for( double c = 0; c <= 100; c++)
    {
       cout << "\n" << c << "\t" << Fahrenheit(c);
    }

    cout << "\n\nTabla de conversiones: \n";
    cout << "\nFahrenheit\tCelsius\n";

    for( double f = 32; f <= 212; f++)
    {
       cout << "\n" << f << "\t" << Celsius(f);
    }

    cout << endl;

    //6.28

    for(int num = 1; num <= 1000; num++)
    {
       Num_perfecto(num);
    }

    //6.30

    Revertir(12345);

    //6.32

    int promedio;

    cout << "Ingrese el promedio del estudiante (entre 0 y 100): ";
    cin >> promedio;

    while(promedio < 0 || promedio > 100)
    {
       cout << "Ingrese un promedio valido: ";
       cin >> promedio;
    }
    cout << Puntos(promedio);

    //6.34

    juego();

    //6.36

     int base, exponente;

     cout << "Ingrese la base: \n";
     cin >> base;
     cout << "Ahora el exponente: \n";
     cin >> exponente;
     cout << "El resultado es: " << potencia(base, exponente);

     //6.38


     //6.40

     for (unsigned int cont{0}; cont <= 10; ++cont){
        cout << cont << "!=" << factorial(cont) << endl;
     }

    return 0;
}
