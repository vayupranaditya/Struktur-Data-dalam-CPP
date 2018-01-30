#include <string>
#include <iostream>

using namespace std;

struct Mahasiswa{
    string nama;
    string NIM;
    int nilai;
    Mahasiswa* next;
};

struct listMhs{
    Mahasiswa* first;
};

listMhs makeList(listMhs &L);
void insertFirst(listMhs &L, Mahasiswa* &P);
void insertLast(listMhs &L, Mahasiswa* &P);
void InsertAfter(listMhs &L, Mahasiswa* &P);

void DeleteFirst(listMhs &L);
void DeleteLast(listMhs &L);
void DeleteAfter(listMhs &L);
void DeleteNIM(listMhs &L,  string NIM);

void LengthList(listMhs &L);
void invertList(listMhs &L);
void printData(listMhs &L, Mahasiswa* &P);
void copyList(listMhs &L1, listMhs &L2);


Mahasiswa newMHS(string nama, string NIM);
Mahasiswa newMHS(string nama, string NIM, int nilai);
