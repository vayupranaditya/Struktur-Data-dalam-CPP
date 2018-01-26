#include <iostream>
#include "list.h"

using namespace std;

Mahasiswa first;
Mahasiswa MHSlist[3] = {newMHS("a",10), newMHS("b",9), newMHS("c",8)} ;


int main()
{

    // for(int i = 0; i < 3; i++){
    //     cout << "masukan nama : ";
    //     cin >> MHSlist[i].nama;
    //     cout << "masukan nilai : ";
    //     cin >> MHSlist[i].nilai;

    //     if(i < 2)
    //         MHSlist[i].next = &MHSlist[i + 1];
    // }


    for(int i = 0; i < 3; i++){
        cout << MHSlist[i].nama + " " << MHSlist[i].nilai << '\n';
    }

    sortMHS(MHSlist, 3);

    cout << MHSlist[0].next->next->nama;


    return 0;
}