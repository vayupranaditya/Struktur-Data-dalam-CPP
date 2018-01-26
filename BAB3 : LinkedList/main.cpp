#include <iostream>
#include "list.h"

using namespace std;

Mahasiswa test;
Mahasiswa test1;

int main()
{
    test.nama = "budi";
    test.nilai = 10;
    test.next = &test1;

    test1.nama = "andi";
    test1.next = nullptr;

    cout << test.next->nama << '=' << test1.nama;

    return 0;
}