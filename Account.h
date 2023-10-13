#include "libraries.h"
class Account
{
    private:
    int Accno,act;
    string Holder,type;
    double balance;
    public:
    int action();
    void insertval();
    void display();
    void deposit();
    void withdrw();
    ~Account();
};