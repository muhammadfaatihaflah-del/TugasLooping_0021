#include <iostream>
using namespace std;

// Variabel global
int n, pilihan;

// Function untuk cek bilangan prima
bool Prima(int x) {
    if (x <= 1) return false;

    int i = 2;
    while (i <= x / 2) {
        if (x % i == 0) {
            return false;
        }
        i++;
    }
    return true;
}

//fungsi untuk cek bilangan fibonaci
bool Fibonacci(int x) {
    int a = 0, b = 1, c = 0;

    while (c <= x) {
     if (c == x) {
        return true;
        }
        a = b;
        b = c;
        c = a + b;
    }
     return false;
}

// Prosedur input
void inputAngka() {
    cout << "Masukkan angka: ";
}
