#include <iostream>
using namespace std;

class Car
{
private:
	char* model;
	char* country;
	char* color;
	int year;
	double price;
public:
	Car()
	{
		model = nullptr;
		country = nullptr;
		color = nullptr;
		year = 0;
		price = 0;
		cout << "Constructor by default\n";
	}
	Car(const char* m, const char* ctr, const char* clr, int y, double pr)
	{
		model = new char[strlen(m) * 2];
		strcpy_s(model, strlen(m) + 1, m);
		country = new char[strlen(ctr) * 2];
		strcpy_s(country, strlen(ctr) + 1, ctr);
		color = new char[strlen(clr) * 2];
		strcpy_s(color, strlen(clr) + 1, clr);
		year = y;
		price = pr;
		cout << "\nConstructor by params\n";
	}
	void Print()
	{
		cout << "Model: " << model << "\tCountry: " << country << "\nColor: " << color;
		cout << "\tYear: " << year << "\tPrice: $" << price << "\n\n";
	}
	void Init(const char* m, const char* ctr, const char* clr, int y, double pr)
	{
		if (model != nullptr)
		{
			delete[]model;
		}
		model = new char[strlen(m) + 1];
		strcpy_s(model, strlen(m) + 1, m);
		if (country != nullptr)
		{
			delete[]country;
		}
		country = new char[strlen(ctr) + 1];
		strcpy_s(country, strlen(ctr) + 1, ctr);
		if (color != nullptr)
		{
			delete[]color;
		}
		color = new char[strlen(clr) + 1];
		strcpy_s(color, strlen(clr) + 1, clr);
		year = y;
		price = pr;
	}
	char* GetModel()
	{
		return model;
	}
	void SetModel(const char* m1)
	{
		if (model != nullptr)
		{
			delete[]model;
		}
		model = new char[strlen(m1) + 1];
		strcpy_s(model, strlen(m1) + 1, m1);

	}
	char* GetCountry()
	{
		return country;
	}
	void SetCountry(const char* ctr1)
	{
		if (country != nullptr)
		{
			delete[]country;
		}
		country = new char[strlen(ctr1) + 1];
		strcpy_s(country, strlen(ctr1) + 1, ctr1);
	}
	char* GetColor()
	{
		return color;
	}
	void SetColor(const char* clr1)
	{
		if (color != nullptr)
		{
			delete[]color;
		}
		color = new char[strlen(clr1) + 1];
		strcpy_s(color, strlen(clr1) + 1, clr1);
	}
	int GetYear()
	{
		return year;
	}
	void SetYear(int y1)
	{
		year = y1;
	}
	double GetPrice()
	{
		return price;
	}
	void SetPrice(double pr1)
	{
		price = pr1;
	}

	~Car()
	{
		cout << "Destructor\n";
		delete[] model;
		delete[] country;
		delete[] color;
	}
};

int main()
{
	Car obj1;
	obj1.Init("Taycan", "Germany", "Orange", 2025, 170000);
	obj1.Print();
	obj1.SetModel("Spectre");
	cout << "Model: " << obj1.GetModel();
	obj1.SetCountry("United Kingdom");
	cout << "\tCountry: " << obj1.GetCountry();
	obj1.SetColor("Green");
	cout << "\nColor: " << obj1.GetColor();
	obj1.SetYear(2024);
	cout << "\tYear: " << obj1.GetYear();
	obj1.SetPrice(500000);
	cout << "\tPrice: $" << obj1.GetPrice() << endl;

	Car obj2{"Yaris", "Japan", "Red", 2020, 18000};
	obj2.Print();
	obj2.Init("Huracan", "Italy", "Blue", 2019, 300000);
	obj2.Print();
	obj2.SetModel("Phantom");
	cout << "Model: " << obj2.GetModel() << "\n\n";
}
