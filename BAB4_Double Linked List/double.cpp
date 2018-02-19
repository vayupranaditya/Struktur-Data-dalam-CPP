#include "double.h"

#define next(P) ((P)->next)
#define prev(P) ((P)->prev)
#define first(L) ((L).first)
#define last(L) ((L).last)
#define nama(Q) ((Q)->nama)


Mahasiswa newMHS(string nama, string  NIM){
    Mahasiswa tmp;
    tmp.nama = nama;
    tmp.NIM = NIM;
    tmp.next = NULL;
    tmp.prev = NULL;

    return tmp;
}

Mahasiswa newMHS(string nama, string  NIM, int nilai){
    Mahasiswa tmp;
    tmp.nama = nama;
    tmp.NIM = NIM;
    tmp.nilai = nilai;
    tmp.next = NULL;
    tmp.prev = NULL;

    return tmp;
}

listMhs makeList(){
    listMhs L;
    first(L) = NULL;
    last(L) = NULL;

    return L;
}

void insertFirst(listMhs &L, Mahasiswa &P){
    if(first(L) == NULL){
        first(L) = &P;
        last(L) = &P;
    }else{
        next(&P) = first(L);
        prev(first(L)) = &P;
        first(L) = &P;
    }
}

void insertLast(listMhs &L, Mahasiswa &P){
    if(first(L) == NULL){
        first(L) = &P;
        last(L) = &P;
    }else{
        prev(&P) = last(L);
        next(last(L)) = &P;
        last(L) = &P;
    }
}

/*
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
*/

void deleteFirst(listMhs &L){
    Mahasiswa* tmp = first(L);

    if(first(L) != NULL){
        if(first(L) == last(L)){
            Mahasiswa* tmp = first(L);
            first(L) = NULL;
            last(L) = NULL;
        }else{
            Mahasiswa* tmp = first(L);
            first(L) = next(first(L));
            prev(first(L)) = NULL;
            tmp->next = NULL;
        }
    }

}

void deleteLast(listMhs &L){
    Mahasiswa* tmp = first(L);

    if(first(L) != NULL){
        if(first(L) == last(L)){
            Mahasiswa* tmp = first(L);
            first(L) = NULL;
            last(L) = NULL;
        }else{
            Mahasiswa* tmp = last(L);
            last(L) = prev(last(L));
            next(last(L)) = NULL;
            tmp->prev = NULL;
        }
    }

}

/*
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
*/

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