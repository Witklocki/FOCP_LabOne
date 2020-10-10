#include <iostream>
#include <array>
using namespace std;
int main(){

    array<int, 5> data = { 0, 1, 2, 3, 4};
    array<int, 100> data2 ;
    data2[0] = 9999;
    for(int i = 1; i<10; i++){
        data2[i] = i;
    }
    for(int i = 0; i<10; i++){
        cout << data2[i] <<endl;
    }

    return 0;
}