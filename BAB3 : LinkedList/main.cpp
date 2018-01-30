/*
    TODO:
    []LengthList
    []invertList
    []copyList

*/

#include <iostream>
#include "list.h"

using namespace std;


int main()
{

    Mahasiswa DANU = newMHS("danu", "1301174223");
    Mahasiswa KKKK = newMHS("KKKK", "1234567890");
    Mahasiswa XXXX = newMHS("XXXX", "1234567890");
    Mahasiswa LLLL = newMHS("LLLL", "9999999999");

    listMhs L = makeList();
    
    

    insertLast(L, XXXX);
    
    cout << L.first->nama + '\n';

    printData(L);


    insertFirst(L, DANU);
    insertFirst(L, KKKK);
    insertLast(L, LLLL);
   
    printData(L);

    deleteFirst(L);
    deleteLast(L);
    printData(L);


    return 0;
}