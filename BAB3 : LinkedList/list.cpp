#include "list.h"
#include <iostream>

using namespace std;

Mahasiswa newMHS(string nama, int nilai){
    Mahasiswa tmp;
    tmp.nama = nama;
    tmp.nilai = nilai;

    return tmp;

}

Mahasiswa newMHS(std::string nama, int nilai, Mahasiswa* next){
    Mahasiswa tmp;
    tmp.nama = nama;
    tmp.nilai = nilai;
    tmp.next = next;

    return tmp;
}