#include<iostream>
using namespace std;

void showMenu(){
    cout<<"********Menu********"<<endl;
    cout<<"1.check balance"<<endl;
    cout<<"2.deposit"<<endl;
    cout<<"3.Withdraw"<<endl;
    cout<<"4.exit"<<endl;
    cout<<"********************"<<endl;
}
int main(){
    // check balance, deposit, withdraw
    int option;
    double balance=500;

    do{
    showMenu();
    cout<<"option:"<<endl;
    cin>>option;

    system("cls");

    switch(option){
        case 1:
        cout<<"balance is:"<<balance<<" $"<<endl;
        break;
        
        case 2:
        cout<<"deposit amount:"<<endl;
        double depositamount;
        cin>>depositamount;
        balance += depositamount;
        break;

        case 3:
        cout<<"withdraw amount:"<<endl;
        double withdrawamount;
        cin>>withdrawamount;
        if(withdrawamount<=balance)
            balance -= withdrawamount;
        else
            cout<<"not enough money"<<endl;
        break;
    }

    }while(option!=4);
}