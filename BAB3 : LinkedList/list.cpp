#include "list.h"
#include <iostream>

using namespace std;

Mahasiswa newMHS(string nama, string  NIM){
    Mahasiswa tmp;
    tmp.nama = nama;
    tmp.NIM = NIM;
    tmp.next = nullptr;
    
    return tmp;
}


Mahasiswa newMHS(string nama, string  NIM, int nilai){
    Mahasiswa tmp;
    tmp.nama = nama;
    tmp.NIM = NIM;
    tmp.nilai = nilai;
    tmp.next = nullptr;
    return tmp;
}

listMhs makeList(){
    listMhs L;
    L.length = 0;
    L.first = nullptr;

    return L;
}

void insertFirst(listMhs &L, Mahasiswa &P){
    if(L.first != nullptr){
        P.next = L.first;
    }
    L.first = &P;
}

void insertLast(listMhs &L, Mahasiswa &P){

    if(L.first == nullptr){
        L.first = &P;
    }else{
        Mahasiswa* prev = new Mahasiswa;
        Mahasiswa* curr = L.first;
        
        while(curr->next){
            prev = curr;
            curr = curr->next;
        }
        prev->next = &P;
    }

}

void insertAfter(listMhs &L, Mahasiswa &P, Mahasiswa &Data){
    Mahasiswa* prev = new Mahasiswa;
    Mahasiswa* curr = L.first;
    
    while(curr->next){
        prev = curr;
        curr = curr->next;
    }

    if(
        prev->nama == P.nama &&
        prev->NIM == P.nama
    ){
        prev->next = &P;
    }else{
        cout << &P.nama << "data refrence not found in the list";
    }
    
}

void deleteFirst(){}

void printData(listMhs &L){
    Mahasiswa* curr = L.first;
    while(curr){
        cout << curr->nama << '\n';
        cout << curr->NIM << '\n';

        curr = curr->next;
    }
    cout << '\n';
}