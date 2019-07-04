#include<iostream>
#include<string.h>
using namespace std;

class  bank
{
private:
    string nameOfDepositor;
    long AC_No;
    string typeOfAccount;
    long balance;
    bank *next;
public:
    bank *assignInfo(bank *);
    bank *deposit(bank *);
    bank *checkBalance(bank *);
    bank *display(bank *);
    bank *withdraw(bank *);
    bank *details(bank *);

};
bank *start = NULL;

bank* bank :: assignInfo(bank *start )
{

    bank *newnode = NULL;
    int i=0;
    while( i != -1 )
    {
        newnode = new bank;

        cout << "Enter name Of Depositor \n" ;
        string name;
        cin >> name;
        newnode->nameOfDepositor = name;

        cout << "Enter account number \n";
        long acNumber;
        cin >> acNumber;
        newnode->AC_No = acNumber;

        cout << "Enter type of account \n";
        string type;
        cin >> type;
        newnode->typeOfAccount=type;

        newnode->balance = 1000;
        newnode->next = NULL;

        if( start == NULL )
        {
            start = newnode;

        }
        else
        {
            bank *ptr;
            ptr = start;
            while( ptr->next != NULL )
            {
                ptr = ptr->next;

            }
            ptr->next = newnode;
        }
        cout << "Enter -1 to stop \n";
        cin >> i;


    }
    return start;
}
bank* bank :: display(bank *start)
{
    bank *data = NULL;
    data = start;
    while( data != NULL )
    {
        cout<<"Name of depositor:  " << data->nameOfDepositor<< "\n";
        cout<< "Account number:  " << data->AC_No<< "\n";
        cout<< "Type of account:  " << data->typeOfAccount<< "\n";
        cout<< "Balance in account:  " << data->balance<< "\n";
       data = data->next;
    }

}
bank* bank :: checkBalance(bank *start)
{
    bank *ptr = NULL;
    ptr = start;
    cout << "Enter account number\n";
    long ac;
    cin >> ac;
    while( ptr != NULL )
    {
        if( ac == ptr->AC_No)
        {
            cout << "your balance: "<< ptr->balance<<"\n";
            break;
        }
        else
        {
            cout << "you entered wrong account number\n";
        }
    }
    return start;
}

bank* bank :: deposit(bank *start)
{
    bank *ptr = NULL;
    ptr = start;
    cout << "Enter account number\n";
    long ac,amount;
    cin >> ac;
    while( ptr != NULL )
    {
        if( ac == ptr->AC_No)
        {
            cout << "Enter amount which you want to deposit\n";
            cin >>amount;
            cout << "your old balance: "<<ptr->balance<<"\n";
            ptr->balance+=amount;
            cout << "your new balance is: "<< ptr->balance<<"\n";
            break;
        }
        ptr = ptr->next;

    }
    return start;
}

bank* bank :: withdraw(bank *)
{

    bank *ptr = NULL;
    ptr = start;
    cout << "Enter account number\n";
    long ac,amount;
    cin >> ac;
    while( ptr != NULL )
    {
        if( ac == ptr->AC_No)
        {
            cout << "Enter amount which you want to withdraw\n";
            cout << "your balance: "<<ptr->balance<<"\n";
            cin >>amount;
            if( amount < balance )
            {
            ptr->balance -= amount;
            cout << "your new balance is: "<< ptr->balance<<"\n";
            }
            else{
                cout << "you can't withdraw your balance is low\n";
            }
            break;

        }
        ptr = ptr->next;

    }
    return start;
}
bank* bank :: details(bank *start)
{
    bank *ptr = start;
    long ac;
        cout << "Enter account number\n";
        cin >> ac;
    while( ptr != NULL)
    {


        if( ac == ptr->AC_No)
        {
            cout <<"name: "<<ptr->nameOfDepositor<<"\n";
            cout <<"balance: "<<ptr->balance<< "\n";
         break;
        }
        ptr = ptr->next;

    }
}

main()
{
    bank *start = NULL;
    bank c;
   start = c.assignInfo(start);
   c.display(start);
   int i = 0;
   cout << "your options\n";

   int option;
   while( i != -1 )
   {
       cout << "1: check balance\n";
       cout << "2: deposit \n";
       cout << "3: withdraw\n";
       cout << "4: show details of account\n";
       cout << "Enter your option\n";
       cin >> option;

       switch(option)
       {
           case 1:start=c.checkBalance(start);
           break;
           case 2:start=c.deposit(start);
           break;
           case 3:start=c.withdraw(start);
           break;
           case 4:start=c.details(start);
       }
       cout << "Enter a number to continue except -1 \n";
       cin >> i;
   }

}
