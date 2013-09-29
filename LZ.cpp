//---------------------------------------------------------------------------
#pragma hdrstop
#include <iostream.h>
#include <tchar.h>
#include <math.h>
#include <vcl.h>
//---------------------------------------------------------------------------

#pragma argsused
class Array
{
	private:
		int arr[2][40];
		int arrrez[41];
	public:
		Array()
		{
			for (int i = 0; i < 2; i++)
			{
				for (int j = 0; j < 40; j++)
				{
					arr[i][j] = random(10);
				}
			}
		}
		void Print()
		{
			for (int i = 0; i < 2; i++)
			{
				for (int j = 0; j < 40; j++)
				{
					cout << arr[i][j];
				}
				cout << endl;
			}
		}
		void eq()
		{
			for (int i = 0; i < 40; i++)
			{
				if ( arr[0][i] != arr[1][i])
				{
					if (arr[0][i] > arr[1][i])
					{
						cout << "Больше первое число" << endl;
						break;
					}
					else
					{
						cout << "Больше второе число" << endl;
						break;
					}
				}
			}
		}
		void Sum()
		{
			int ost = 0;
			for (int i = 40; i >= 1; i--)
			{
				arrrez[i] = ost + arr[0][i-1] + arr[1][i-1];
				ost = arrrez[i] / 10;
				arrrez[i] = arrrez[i] % 10;
			}
			arrrez[0] = ost;
			for (int i = 0; i < 41; i++)
			{
				cout << arrrez[i];
			}
			cout << endl;
		}
		void Def()
		{

		}
		void Mult()
		{

		}
		void Del()
		{

		}
		~Array()
		{
			for (int i = 0; i < 2; i++)
			{
				delete [] arr[i];
			}
			delete [] arr;
		}
};
int _tmain(int argc, _TCHAR* argv[])
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	randomize;
	Array array;
	array.Print();
	array.eq();
	array.Sum();
	system("pause");
	return 0;
}
//---------------------------------------------------------------------------
