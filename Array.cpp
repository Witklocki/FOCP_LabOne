#include <iostream>
#include <array>
#include <cstdlib>


using namespace std;
int main(){

    array<int, 5> data = { 0, 1, 2, 3, 4};
    array<int, 100> data2 ;
    for(int i = 0; i<10; i++){
        data2[i] = rand() % 100+i;
    }
    int smalest = data2[0];
    for(int i = 0; i < 10; i++){
        if (data2[i] < smalest){
            smalest = data2[i];
        }
    }
    cout << "smalest is " << smalest << endl <<endl ;
    for(int i = 0; i<10; i++){
        cout << data2[i] <<endl;
    }

    return 0;
}