/*name:sameer zade
 mail:samzade786@gmail.com */

#include<iostream>
using namespace std;
int main()
{
    int pin,n,response;
    int password=1234;
    double deposit=0.0;
    double balance=1000;
    double withdraw=0.0;

    cout<<"\n********Welcome to your bank********";
        cout<<"\nenter your pin number please:\n ";
        cin>>pin;

      if(pin==password)
        {
          cout<<"\nEnter any option to be served!\n";
          cout<<"\n 1.Balance Enquiry\n 2.Cash Withdraw\n 3.Deposit Cash\n 4.Exit\n";
              cout<<"Enter your choice: ";
              cin>>n;
              switch(n)
              {
              case 1:
                cout<<"current balance is: "<<balance;
                break;
              case 2:
                   cout<<"please enter amount to withdraw: ";
                    cin>>withdraw;
                    cout<<"please collect your cash\n";
                    balance=balance-withdraw;
                    cout<<"your available balance is "<<balance;
                break;
              case 3:
                cout<<"please enter amount to deposit: ";
                cin>>deposit;
                balance=balance+deposit;
                cout<<"thank you for depositing,your new balance is "<<balance;
                break;
              case 4:
                cout<<"Thank you for banking wit us,have a nice day!";
                break;
              }
        }
        else
        {
            cout<<"check your pin!!!\n";
        }
        cout<<"\n\nDo you want to perform another transaction?";
        cout<<"\npress 1 to proceed and 2 to exit\n";
        cout<<"enter your choice:";
        cin>>response;
        if(response== 1)
        {
          main();
        }
        return 0;
}
