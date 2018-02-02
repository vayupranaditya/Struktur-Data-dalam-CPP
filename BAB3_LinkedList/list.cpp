#include "list.h"
#define next(P) (P)->next
#define first(L) ((L).first)

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
    first(L) = nullptr;

    return L;
}

void insertFirst(listMhs &L, Mahasiswa &P){
    if(first(L) != nullptr){
        next(&P) = first(L);
    }
    first(L) = &P;
}

void insertLast(listMhs &L, Mahasiswa &P){

    if(first(L) == nullptr){
        first(L) = &P;
    }else{
        Mahasiswa* curr = first(L);

        while(next(curr)){
            curr = next(curr);
        }
        next(curr) = &P;
    }

}

void insertAfter(listMhs &L, Mahasiswa &P, Mahasiswa &Data){
    Mahasiswa* curr = first(L);

    while(next(curr)){
        curr = next(curr);
    }

    if(
        curr->nama == P.nama &&
        curr->NIM == P.nama
    ){
        next(curr) = &P;
    }else{
        cout << &P.nama << "data refrence not found in the list";
    }

}

void deleteFirst(listMhs &L){
    Mahasiswa* tmp = first(L);
    first(L) = first(L)->next;
    tmp->next = nullptr;
}

void deleteLast(listMhs &L){
    if(first(L) == nullptr){
       deleteFirst(L);
    }else{
        Mahasiswa*prev = new Mahasiswa;
        Mahasiswa* curr = first(L);

        while(next(curr)){
            prev = curr;
            curr = next(curr);
        }
        prev->next = nullptr;
    }
}

void deleteAfter(listMhs &L, Mahasiswa &P, Mahasiswa &Data){
    Mahasiswa* curr = first(L);

    while(next(curr)){
        curr = next(curr);
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
    Mahasiswa* curr = first(L);
    while(curr){
        cout << curr->nama << '\n';
        cout << curr->NIM << '\n';

        curr = next(curr);
    }
    cout << '\n';
}

int lengthList(listMhs &L){
    if(first(L) == nullptr){
        cout << 0;
    }else{
        Mahasiswa* curr = first(L);
        int length = 1;
        while(next(curr)){
            curr = next(curr);
            length++;
        }
        return length;
    }
}