#include <iostream>
#include <math.h>
#include <string>
#include <conio.h>
using namespace std;


int main()
{
int numarray[100];

	int i,m;
	double Arithmetic;
	double Geometric;
	double Harmonic;
	const int ESC = 27;
	int x;

	
	
	char esc=0;



	while (esc !=27)
	{
		cout << "Enter a size of array and take numbers of array. Enter ESC to exit." << endl;

		esc = _getch();
		if (esc == char(27)) {
			cout << "ESC"<<endl;

			break;
		}
		else
		{
			cout << "Enter Array Size:";
			cin >> m;





			int asum = 0;
			int gsum = 1;
			double hsum = 0;

			for (i = 0; i < m; i++)
			{
				cin >> numarray[i];
				asum += numarray[i];
				gsum *= numarray[i];
				hsum += (double)1 / numarray[i];


			}

			Arithmetic = (double)asum / m;
			Geometric = pow(gsum, 1 / (double)m);
			Harmonic = m / hsum;

			cout << "Arithmetic: " << Arithmetic << endl;
			cout << "Harmonic: " << Harmonic << endl;
			cout << "Geometric: " << Geometric << endl;
			
		}

		cout << endl;
	}



	system("pause");
	return 0;
}


