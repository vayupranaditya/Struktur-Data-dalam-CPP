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

void sortMHS(Mahasiswa *mhs, int length){
    for(int i = 0; i < length - 1; i++){
        
        int curr = i + 1;
        int iMax = curr;

        for(int j = curr; j < length; j++){
            if(mhs[iMax].nilai < mhs[j].nilai && mhs[j].nilai < mhs[i].nilai ){
                iMax = j;
            }
        }

        mhs[i].next = &mhs[iMax];

    }
}