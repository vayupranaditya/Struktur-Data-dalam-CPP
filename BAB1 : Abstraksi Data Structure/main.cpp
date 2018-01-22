/*


    Berikut contoh implementasi dari ADT
    atau modular programming paradigm


    dalam gaya penulisan ADT sebuah source
    code yang panjang dipecah kedalam module
    module yang lebih kecil.


    hal ini dilakukan agar mempermudah dalam
    memanage setiap fungsionalitas yang ditambahkan,
    dengan memperhatikan spesifikasi dibanding implementasi

    hal ini dilakukan dengan cara memisahkan bagian abstraksi/
    definisi dengan bagian implementasi

    bagian definisi disimpan dalam extensi .h dan bagian implementasi
    pada file .cpp
 

    note : file yang dicompile hanya file cpp saja
    contoh : 

        g++ main.cpp helloworld.cpp -o output.exe

*/


#include <iostream>
#include "helloworld.h" // mengimpor bagian definisi

using namespace std;

int main(){

    //dengan mengimpor helloworld.h sayhello(), penjumlahan(),
    // dan showData() dapat digunakan
    sayHello();

   cout << penjumlahan(10,13);

   int arr[5] = {1, 2, 3, 4, 5};
   showData(arr, 5);
    

    return  0;
}