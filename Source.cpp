#include <iostream>
using namespace std;
#include <string>




int BinarytoDecimal(int num)
{
	int z=0;
	int two_n=1;
	int bolum;
	int count = 0;
int trailcount=0;
	int denary = 0;
	while (num != 0)
	{
		
		bolum=num % 10;
		num = num / 10;
		count++;	
		
trailcount = count-1;
	
		while (trailcount != 0)
		{
		
			two_n = two_n * 2;

				trailcount--;
		}
	denary+= bolum*two_n;
	two_n = 1;
	}
	
	return denary;

}

/////////////////////////////////////////////////////////////

int DecimaltoBinary(int num)
{
	
	int count = 1;
	int binary = 0;
	int sum=0;

	while (num !=0)
	{
		
		sum = num % 2;
		binary += count*sum;

		count = count * 10;
		num = num / 2;
		
	
	}



	return binary;

}


/////////////////////////////////////////////////////////////

void BinarytoHexadecimal(int number)
{
	int hexaarray[10] = { 0 };
	int i = 0;
	int mycount=0;
	int temp=0;
	int temp_s;
	int two_n = 1;
	cout << "HexaDecimal: " << '(';
	while (number != 0)
	{
		
		for (i = 0; i < 4; i++)
		{
			temp_s = number % 10;
			number = number / 10;
			temp += temp_s*two_n;
			two_n=two_n * 2;
		}
 hexaarray[mycount]=temp;

i = 0;
temp = 0;
temp_s = 0;
two_n = 1;



if (hexaarray[mycount] == 10)
cout << 'A';

else if (hexaarray[mycount] == 11)
cout << 'B';

else if (hexaarray[mycount] == 12)
cout << 'C';

else if (hexaarray[mycount] == 13)
cout << 'D';

else if (hexaarray[mycount] == 14)
cout << 'E';

else if (hexaarray[mycount] == 15)
cout << 'F';
else
cout << hexaarray[mycount];













mycount++;
	}
cout<< ')' << "16" << endl;


	
}



	/////////////////////////////////////////////////////////////





void HexadecimaltoBinary(string number)
{
	int i = 0;
	int count = 0;
	int array[100];
	int num = 0;
	int len = number.length();
	for (int j = 0; j < len; j++)
	{

		if (number[j] == 'A')
			cout << DecimaltoBinary(10) << " ";
		else if (number[j] == 'B')
			cout << DecimaltoBinary(11) << " ";
		else if (number[j] == 'C')
			cout << DecimaltoBinary(12) << " ";
		else if (number[j] == 'D')
			cout << DecimaltoBinary(13) << " ";
		else if (number[j] == 'E')
			cout << DecimaltoBinary(14) << " ";
		else if (number[j] == 'F')
			cout << DecimaltoBinary(15) << " ";
		else{
			num = number[j]-48;
		cout << DecimaltoBinary(num) << " ";
	}
	}
	






}


/////////////////////////////////////////////////////////////


int HexadecimaltoDecimal(string number)
{
	
	int sixteen_n=1;
	int array[10];
	int decimal=0;
int len = number.length();
	for (int j = 0; j < len; j++)
	{
if (number[j] == 'A')
			array[j] = 10;
		else if (number[j] == 'B')
			array[j] = 11;
		else if (number[j] == 'C')
			array[j] = 12;
		else if (number[j] == 'D')
			array[j] = 13;
		else if (number[j] == 'E')
			array[j] = 14;
		else if (number[j] == 'F')
			array[j] = 15;
		else {
			array[j]= number[j] - 48;
		}
	}

	for (int i =len-1; i >=0; i--)
	{
		decimal += array[i] * sixteen_n;
		sixteen_n = sixteen_n * 16;
	}

	return decimal;




}

/////////////////////////////////////////////////////////////

int main()
{

	int number;
	int converted;
	int base;
	int i = 0;
	int *convertarray;
	string convert;
	string mynumber;
	cout <<"For Binary Enter 1 " << endl << "For Decimal Enter 2" << endl << "For Hexadecimal Enter 3" << endl;

	cout << "What is your base: ";
	cin >> base;
	cout << endl;
	
	
	
	if (base == 1){
		cout << "Please Enter Your Binary Number to Convert: ";
		cin >> number;
		converted = BinarytoDecimal(number);
		cout << "Binary: " <<'('<<number<<')'<<"2"<<endl;
cout << "Decimal: " << '(' << converted << ')' << "10"<<endl;
		BinarytoHexadecimal(number);

 }
	else if(base==2){
		cout << "Please Enter Your Decimal Number to Convert: ";
		cin >> number;
converted = DecimaltoBinary(number);
cout << "Binary: " << '(' << converted << ')' << "2" << endl;
cout << "Decimal: " << '(' << number << ')' << "10" << endl;
BinarytoHexadecimal(converted);
	}
	else if (base == 3) {
		cout << "Please Enter Your Hexadecimal Number to Convert: ";
		cin >> mynumber;
		cout << "Hexadecimal: " << '(' << mynumber << ')' << "16" << endl;
		cout << "Binary: " << '(';
		HexadecimaltoBinary(mynumber);

		cout << ')' << "2" << endl;
		converted = HexadecimaltoDecimal(mynumber);
		cout << "Decimal: " << '(' << converted << ')' << "10" << endl;

	}
	else{
		cout << "Undefined Command";
		exit(0);
}












	system("pause");
	return 0;
}

