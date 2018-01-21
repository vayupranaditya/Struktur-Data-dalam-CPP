# C++ Basic syntax



```c++
#include <iostream>
/*
    semua line setelah simbol # merupakan preprocessor 
    yang dijalankan sebelum line yang lain di compile

    #include berarti kita meng-impor sebuah library atau module

    dan module iostream berisi fungsi input dan output standar c++
*/

/*setiap program c++ harus memiliki sebuah entry point
    yaitu berupa function main yang mengembailkan nilai integer


*/
int main(){
    
    std::cout << "hello world"; // cara mengoutput
    //output dengan new line
    std::cout << "hello world" << "\n";
    //atau
    std::cout << "hello world" << endl;

    //variable declaration
    //dalam bahasa c++ sebuah deklarasi variable dapat dilakukan dimana saja
    //selama memperhatikan scope berlakunya

    int x = 0; //bilangan bulat;
    float PI = 3.14; //bilangan real(floating point number);
    char c = 'c' //sebuah karakter

    /*
    string variable secara default tidak dapat digunakan kecuali menggunakan library string atau menggunakan compile mode standar 2011 keatas
    
    */

    char str1[10] = "hallo"; //sebuah string di assign kedalam sebuah array of char
    string str2 = "dunia"; //jika menggunakan type data string

    return 0;
}

```