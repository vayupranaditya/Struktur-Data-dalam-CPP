#include "list.h"

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
        Mahasiswa* curr = L.first;
        
        while(curr->next){
            curr = curr->next;
        }
        curr->next = &P;
    }

}

void insertAfter(listMhs &L, Mahasiswa &P, Mahasiswa &Data){
    Mahasiswa* curr = L.first;
    
    while(curr->next){
        curr = curr->next;
    }

    if(
        curr->nama == P.nama &&
        curr->NIM == P.nama
    ){
        curr->next = &P;
    }else{
        cout << &P.nama << "data refrence not found in the list";
    }
    
}

void deleteFirst(listMhs &L){
    Mahasiswa* tmp = L.first;
    L.first = L.first->next;
    tmp->next = nullptr;
}

void deleteLast(listMhs &L){
    if(L.first == nullptr){
       deleteFirst(L);
    }else{
        Mahasiswa*prev = new Mahasiswa;
        Mahasiswa* curr = L.first;
        
        while(curr->next){
            prev = curr;
            curr = curr->next;
        }
        prev->next = nullptr;
    }
}

void deleteAfter(listMhs &L, Mahasiswa &P, Mahasiswa &Data){
    Mahasiswa* curr = L.first;
    
    while(curr->next){
        curr = curr->next;
    }

    if(
        curr->nama == P.nama &&
        curr->NIM == P.nama
    ){
        curr = nullptr;
    }else{
        cout << &P.nama << "data refrence not found in the list";
    }
    
}

void printData(listMhs &L){
    Mahasiswa* curr = L.first;
    while(curr){
        cout << curr->nama << '\n';
        cout << curr->NIM << '\n';

        curr = curr->next;
    }
    cout << '\n';
}