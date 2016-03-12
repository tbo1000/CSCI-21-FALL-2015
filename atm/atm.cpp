/*
 * Name        : Atm.cpp
 * Author      : Tyler O'Guinn
 * Description : Function that checks the various bank classes
 */

#include "bank.h"
#include "checking.h"
#include "credit.h"
#include "savings.h"

int Atm()
{
    int withdrawlimit=0;
    Checking checking(46.20,.01,"1327");
    Savings savings(20.00,.05,4);
    Credit credit(20.50,.03,"1445");
    string choice;
    cout<<"please choose the account you would like to access"<<endl;
    cin>>choice;
    if (choice=="savings")
    {
        cout<<"please choose to deposit withdraw or check interest over time"<<endl;
       
            string savingschoice;
            cin>>savingschoice;
            if(savingschoice=="deposit")
            {
                cout<<"enter the amount to deposit"<<endl;
                double depositamount = 0.00;
                cin>>depositamount;
                savings.Deposit(depositamount);
            }
            else if(savingschoice=="withdraw")
            {
                cout<<"enter the amount to deposit"<<endl;
                double withdrawamount = 0.00;
                cin>>withdrawamount;
                savings.Withdraw(withdrawamount);
                withdrawlimit++;
                if (savings.get_withdraw()==withdrawlimit)
                {
                    cout<<"you have reached your limit and have been charged $35"<<endl;
                    savings.Deposit(-35);
                }
            }
            else if(savingschoice=="interestovertime")
            {
                cout<<"please say how many years"<<endl;
                int years;
                cin>>years;
                cout<<savings.InterestOverTime(years)<<endl;
            }
    }
    else if(choice == "checking")
    {
        string pin;
        cout<<"please enter your pin"<<endl;
        cin>>pin;
        if(checking.Access(pin))
        {
            cout<<"correct pin"<<endl;
            cout<<"please choose to deposit or withdraw"<<endl;
            string checkingchoice;
            cin>>checkingchoice;
            if(checkingchoice=="deposit")
            {
                cout<<"enter the amount to deposit"<<endl;
                double depositamount = 0.00;
                cin>>depositamount;
                checking.Deposit(depositamount);
            }
            else if(checkingchoice=="withdraw")
            {
                cout<<"enter the amount to deposit"<<endl;
                double withdrawamount = 0.00;
                cin>>withdrawamount;
                checking.Withdraw(withdrawamount);
            }
        }
        else
        {
            cout<<"that is the wrong pin access denied"<<endl;
        }
    }
    else if(choice=="credit")
    {
           string pin;
           cout<<"please enter your pin"<<endl;
           cin>>pin;
           if(credit.Access(pin))
        {
            cout<<"correct pin"<<endl;
            cout<<"please choose to withdraw or pay your bill"<<endl;
            string creditchoice;
            cin>>creditchoice;
            if(creditchoice=="paybill")
            {
                cout<<"enter the amount to deposit"<<endl;
                double depositamount = 0.00;
                cin>>depositamount;
                credit.PayBill(depositamount);
            }
            else if(creditchoice=="withdraw")
            {
                cout<<"enter the amount to deposit"<<endl;
                double withdrawamount = 0.00;
                cin>>withdrawamount;
                credit.Withdraw(withdrawamount);
            }
        }
        else
        {
            cout<<"that is the wrong pin access denied"<<endl;
        }
    }
}