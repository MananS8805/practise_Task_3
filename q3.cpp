// operation will be deposit money, withdraw money, check balance
// minimum balance 50$
#include<iostream>
using namespace std;
 class BankAccount
 {
    private:
    long Account_number;
    string Account_holder_name;
    long balance;

    public:
    BankAccount()
    {
        cout<<"enter account number : ";
        cin>>this->Account_number;
        cout<<"enter account holders name : ";
        cin>>this->Account_holder_name;
        while(true)
        {cout<<"enter initial balance \n note it must be more than 50$ : ";
        cin>>this->balance;
        if(this->balance > 50)
        {
            break;
        }
        cout<<"Minimum balance not met"<<endl;
        }
    }

    void checkbalance()
    {
        cout<<"Current balance: "<<balance<<endl;; 
    }
    void deposit(long i)
    {
        balance+=i;
        cout<<"Dollar "<<i<<" deposited "<<endl;
    }
    void withdraw(long i)
    {
        while(true)
        {
            if((balance-i>50))
            {
                cout<<i<<" dollars withdrawn"<<endl;
                break;
            }
            {
                cout<<"enter withdraw amount again: "<<endl;
                cin>>i;
            }
        }
    }
 };
 int main(){
    BankAccount customer1;
    BankAccount customer2;

    customer1.deposit(6000);
   customer1.checkbalance();
   customer1.withdraw(4000);
   customer1.checkbalance();

   cout<<"Now customer 2 operations "<<endl;
   customer2.deposit(1000);
   customer2.withdraw(2000);
   customer2.checkbalance(); 
 }
