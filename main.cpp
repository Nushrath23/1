#include "libraries.h"
#include "Account.h"
int main()
{
    int action;
    Account ac1;
    ac1.insertval();
    ac1.display();
    action=ac1.action();
    if(action==1)
    {
        ac1.withdrw();
    }
    else if(action==2)
    {
      ac1.deposit();  
    }
    else if(action==3)
    {
        ac1.display();
    }
    else
    {
        ac1.~Account();
    }

}