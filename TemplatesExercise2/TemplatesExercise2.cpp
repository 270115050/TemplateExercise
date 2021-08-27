#include <iostream>
using namespace std;

template<class T>
class Calculator {
    T x, y;
public:
    Calculator(T a, T b) {
        x = a;
        y = b;
    }
    T addNums();
};

template<class T>
T Calculator<T>::addNums() {
    return x + y;
}

//overloaded template function
template<class T>
void swaps(T a[], T b[], int size) {
    for (int i = 0; i < size; i++) {
        T temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

template<class T>
void swaps(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    Calculator<int> c(2,3);
    int a = 10, b = 20;
    string d = "Kallum", e = "Keith";
    const int SIZE = 3;
    int arr1[] = { 1,1,1 };
    int arr2[] = { 2,2,2 };

    cout << "\nClass template\n"
         << c.addNums();

    cout << "\n\nfunction template\n";
    for (int i = 0; i < SIZE; i++) 
        cout << arr1[i] << " " << arr2[i] << endl;
    swaps(arr1, arr2, SIZE);

    cout << "\nAfter Swap\n";

    for (int i = 0; i < SIZE; i++) 
        cout << arr1[i] << " " << arr2[i] << endl;
    
    cout << "\nOverloaded template function\n\n"
         << "Swapping ints\n" << a << "  " << b << endl;
    swaps(a, b);
    cout << "\nAfter Swap\n" 
         << a << "  " << b << endl        
         << "\nSwapping strings\n" << d << " Loves " << e << endl
         << "\nAfter Swap\n";
    swaps(d, e);
    cout << d << " Loves " << e << endl;
    
    return 0;
}