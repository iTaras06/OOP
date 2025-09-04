#include <iostream>
using namespace std;

class Laptop
{
private:
	char* model;
	char* color;
	double size;
	double price;
public:
	Laptop();
	Laptop(double pr);
	Laptop(double s, double pr);
	Laptop(const char* clr, double s, double pr);
	Laptop(const char* m, const char* clr, double s, double pr);
	void Print();
	void Input(const char* m, const char* clr, double s, double pr);
	~Laptop();
	char* GetModel();
	void SetModel(const char* m1);
	char* GetColor();
	void SetColor(const char* clr1);
	double GetSize();
	void SetSize(double s1);
	double GetPrice();
	void SetPrice(double pr1);
	void Input();
};

Laptop::Laptop()
{
	model = nullptr;
	color = nullptr;
	size = 0;
	price = 0;
	cout << "Constructor by default\n";
}
Laptop::Laptop(double pr)
{
	if (pr > 0)
	{
		price = pr;
	}
	cout << "Constructor by params: Price: $" << price << endl;
}
Laptop::Laptop(double s, double pr):Laptop(pr)
{
	if (s > 0)
	{
		size = s;
	}
	cout << "Constructor by params: Size: " << size << " inches" << endl;
}
Laptop::Laptop(const char* clr, double s, double pr):Laptop(s, pr)
{
	color = new char[strlen(clr) * 2];
	strcpy_s(color, strlen(clr) + 1, clr);
	cout << "Constructor by params: Color: " << color << endl;
}
Laptop::Laptop(const char* m, const char* clr, double s, double pr):Laptop(clr, s, pr)
{
	model = new char[strlen(m) * 2];
	strcpy_s(model, strlen(m) + 1, m);
	cout << "Constructor by params: Model: " << model << "\n\n";
}
void Laptop::Print()
{
	cout << "Model: " << model << "\tColor: " << color;
	cout << "\nSize: " << size << " inches" << "\tPrice: $" << price << "\n\n";
}
void Laptop::Input(const char* m, const char* clr, double s, double pr)
{
	if (model != nullptr)
	{
		delete[]model;
	}
	model = new char[strlen(m) + 1];
	strcpy_s(model, strlen(m) + 1, m);
	if (color != nullptr)
	{
		delete[]color;
	}
	color = new char[strlen(clr) + 1];
	strcpy_s(color, strlen(clr) + 1, clr);
	size = s;
	price = pr;
}
Laptop::~Laptop()
{
	cout << "Destructor\n";
	delete[] model;
	delete[] color;
}
char* Laptop::GetModel()
{
	return model;
}
void Laptop::SetModel(const char* m1)
{
	if (model != nullptr)
	{
		delete[] model;
	}
	model = new char[strlen(m1) + 1];
	strcpy_s(model, strlen(m1) + 1, m1);
}
char* Laptop::GetColor()
{
	return color;
}
void Laptop::SetColor(const char* clr1)
{
	if (color != nullptr)
	{
		delete[] color;
	}
	color = new char[strlen(clr1) + 1];
	strcpy_s(color, strlen(clr1) + 1, clr1);
}
double Laptop::GetSize()
{
	return size;
}
void Laptop::SetSize(double s1)
{
	size = s1;
}
double Laptop::GetPrice()
{
	return price;
}
void Laptop::SetPrice(double pr1)
{
	price = pr1;
}
void Laptop::Input()
{
	char buffer[50];

	cout << "\n\nEnter model: ";
	cin.getline(buffer, 50);
	if (model != nullptr)
	{
		delete[]model;
	}
	model = new char[strlen(buffer) + 1];
	strcpy_s(model, strlen(buffer) + 1, buffer);

	cout << "Enter color: ";
	cin.getline(buffer, 50);
	if (color != nullptr)
	{
		delete[]color;
	}
	color = new char[strlen(buffer) + 1];
	strcpy_s(color, strlen(buffer) + 1, buffer);

	cout << "Enter size: ";
	cin >> size;
	cout << "Enter price: ";
	cin >> price;
}

int main()
{
	Laptop obj1;
	Laptop obj2 { "Titan 18 HX", "Black", 18, 5000 };
	obj1.Input("Zenbook 14", "Dark blue", 14, 1000);
	obj1.Print();
	obj1.SetModel("Vivobook Pro 15");
	cout << "Model: " << obj1.GetModel();
	obj1.SetColor("Black");
	cout << "\tColor: " << obj1.GetColor();
	obj1.SetSize(15.6);
	cout << "\nSize: " << obj1.GetSize() << " inches";
	obj1.SetPrice(2000);
	cout << "\tPrice: $" << obj1.GetPrice();
	obj1.Input();
	obj1.Print();
}
