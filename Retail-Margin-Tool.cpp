#include<iostream>
using namespace std;

const double PROFIT_RATE = 0.4;

double ReadPrice(string Message)
{
    double Price = 0.0;
    do
    {
        cout << Message;
        cin >> Price;
    } while (Price <= 0);
    return Price;
}

double CalculateProfit(double Price)
{
    return Price * PROFIT_RATE;
}

void PrintProfit(double Price, double Profit)
{
    cout << "\n--- Financial Report ---" << endl;
    cout << "Original Price : " << Price << endl;
    cout << "Profit Amount  : " << Profit << endl;
    cout << "Final Price    : " << Price + Profit << endl;
}

int main()
{
    double Price = ReadPrice("Enter the price: ");
    double Profit = CalculateProfit(Price);

    PrintProfit(Price, Profit);

    return 0;
}
