#include <iostream>
#include <stdlib.h>

using namespace std;

void ingreso(int &a);
int cociente(int a, int b);
int resto(int a, int b);
int calculo(int a, int b);
bool multiplo(int a);

main()
{
    int num;
    int rs;
    int rs2;
    int cons= 10;
    bool m1;
    bool m2;

    ingreso(num);
    rs= calculo(num, cons);

    if (rs > 9)
    {
        rs2= calculo(rs, cons);
        m1= multiplo(rs2);

        if(m1 == true)
        {
            cout << "SI es multiplo." << endl;
        }
        else
        {
            cout << "NO esmultiplo." << endl;
        }
    }
    else
    {
        m2 = multiplo(rs);
        if (m2 == true)
        {
            cout << "SI es multiplo." << endl;
        }
        else
        {
            cout << "NO esmultiplo." << endl;
        }
    }
    
    system("pause");
}

void ingreso(int &a)
{
    do
    {
        cout << "ingrese un numero: " << endl;
        cin>> a;
    } while (a <= 0);
}

int cociente(int a, int b)
{
    return (a / b);
}

int resto(int a, int b)
{
    return (a % b);
}

int calculo( int a, int b)
{
    int r;
    int c= a;
    int suma= 0;
    do
    {
        r= resto(c, b);
        c= cociente(c, b);
        suma= suma + r;
    } while (c>0);
    
    return suma;
}

bool multiplo(int a)
{
    
    if(a==9 || a==6 || a==3)
    {
        return true;
    }
    else
    {
        return false;
    }

}







