#include <iostream>

using namespace std;

int main(){

    int myNumber;
    cout << "Hello World!!" << endl;
    cout << "Give number" << endl;
    cin >> myNumber;
    if(myNumber%2){
        cout << " odd ";
    }
    else{
        cout << "even ";
    }
    cout << myNumber;


    return 0;
}