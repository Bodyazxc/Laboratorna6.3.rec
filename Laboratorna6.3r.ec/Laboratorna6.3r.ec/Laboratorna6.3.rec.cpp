#include <iostream>
#include <iomanip>

using namespace std;

template <typename T>
void outputAr(T a[], int n, int i)
{
    if (i < n)
    {
        cout << a[i] << setw(4);
        outputAr(a, n, i + 1);
    }
}

bool findMaxEven(int a[], int n, int& m, int j = 0)
{
    if (j >= n)
        return m != -1;

    if (a[j] % 2 == 0)
    {
        if (m == -1 || a[j] > m)
        {
            m = a[j];
        }
    }

    return findMaxEven(a, n, m, j + 1);
}

template <typename T>
T sumA(T a[], int n, int j = 0)
{
    if (j >= n)
        return 0;

    T sum = sumA(a, n, j + 1);

    if (a[j] % 2 == 0)
    {
        sum += a[j];
    }

    return sum;
}

int main()
{
    const int n = 4;
    int a[n] = { 5, 6, 7, 8 };

    cout << "Array: ";
    outputAr(a, n, 0);
    cout << endl;

    int m = -1;

    if (findMaxEven(a, n, m)) {
        cout << "Largest even element: " << m << endl;
    }
    else {
        cout << "No elements found." << endl;
    }

    int sumTemplate = sumA(a, n);
    cout << "Sum of even elements: " << sumTemplate << endl;

    return 0;
}
