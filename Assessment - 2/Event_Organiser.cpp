#include<iostream>
using namespace std;

class event{
	const double CostPerHour = 18.50;
    const double CostPerMinute = 0.40;
    const double CostOfDinner = 20.70;
	string eventName;
	string customerName;
	int guestNumber;
	int eventTime,n;
public:
	void get(){
		cout<<"Enter the name of the event: ";
		cin>>eventName;
		cout<<"Enter the customer's name: ";
		cin>>customerName;
		cout<<"Enter the number of guests: ";
		cin>>guestNumber;
		cout<<"Enter the number of minutes in the event: ";
		cin>>eventTime;
		
		cout<<"\n\n=============Event estimate for: "<<customerName<<"==============\n";
	}
	void server(){
		int numberofServer = guestNumber/20;
	
		double cost1 = (eventTime/60)*CostPerHour;
		double cost2 = (eventTime%60)*CostPerMinute;
		double CostForOneServer = cost1 + cost2;
		
		double FoodCost = guestNumber*CostOfDinner;
		double CostPerPerson = FoodCost/guestNumber;
		
		double TotalCost = FoodCost + (CostForOneServer*numberofServer);
		
		cout<<"Number of server: "<<numberofServer<<"\n";
		cout<<"The cost for Servers: "<<CostForOneServer<<"\n";
		cout<<"The cost for food is: "<<FoodCost<<"\n";
		cout<<"Average cost per person: "<<CostPerPerson<<"\n";
		cout<<"Total cost is: "<<TotalCost<<"\n";
		cout<<"Please deposit a 25% of cost to reserve the event.\n";
		cout<<"The deposit needed is : "<<TotalCost*0.25;
	}
	
};

int main()
{
	event e;
    e.get();
    e.server();
    
	return 0;
}
