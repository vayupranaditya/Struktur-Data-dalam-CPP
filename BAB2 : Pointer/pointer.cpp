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

    int *p = &a; 

    cout << p << '\n';
    cout << *p << '\n';

    a = 30;

    cout << "nilai a : " << a  << '\n';
    cout << "nilai pointer : " << *p << '\n';

    return 0;
}