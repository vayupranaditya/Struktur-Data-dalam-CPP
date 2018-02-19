#include <string>
#include <iostream>

using namespace std;

struct Mahasiswa{
    string nama;
    string NIM;
    int nilai;
    Mahasiswa* next;
    Mahasiswa* prev;
};

struct listMhs{
    Mahasiswa* first;
    Mahasiswa* last;
    int length;
};

listMhs makeList();
void insertFirst(listMhs &L, Mahasiswa &P);
void insertLast(listMhs &L, Mahasiswa &P);
void insertAfter(listMhs &L, Mahasiswa &P, Mahasiswa &Data);

void deleteFirst(listMhs &L);
void deleteLast(listMhs &L);
void deleteAfter(listMhs &L);
void deleteNIM(listMhs &L,  string NIM);

int lengthList(listMhs &L);
void invertList(listMhs &L);
void printData(listMhs &L);
void copyList(listMhs &L1, listMhs &L2);

Mahasiswa newMHS(string nama, string NIM);
Mahasiswa newMHS(string nama, string NIM, int nilai);
