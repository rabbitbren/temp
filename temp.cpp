#include <iostream>
#include <stdlib.h>

using namespace std;

void ingreso(int &a, int &b);
int producto(int a, int b);
int calculo(int a, int b);

main()
{
    int n1;
    int n2;
    int c;
    ingreso(n1, n2);
    c= calculo(n1, n2);
    cout<< "el producto es:"<< c<< endl;

    system("pause");
}

void ingreso(int &a, int &b)
{
    do
    {
        cout << "ingrese un numero: " << endl;
        cin >> a;
        cout << "ingrese un numero: " << endl;
        cin >> b;

    } while (a <= 0 || b <= 0);
}

int producto(int a, int b)
{
    int prod = 0;
    int i = 1;
    do
    {
        prod = prod + a;
        i++;
    } while (i <= b);

    return prod;
}

int calculo(int a, int b)
{
    int r1;
    int r2;

    if (a > b)
    {
        r1= producto(a, b);
        return r1;
    }
    else
    {
        r2= producto(b, a);
        return r2;
    }
}
