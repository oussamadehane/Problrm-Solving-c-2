#include<iostream>

using namespace std;


struct StOrder {
	string Drink_Name;
	double Price = 0.0;
	int Quantity = 0;
};

StOrder ReadOrder()
{
	StOrder Order;
	cout << " Enter Your Oder  : " << endl;
	cin >> Order.Drink_Name;
	cout << " Enter Your price  : " << endl;
	cin >> Order.Price;
	cout << " Enter Your Quantity : " << endl;
	cin >> Order.Quantity;
	return Order;
}


double Calculate_The_Bill(StOrder Order)
{
	double PriceBeforeTax = Order.Quantity * Order.Price;
	double TaxAmount = PriceBeforeTax * 0.15;
	double FinalBill = PriceBeforeTax + TaxAmount;
	return FinalBill;
}


void Print_The_Bill()
{
	cout << "\n--- Cafe Billing System ---\n";

	StOrder Order = ReadOrder();

	cout << "\n__________________________________\n";
	cout << "          CAFE INVOICE            \n";
	cout << "__________________________________\n";
	cout << "Drink Name     : " << Order.Drink_Name << endl;
	cout << "Price per Unit : " << Order.Price << " $" << endl;
	cout << "Quantity       : " << Order.Quantity << endl;
	cout << "__________________________________\n";
	cout << " Final Bill is : " << Calculate_The_Bill(Order) << " $" << endl;
	cout << "__________________________________\n";
}
int main()
{
	StOrder Order;
	Print_The_Bill();
	return 0;
}
