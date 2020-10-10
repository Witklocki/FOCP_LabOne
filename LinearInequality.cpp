#include<iostream>

    using namespace std;

int main(){

    float A,B,C;

    cout << "Give number for Inequality" << endl;
    cout << " Numbers will be like" <<" Ax+B=C"<<endl;
    cout << "give A can be negative" << endl;
    cin >> A;
    cout << "give B can be negative" << endl;
    cin >> B;
    cout << "give C can be negative" << endl;
    cin >> C;

    if(A != 0){
        float X =(C-B)/A;
        cout << " value of x = " << X;
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