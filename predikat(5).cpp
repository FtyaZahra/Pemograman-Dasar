#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int nilai;
    cout << "masukan nilai";cin >> nilai;
    if (nilai >80){
    cout << "lulus";
   } else if (nilai == 78){
    cout << "kkm";
    }else{
     cout << "tildak lulus";
    }
}