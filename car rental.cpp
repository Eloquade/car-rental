

//Car Rental System
#include<iostream>
using namespace std;
int main()
{
      int days;
      int Rent_amount;
      char carNo[10]; // chracter sting
      char cust_name[20];  // chracter string
char model;  // to be used for car model selection choice
      int calc_rent(char, int); // Rent Amount calculation Function
      cout<<"Please provide cumstomer Name:";
      cin>>cust_name;
      cout<<"Please provide Car Model"<<endl;
      cout<<"Enter 'A' for Model 2009. enter 'B' for Model 2010 Enter 'C' for Model 2011 :";
      cin>>model;
      cout<<"Please enter car Number = ";
      cin>>carNo;
      cout<<"Please enter Number of days = ";
      cin >> days;
      // Switch structure for options selection
      switch(model)
      {
           case 'A':
           case 'a':
                      cout<<"Customer Name:" <<cust_name;
                      cout<<"Car Model:2009"<<endl;
                      cout<<"Car No:"<<carNo<<endl;
                      cout<<"Number of days:"<<days;
                      Rent_amount = calc_rent(model, days);
                      cout << "Your Rental Amaount is:"<<Rent_amount<< endl;
           break;
           case 'B':
           case 'b':
                      cout<<"Customer Name:" <<cust_name;
                      cout<<"Car Model:2010"<<endl;
                      cout<<"Car No:"<<carNo<<endl;
                      cout<<"Number of days:"<<days;
                      Rent_amount = calc_rent(model, days);
                      cout << "Your Rental Amaount is:"<<Rent_amount<< endl;
           break;
           case 'C':
           case 'c':
                      cout<<"Customer Name:" <<cust_name;
                      cout<<"Car Model:2011"<<endl;
                      cout<<"Car No:"<<carNo<<endl;
                      cout<<"Number of days:"<<days;
                      Rent_amount = calc_rent(model, days);
                      cout << "Your Rental Amaount is:"<<Rent_amount<< endl;
           break;
           default:
                   cout<<"Please Enter Correct Model Name using A to C ";
           }
      system("pause"); // causes the prompt to pause
      }
int calc_rent(char model, int days) // Rent Calculation Function 
{
    if(model == 'A' || model == 'a')
    return (5000 * days);
    else if(model == 'B' || model == 'b')
    return (8000 * days);
    else if(model == 'C' || model == 'c')
    return (10000 * days);
    }