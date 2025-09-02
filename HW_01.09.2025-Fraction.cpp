#include <iostream>
using namespace std;

class Fraction
{
private:
	int num;
	int den;
public:
	void Init()
	{
		cout << "Enter numerator: ";
		cin >> num;
		cout << "Enter denominator: ";
		cin >> den;
	}
	void Print()
	{
		cout << num << "/" << den << endl;
	}
	void Sum(Fraction& B)
	{
		cout << "Sum: " << num * B.den + den * B.num << "/" << den * B.den << endl;
	}
	void Sub(Fraction& B)
	{
		cout << "Sub: " << num * B.den - den * B.num << "/" << den * B.den << endl;
	}
	void Mul(Fraction& B)
	{
		cout << "Mul: " << num * B.num << "/" << den * B.den << endl;
	}
	void Div(Fraction& B)
	{
		cout << "Div: " << num * B.den << "/" << den * B.num << endl;
	}
};

int main()
{
	Fraction A;
	A.Init();
	A.Print();

	Fraction B;
	B.Init();
	B.Print();

	A.Sum(B);
	A.Sub(B);
	A.Mul(B);
	A.Div(B);
}
