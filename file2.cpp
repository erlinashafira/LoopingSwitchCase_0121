#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    //perulangan while
    int x;
    int perulanganwhile = 0;
    int perulangan = 0;

    srand(time(0));
    x = rand() % 10;
    cout << "perulangan while " << endl;
    cout << "Nilai x awal = " << x << endl;

    while(x < 7){
        cout << "Nilai x = "<< x << " Lari Keliling " << endl;
        x = rand() % 10;
        perulanganwhile++;
    }
    cout << "Niali x terakhir = " << x << endl;
    cout << "Jumlah Perulangan = " << perulanganwhile <<endl;
}
