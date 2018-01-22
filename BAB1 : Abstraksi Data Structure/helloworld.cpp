/*

    file ini adalah bagian implementasi yang
    menguraikan isi dari bagian dari astraksi/definisi

*/

#include <iostream>
#include "helloworld.h"

using namespace std;


void sayHello(){

    cout << "hello world\n";

}


int penjumlahan(int a, int b){
    return a + b;
}

void showData(int tab[], int length){
    for(int index = 0; index < length; index++)
    {
        cout << tab[index];
    }
}