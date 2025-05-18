#include <iostream>
using namespace std;

void withdraw(int * Totalamount) 
{
    int withdraw_amount = 0;
    cout<<" Enter Amount to Withdraw :"<< endl;
    cin >> withdraw_amount;
    if (withdraw_amount<*Totalamount) 
    {
        *Totalamount = *Totalamount - withdraw_amount;
        cout<<"processed..." << endl;
    }
    else 
    {
        cout<<"Insufficient Amount" << endl;
    }

}


int main() 
{
    int Current_Amount = 1000;
    cout<<"Amount before TRANSECTION:" <<Current_Amount<< endl;
    withdraw(&Current_Amount);
    cout << "Amount After TRANSECTION:" << Current_Amount << endl;
    return 0;
}