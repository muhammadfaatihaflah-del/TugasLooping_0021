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
    cin >> n;
}

// Prosedur hasil prima
void tampilPrima() {
    if (Prima(n)) {
        cout << n << " adalah bilangan PRIMA" << endl;
    } else {
        cout << n << " bukan bilangan PRIMA" << endl;
    }
}

// Prosedur hasil Fibonacci
void tampilFibonacci() {
    if (Fibonacci(n)) {
        cout << n << " adalah bilangan FIBONACCI" << endl;
    } else {
        cout << n << " bukan bilangan FIBONACCI" << endl;
    }
}

// Function menu
void tampilMenu() {
    cout << "\n=== MENU ===" << endl;
    cout << "1. Cek Bilangan Prima" << endl;
    cout << "2. Cek Bilangan Fibonacci" << endl;
    cout << "0. Keluar" << endl;
    cout << "Pilih menu: ";
}

// Main program
int main() {
     while (true) {

    }
}