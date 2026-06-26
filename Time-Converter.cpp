#include <iostream>
using namespace std;

void ReadHoursMinutesSeconds(int& Hours, int& Minutes, int& Seconds)
{
    cout << " - Please Enter Number Of Hours : ";
    cin >> Hours;
    cout << " - Please Enter Number Of Minutes : ";
    cin >> Minutes;
    cout << " - Please Enter Number Of Seconds : ";
    cin >> Seconds;
}

int CalculateTotalSeconds(int Hours, int Minutes, int Seconds)
{
    return (Hours * 3600) + (Minutes * 60) + Seconds;
}

void PrintTotalSeconds(int Total)
{
    cout << "\nTotal Seconds = " << Total << endl;
}

int main()
{
    int H, M, S;
    
    ReadHoursMinutesSeconds(H, M, S);
    int Total = CalculateTotalSeconds(H, M, S);
    PrintTotalSeconds(Total);
    
    return 0;
}
