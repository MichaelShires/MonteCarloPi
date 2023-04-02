//
// Created by mshir on 4/2/2023.
//
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

#define TOTAL 100000
#define RERUN 1000

int main ()
{
    srand(time(nullptr  ));
    double a, b, a2, b2, length, pi, piSum = 0.0;
    int success;
    for(int k = 0; k < RERUN; k++)
    {
        success = 0;
        for( int i = 0; i < TOTAL; i++)
        {
            a = (double) rand() / (RAND_MAX + 1);
            //cout << "a= " << a << '\n';
            b = ((double) rand() / (RAND_MAX + 1));
            //cout << "b= " << b << '\n';
            a2 = a*a;
            //cout << "a2= " << a2 << '\n';
            b2 = b*b;
            //cout << "b2= " << b2 << '\n';
            length = sqrt(a2 + b2);
            //cout << "length= " << length << '\n';
            if(length < 1.0)
                success++;
            //cout << "success= " << success << '\n';
        }
        pi = ( (double) ( 4 * success ) / TOTAL );
        cout << "pi= " << pi << '\n';
        piSum += pi;
    }
    pi = piSum / RERUN;
    cout << "Real pi = " << pi << endl;
    return 0;
}
