/*

    sebuah data(variable)
    yang kita buat pasti harus disimpan
    di suatu tempat di memory komputer

    kita dapat mengakses tempat/memory itu
    dengan menggunakan addres


*/

#include <iostream>

using  namespace std;



int main(){

    //misalkan kita memiliki variable a
    int a = 15;


    //tanda & pada variable menandakan kita  ingin mengakses lokasi
    //variable pada memory

    cout << "ini adalah nilai a : " << a << '\n';
    cout << "ini adalah lokasi a di memory : " << &a << '\n'; //jika anda mengcompile file ini
    //anda akan mendapatkan angka-angka yang terlihat acak
    //angka-angka tersebut ada lokasi variable a pada memory
    //yang ditulis dalam format hexadecimal
    //lokasi tersebut yang disebut dengan address

    //berikut adalah pointer ditandai dengan simbol *
    //pointer adalah sebuah data type yang menyimpan
    //sebuah address
    int *p = &a; 

    cout << p << '\n'; //akan menghasilkan address yang disimpan
    cout << *p << '\n';//akan menghasilkan data yang disimpan pada
    //address 

ramm
    //karena sebuah pointer menyimpan sebuah address
    //maka jika kita merubah value/data yang disimpan
    //pada variable yang asli( dalam hal ini variable a)
    a = 30;


    //maka : 
    cout << "nilai a : " << a  << '\n';
    cout << "nilai pointer : " << *p << '\n';
    //terlihat  *p  menghasilkan nilai yang sama dengan a
    //hal ini terjadi karena pointer p menyimpan 
    //address dari a
    //sehingga ketika kita mengouput *p kita aka mendapakan data
    //yang tersimpan pada address yang disimpan pada p
    //yaitu adalah address a
    //dan address a menyimpan data dari a

    return 0;
}