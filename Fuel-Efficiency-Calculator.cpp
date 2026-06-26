#include<iostream>
using namespace std;

void ReadMilesAndGallonsOfGas(float& Miles, float& GallonsGas)
{
    cout << "Enter How Many Miles Do You Drive : ";
    cin >> Miles;
    cout << "Enter How Many Gallons Do You Used : ";
    cin >> GallonsGas;
}

float CalculatingMPG(float Miles, float GallonsGas)
{
    if (GallonsGas <= 0) return 0;
    
    return Miles / GallonsGas;
}

void PrintResult(float Result)
{
    cout << "Your Miles Per Gallon (MPG) is : " << Result << endl;
}

int main()
{
    float Miles, GallonsGas; 
    
    ReadMilesAndGallonsOfGas(Miles, GallonsGas);
    float MPG = CalculatingMPG(Miles, GallonsGas);
    
    if (MPG == 0)
        cout << "Error: Invalid amount of gallons!" << endl;
    else
        PrintResult(MPG);
        
    return 0;
}
