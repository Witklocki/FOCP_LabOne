#include<iostream>

    using namespace std;

int main(){

    int A;

    cout << "give A number" << endl;
    cin >> A;

    for (int i = 0; i < A ; i++){
        cout << i+1 <<". Hello" << endl;
    }

    int money;
    cout << "How much money you need" << endl; 
    cin >> money;
    int banknots = 0;
    while(money >= 50){
        money = money - 50;
        banknots++;
    }
    cout << "number of banknots =  " << banknots << endl;

    int banknotValue = 0;
    cout << "banknot value" << endl;
    cin >> banknotValue;
    cout << "How much money you need" << endl; 
    cin >> money;
    int banknot;

    for(banknot = 0; money >= banknotValue; banknot++){
        money -= banknotValue;
    }
    cout << banknot;

return 0;

}