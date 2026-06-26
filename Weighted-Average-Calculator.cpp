#include<iostream>
using namespace std;

void ReadTwoItems(float& w1, float& n1, float& w2, float& n2)
{
    cout << "Enter Weight 1: "; cin >> w1;
    cout << "Enter Count 1: "; cin >> n1;
    cout << "Enter Weight 2: "; cin >> w2;
    cout << "Enter Count 2: "; cin >> n2;
}

float CalculateTotal(float w1, float n1, float w2, float n2)
{
    return (w1 * n1) + (w2 * n2);
}

float CalculateAverage(float total, float n1, float n2)
{
    
    if ((n1 + n2) == 0) return 0;
    return total / (n1 + n2);
}

void PrintResults(float w1, float n1, float w2, float n2, float total, float avg)
{
    cout << "\n--- Summary Report ---" << endl;
    cout << "Item 1: " << w1 << "kg x " << n1 << endl;
    cout << "Item 2: " << w2 << "kg x " << n2 << endl;
    cout << "Total Weight : " << total << endl;
    cout << "Average Weight: " << avg << endl;
}

int main()
{
    float w1, n1, w2, n2;
    ReadTwoItems(w1, n1, w2, n2);

    float total = CalculateTotal(w1, n1, w2, n2);
    float avg = CalculateAverage(total, n1, n2);

    PrintResults(w1, n1, w2, n2, total, avg);

    return 0;
}
