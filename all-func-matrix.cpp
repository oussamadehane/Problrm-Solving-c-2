#include<iostream>
#include<ctime>

using namespace std;

// توليد رقم عشوائي ضمن نطاق محدد
int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

// تعبئة مصفوفة 3x3 بأرقام عشوائية
void FillMatrixWithRandomNumber(int Arr[3][3], short Rows, short Columns)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Columns; j++)
        {
            Arr[i][j] = RandomNumber(1, 20);
        }
    }
}

// طباعة المصفوفة بتنسيق منظم
void PrintMatrix(int Arr[3][3], short Rows, short Columns)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Columns; j++)
        {
            printf(" %02d ", Arr[i][j]);
        }
        cout << endl;
    }
}

// حساب مجموع كافة عناصر المصفوفة
int SumAllIndexOfMatrix(int Arr[3][3], short Rows, short Columns)
{
    int Sum = 0;
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Columns; j++)
        {
            Sum += Arr[i][j];
        }
    }
    return Sum;
}

// التحقق مما إذا كانت مصفوفتان متطابقتين تماماً (عنصر بعنصر)
bool IsMatriciesTypical(int Arr[3][3], int Mat[3][3], short Rows, short Columns)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Columns; j++)
        {
            if (Arr[i][j] != Mat[i][j]) return false;
        }
    }
    return true;
}

// التحقق من مصفوفة الوحدة (Identity Matrix)
bool IsIndentityMatrix(int Arr[3][3], short Rows, short Columns)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Columns; j++)
        {
            if (i == j && Arr[i][j] != 1)
                return false;
            else if (i != j && Arr[i][j] != 0)
                return false;
        }
    }
    return true;
}

// التحقق من المصفوفة العددية (Scalar Matrix)
bool IsScalryMatrix(int Arr[3][3], short Rows, short Columns)
{
    short FirstIndex = Arr[0][0];
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Columns; j++)
        {
            if (i == j && Arr[i][j] != FirstIndex)
                return false;
            else if (i != j && Arr[i][j] != 0)
                return false;
        }
    }
    return true;
}

// عد تكرار رقم معين داخل المصفوفة
int CounterTheNumberInMatrix(int Arr[3][3], short Rows, short Columns, int Number)
{
    int Counter = 0;
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Columns; j++)
        {
            if (Number == Arr[i][j])
            {
                Counter++;
            }
        }
    }
    return Counter;
}

// التحقق من المصفوفة المتناثرة (Sparse Matrix) - التي تحتوي على أصفار كثيرة
bool CheckIsSparcesMatrix(int Arr[3][3], short Rows, short Columns)
{
    short SizeMatrix = (Rows * Columns) / 2;
    return (CounterTheNumberInMatrix(Arr, 3, 3, 0) >= SizeMatrix);
}

// البحث عن وجود رقم معين في المصفوفة
bool IfNumberIsExists(int Arr[3][3], short Rows, short Columns, short Number)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Columns; j++)
        {
            if (Number == Arr[i][j])
            {
                return true;
            }
        }
    }
    return false;
}

// البحث عن الأرقام المتكررة بين مصفوفتين
void IfNumberRepetInMatricies(int arr[3][3], int Arr2[3][3], short Rows, short Columns)
{
    short Number = 0;
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Columns; j++)
        {
            Number = arr[i][j];
            if (IfNumberIsExists(Arr2, 3, 3, Number))
            {
                cout << "\t" << Number;
            }
        }
    }
}

// إيجاد أصغر قيمة في المصفوفة
int PrintTheMinNumberInMatrix(int arr[3][3], short Rows, short Columns)
{
    int MinNum = arr[0][0];
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Columns; j++) // تصحيح بسيط للعداد j
        {
            if (arr[i][j] < MinNum)
            {
                MinNum = arr[i][j];
            }
        }
    }
    return MinNum;
}

// إيجاد أكبر قيمة في المصفوفة
int PrintTheMaxNumberInMatrix(int arr[3][3], short Rows, short Columns)
{
    int MaxNum = arr[0][0];
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Columns; j++) // تصحيح بسيط للعداد j
        {
            if (arr[i][j] > MaxNum)
            {
                MaxNum = arr[i][j];
            }
        }
    }
    return MaxNum;
}

// التحقق من مصفوفة باليندروم (متماثلة في القراءة من الجهتين)
int IsPalidromMatrix(int arr[3][3], short Rows, short Columns)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Columns / 2; j++)
        {
            if (arr[i][j] != arr[i][Columns - 1 - j])
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    srand((unsigned)time(NULL));
    int Arr[3][3];

    FillMatrixWithRandomNumber(Arr, 3, 3);
    PrintMatrix(Arr, 3, 3);
    cout << " Sum of All Index Is : " << SumAllIndexOfMatrix(Arr, 3, 3) << "\n";
	int Matrix2[3][3];
	FillMatrixWithRandomNumber(Matrix2, 3, 3);
	PrintMatrix(Matrix2, 3, 3);
	cout << " Sum of All Index In matrix 2 Is : " << SumAllIndexOfMatrix(Matrix2, 3, 3)<<"\n";

	if (SumAllIndexOfMatrix(Arr, 3, 3) != SumAllIndexOfMatrix(Matrix2, 3, 3))
		cout << " Matricies They Not Equal  ";
	else
		cout << " Matricies They Are Equal ";
	cout << endl;
	if (IsMatriciesTypical(Arr, Matrix2, 3, 3))
		cout << " Matricies are Typical ";
	else cout << " They are Not Typical ";

	cout << endl;
	if (IsIndentityMatrix(Arr, 3, 3))
		cout << " Yes Is Identity ";
	else
		cout << " No  it's Not Identity ";

	
	short Number = 0;
	cout << " Enter The Number Do You Want To Count : ";
	cin >> Number;
	int arr[3][3];
	FillMatrixWithRandomNumber(arr, 3, 3);
	PrintMatrix(arr, 3, 3);
	cout << " the Number " << Number << " is Repted " << CounterTheNumberInMatrix(arr, 3, 3, Number);
	int Matrix1[3][3] = { {10,10,0},{0,9,1},{10,0,9} };
	PrintMatrix(Matrix1, 3, 3);

	if (CheckIsSparcesMatrix(Matrix1, 3, 3))
		cout << " is spaces matrix ";
	else
		cout << " Not spares mATRIX";


	int arr[3][3];
	FillMatrixWithRandomNumber(arr, 3, 3);
	PrintMatrix(arr, 3, 3);
	short Number = 0;cin >> Number;
	if (IfNumberIsExists(arr, 3, 3, Number))
	{
		cout << " Yes Is There ";
	}
	else
		cout << "Not There ";
	int arr2[3][3];
	FillMatrixWithRandomNumber(arr2, 3, 3);
	PrintMatrix(arr2, 3, 3);
	IfNumberRepetInMatricies(arr, arr2, 3, 3);
	cout << PrintTheMinNumberInMatrix(arr2, 3, 3);
	cout << "\n" << PrintTheMaxNumberInMatrix(arr2, 3, 3);
	if (IsPalidromMatrix(arr2, 3, 3))
	{
		cout << " is Plaindrom Matrix ";
	}
	else
		cout << " Not Palindrom Matrix";

	return 0;
}
