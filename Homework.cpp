#include<iostream>
#include <cmath>

    using namespace std;

int main(){
    float x,y;

    float aFirst,bFirst,cFirst;
    float aSecound,bSecound,cSecound;
    
    cout << "We will find x for 2 linear equality" << endl;
    cout << " Numbers will be like" <<" Ax+By=C"<<endl;
    cout << "give A to first Linear Equality can be negative" << endl;
    cin >> aFirst;
    cout << "give B to first Linear Equality can be negative" << endl;
    cin >> bFirst;
    cout << "give C to first Linear Equality can be negative" << endl;
    cin >> cFirst;
    cout << " Numbers will be like" <<" Ax+By=C"<<endl;
    cout << "give A to secound Linear Equality can be negative" << endl;
    cin >> aSecound;
    cout << "give B to secound Linear Equality can be negative" << endl;
    cin >> bSecound;
    cout << "give C to secound Linear Equality can be negative" << endl;
    cin >> cSecound;

    x = ((cFirst * bSecound)-(cSecound * bFirst))/((aFirst * bSecound) - (bFirst * aSecound));
    y = ((aFirst * cSecound)-(aSecound * cFirst))/((aFirst * bSecound) - (bFirst * aSecound));

    cout <<  "Pair of x = " << x << " and y = " << y << " can solve both of linear equality" << endl;

    float a,b,c;
    cout << "We will find x for squer equality" << endl;
    cout << " Numbers will be like" <<" Ax^2+Bx+C=0"<<endl;
    cout << "give A to first Linear Equality can be negative" << endl;
    cin >> a;
    cout << "give B to first Linear Equality can be negative" << endl;
    cin >> b;
    cout << "give C to first Linear Equality can be negative" << endl;
    cin >> c;

    float Delta = (b*b)-4*a*c;

    if(a != 0){
        if (Delta>= 0 ){
            if (Delta ==  0){
                cout << "X = " << (-b)/2*a << endl;
            }
            else{
                cout <<"X = " << (-b + sqrt(Delta))/2*a << " or x = " << (-b - sqrt(Delta))/2*a << endl;
            }
        }
        else{
            cout << "no x to solve it " << endl;
        }
    }
    else{
        cout << "X = " << -c/b;
    }





return 0;

}