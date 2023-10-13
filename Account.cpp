#include "Account.h"
void Account :: insertval()
{
   
   cout<<"Enter name:";
   cin>>this->Holder;
   cout<<"Enter Acc:";
   cin>>this->Accno;
   cout<<"Enter type:";
   cin>>this->type;
   cout<<"Enter balance:";
   cin>>this->balance;

}
void Account ::display()
{
        cout<<"Name:"<<Holder<<endl;;
        cout<<"Account Number:"<<Accno<<endl;
        cout<<"Type :"<<type<<endl;
        cout<<"Current Balance"<<balance<<endl;

}
void Account ::deposit()
{
    double deposit;
    cout<<"Enter the deposit amount:";
    cin>>deposit;
    balance=balance+deposit;
    cout<<"your account is updated and current balance is "<<balance<<endl;

}
void Account ::withdrw()
{
    double withdraw;
    cout<<"Enter the amount to withdraw:";
    cin>>withdraw;
    balance=balance+withdraw;
    cout<<"your account is updated and current balance is "<<balance<<endl;
}
Account::~Account()
{
         Holder="";
         type="";
         Accno=0;
         balance=0.00;
}
int Account::action()
{
    cout<<"What do you want to do :\n1.Withdraw\n2.Deposit\n3.Check balance\n4.Exit\n";
    cin>>act;
    return act;
}
