#include <string>

struct Mahasiswa{
    std::string nama;
    int nilai;
    Mahasiswa* next;
};

Mahasiswa newMHS(std::string nama, int nilai);
Mahasiswa newMHS(std::string nama, int nilai, Mahasiswa* next);