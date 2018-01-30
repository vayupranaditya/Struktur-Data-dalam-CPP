#include "list.h"
#include <iostream>

using namespace std;

Mahasiswa newMHS(string nama, string  NIM){
    Mahasiswa tmp = new Mahasiswa;
    tmp.nama = nama;
    tmp.NIM = NIM;
    
    return tmp;
}


Mahasiswa newMHS(string nama, string  NIM, int nilai){
    Mahasiswa tmp = new Mahasiswa;
    tmp.nama = nama;
    tmp.NIM = NIM;
    tmp.nilai = nilai;
    
    return tmp;
}

listMhs makeList(){
    return new listMhs;
}