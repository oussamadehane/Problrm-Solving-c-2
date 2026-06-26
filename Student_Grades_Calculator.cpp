#include<iostream>

using namespace std;

void ReadThreeMarks(float& math, float& physics, float& english)
{
    cout << "Enter Your Mark In Math: ";
    cin >> math;
    cout << "Enter Your Mark In Physics: ";
    cin >> physics;
    cout << "Enter Your Mark In English: ";
    cin >> english;
}

float CalculateTotal(float math, float physics, float english)
{
    return math + physics + english;
}

float CalculateAverage(float totalMarks)
{
    return totalMarks / 3.0f;
}

void PrintResult(string message, float value)
{
    cout << message << ": " << value << endl;
}

int main()
{
    float mark1, mark2, mark3;
    
    ReadThreeMarks(mark1, mark2, mark3);
    
    float total = CalculateTotal(mark1, mark2, mark3);
    PrintResult("Your Total Marks is", total);
    
    float average = CalculateAverage(total);
    PrintResult("Your Average is", average);
    
    return 0;
}
