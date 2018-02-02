#include "list.h"

#define next(P) ((P)->next)
#define first(L) ((L).first)
#define nama(Q) ((Q)->nama)


Mahasiswa newMHS(string nama, string  NIM){
    Mahasiswa tmp;
    tmp.nama = nama;
    tmp.NIM = NIM;
    tmp.next = NULL;

    return tmp;
}

Mahasiswa newMHS(string nama, string  NIM, int nilai){
    Mahasiswa tmp;
    tmp.nama = nama;
    tmp.NIM = NIM;
    tmp.nilai = nilai;
    tmp.next = NULL;
    return tmp;
}

listMhs makeList(){
    listMhs L;
    first(L) = NULL;

    return L;
}

void insertFirst(listMhs &L, Mahasiswa &P){
    if(first(L) != NULL){
        next(&P) = first(L);
    }
    first(L) = &P;
}

void insertLast(listMhs &L, Mahasiswa &P){

    if(first(L) == NULL){
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
        nama(&P) == P.nama &&
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
    tmp->next = NULL;
}

void deleteLast(listMhs &L){
    if(first(L) == NULL){
       deleteFirst(L);
    }else{
        Mahasiswa*prev = new Mahasiswa;
        Mahasiswa* curr = first(L);

        while(next(curr)){
            prev = curr;
            curr = next(curr);
        }
        prev->next = NULL;
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
        curr = NULL;
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
    if(first(L) == NULL){
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