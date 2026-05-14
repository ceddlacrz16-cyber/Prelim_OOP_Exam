#include <iostream>
#include <cstdlib>
using namespace std;

int* randArray(int n)
{
    int *arr = new int[n];

    for(int i = 0; i < n; i++)
    {
        arr[i] = rand();
    }

    return arr;
}

void foo()
{
    int *array = new int[100];

    for(int i = 0; i < 100; i++)
    {
    }

    delete[] array;
}

int main()
{
    double *d_var;
    double *d_array;

    d_var = new double;
    d_array = new double[10];

    cout << "Enter a value for d_var: ";
    cin >> *d_var;

    cout << "Value stored in d_var: " << *d_var << endl;

    for(int i = 0; i < 10; i++)
    {
        d_array[i] = 1.0;
    }

    cout << "\nd_array values:" << endl;
    for(int i = 0; i < 10; i++)
    {
        cout << d_array[i] << endl;
    }

    cout << "\nProblem with foo(): Memory leak occurs if delete[] is not used."
         << endl;

    int *array = randArray(100);

    cout << "\nOdd index elements:" << endl;
    for(int i = 1; i < 100; i += 2)
    {
        cout << array[i] << endl;
    }

    cout << "\nIndexes multiple of 3 and 5:" << endl;
    for(int i = 0; i < 100; i++)
    {
        if(i % 3 == 0 && i % 5 == 0)
        {
            cout << array[i] << endl;
        }
    }

    cout << "\nAll array values:" << endl;
    for(int i = 0; i < 100; i++)
    {
        cout << array[i] << endl;
    }

    delete d_var;
    delete[] d_array;
    delete[] array;

    return 0;
}