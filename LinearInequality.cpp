#include<iostream>

    using namespace std;

int main(){

    int A,B,C;

    cout << "Give number for Inequality" << endl;
    cout << " Numbers will be like" <<" Ax+B=C"<<endl;
    cout << "give A can be negative" << endl;
    cin >> A;
    cout << "give B can be negative" << endl;
    cin >> B;
    cout << "give C can be negative" << endl;
    cin >> C;

    if(A != 0){
        cout << " x = " << (1.0*C-B*1.0)/A*1.0;
    }
    else{
        if (B != 0){
            cout << "no solution";
        }
        else{
            cout << "every thing is solution";
        }
    }


return 0;

}