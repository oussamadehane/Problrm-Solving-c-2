#include<iostream>
using namespace std;

int ReadNumberOfEmployees(string Message)
{
    int NumberOfEmp = 0;
    do
    {
        cout << Message << endl;
        cin >> NumberOfEmp;
    } while (NumberOfEmp <= 0);
    return NumberOfEmp;
}

void ReadTasksCompleteFromEmployees(int Tasks[50], int NumberOfEmp)
{
    for (short i = 0; i < NumberOfEmp; i++)
    {
        cout << "How many tasks did employee " << i + 1 << " complete? ";
        cin >> Tasks[i];
    }
}

void PrintTasksComplete(const int Tasks[50], int NumberOfEmp)
{
    cout << "\n--- Employee Task Report ---\n";
    for (short i = 0; i < NumberOfEmp; i++)
    {
        cout << "Employee " << i + 1 << " completed: " << Tasks[i] << " tasks." << endl;
    }
}

int main()
{
    int Tasks[50];
    int Employees = ReadNumberOfEmployees("Enter How Many Employees: ");

    ReadTasksCompleteFromEmployees(Tasks, Employees);
    PrintTasksComplete(Tasks, Employees);

    return 0;
}
