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
}
