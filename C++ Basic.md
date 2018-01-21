# C++ Basic syntax



```c++
#include <iostream>
/*
    semua line setelah simbol # merupakan preprocessor 
    yang dijalankan sebelum line yang lain di compile

    #include berarti kita meng-impor sebuah library atau module

    dan module iostream berisi fungsi input dan output standar c++
*/




/*setiap program c++ harus memiliki sebuah entry point
    yaitu berupa function main yang mengembailkan nilai integer


*/
int main(){
    

    std::cout << "hello world"; // cara mengoutput
    //atau
    std::cout << "hello" << " " << "dunia";
    //output dengan new line
    std::cout << "hello world" << "\n";
    //atau
    std::cout << "hello world" << endl;

    //variable declaration
    //dalam bahasa c++ sebuah deklarasi variable dapat dilakukan dimana saja
    //selama memperhatikan scope berlakunya
    
    bool b = true //boolean value
    int x = 0; //bilangan bulat;
    float PI = 3.14; //bilangan real(floating point number);
    char c = 'c' //sebuah karakter

    int n;

    std::cin >> n; //fungsi input

    /*
    string variable secara default tidak dapat digunakan kecuali menggunakan library string atau menggunakan compile mode standar 2011 keatas
*/

    char str1[10] = "hallo"; //sebuah string di assign kedalam sebuah array of char
    string str2 = "dunia"; //jika menggunakan type data string


    //desicion

    //if statement
    if(true){
        //statement
    }

    if(true){
        //statement
    }else{
        //statement
    }

    if(true){
        //statement
    }else if(true){
        //statement
    }

    int var;


    //switch case statement
    switch (var){
        case 0:
            //statement
            break;
        case 1:
            //statement
            break;
        case 2:
            //statement
            break;
        default:
            //statement
            break;
    } 


    //looping

    //for loop
    /*
        for(initial state; end state; perubahan setiap perulangan){
            //statement
        }

    */

    //contoh : 
    for(int i = 0 ; i < 10 ; i++){
        cout <<  i ;
    }

    //do-while

    do{
        //statement
    }while(true);

    //while 
    while(true){
        //statement
    }


    return 0; // function main memiliki nilai kembali sebuah integer sehingga
    //perlu ada nya return value dan secara konvensi 
    //mengembalikan 0 jika tidak ada error dalam runtime 
}

//----------------------------------------------------------------------------//

//function declaration

#include <iostream>

using namespace std;

/*
    anatomi fungsi :
    <retrun type> <function name>(parameter){
        //statement
    } 
*/

int add(int a, int b){
    return a + b;
}

void sayhello(){
    std::cout << "say hello";
}
//function dengan return type void berarti tidak mengembalikan value apapun


int main(){
    add(10,3);
    sayhello()'
    return 0;
}


//-----------------------------extra note-----------------------//

/*

    untuk menghilangan kan std pada std::cout
    kita dapat menambahkan line seperti berikut :  
*/

#include <iostream>

using namespace std;

int main(){
    cout <<  hello world;
}

/* operasi-operasi pada c++

    + adalah penjumlahan
    - adalah pengurangan
    / adalah pembagian
    * adalah perkalian
    = adalah assignment

    && adalah operasi and
    || adalah operasi or
    ! adalah operasi not

    > berarti lebih dari
    < berarti kurang dari
    <= berarti kurang dari sama dengan
    >= berarti lebih dari sama dengan
    == berarti sama dengan

*/

```