/*


    Berikut contoh implementasi dari ADT
    atau modular programming paradigm


    dalam gaya penulisan ADT sebuah source
    code yang panjang dipecah kedalam module
    module yang lebih kecil.


    hal ini dilakukan agar mempermudah dalam
    memanage setiap fungsionalitas yang ditambahkan,
    dengan memperhatikan spesifikasi dibanding implementasi
 

*/


#include <iostream>
#include "helloworld.h"

using namespace std;

int main(){
    sayHello();

   cout << penjumlahan(10,13);

   int arr[5] = {1, 2, 3, 4, 5};
   showData(arr, 5);
    

    return  0;
}