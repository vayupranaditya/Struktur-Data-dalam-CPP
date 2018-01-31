# Data Structure Dalam C++


Baca basic guide syntax c++ [disini](https://github.com/BrotherCode1/Struktur-Data-dalam-CPP/blob/master/C%2B%2B%20Basic.md)

## Compile c++ using g++ compiler
 Jika anda memilih untuk mencompile file .cpp anda menggunakan command line
 atau anda tidak menggunakan Integrated Developement Environment (IDE) seperti Clion, CodeBlocks, DevCPP, Borland  C++ dan memilih menggunakan text editor seperti Atom, notepad++, VSCode, Sublime Pastikan anda memiliki compiler g++ dalam sistem operasi anda (sistem operasi linux sudah ada dari awal)
 untuk windows anda dapat mengunduh TDM MinGW sebagai compiler

 lalu jika compiler sudah tersedia anda dapat menulis command berikut di command line/ terminal emulator anda : 

 ```bash
    //untuk windows
    g++  namafile.cpp -o namafile.exe
    //untuk linux
    g++  namafile.cpp -o namafile
 ``` 

 secara default g++ mencompile dengan standar 98 jika anda ingin mengcompile menggunakan standar  yang baru anda dapat menambahkan flag -std sebagai berikut :

 ```bash
    g++ -std=c++11 namafile.cpp -o namafile.exe
 ```
 standar yang tersedia adalah c++11 c++14 c++17  c++0x

adapun untuk mengcompile beberapa file menjadi satu anda dapat melakukan hal berikut : 

```bash
    g++ file1.cpp file2.cpp fileN.cpp -o output.exe
    //atau
    g++ -std=c++11 file1.cpp file2.cpp fileN.cpp -o output.exe
```

---------------------------------------------------------------------------

| Author | Contributor |
|-------|-------------|
|[Ganesha Danu](http://www.github.com/BlinfoldKing)|