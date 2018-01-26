#include <iostream>
#include "list.h"

using namespace std;

Mahasiswa test;
Mahasiswa test1;
Mahasiswa test2;

int main()
{
    test.nama = "budi";
    test.nilai = 10;
    test.next = &test1;

    test1 = newMHS("andi", 10, &test2);
    test2 = newMHS("caca", 9, nullptr);

    cout << test.next->next->nama << '\n';

    return 0;
}