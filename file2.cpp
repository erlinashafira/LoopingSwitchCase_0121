#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    //Perulangan While
    int x;
    int perulanganWhile = 0;
    int perulanganDo = 0;

    srand(time(0));
    x = rand() %10;
    cout << "Perulangan While " << endl;
    cout << "Nilai X awal = "<< x << endl;

    while(x < 7){
        cout << "Nilai x = "<< x << "Lari Keliling " << endl;
        x = rand() % 10;
        perulanganWhile++;
    }

    cout << "Nilai X terakhir = " << x << endl;
    cout << "Jumlah Perulangan = " << perulanganWhile << endl;
}