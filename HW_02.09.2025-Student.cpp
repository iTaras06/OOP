#include <iostream>
using namespace std;

class Student
{
private:
	char* name;
	char* surname;
	int birthday1;
	int birthday2;
	int birthday3;
	long long contact;
	char* city_name;
	char* country_name;
	char* university_name;
	char* city_name_of_university;
	char* country_name_of_university;
	int group_number;

public:
	void Print()
	{
		cout << "Name: " << name << "\tSurname: " << surname << "\nBirthday: " << birthday1 << "." << birthday2 << "." << birthday3 << "\tContact: " << "+" << contact;
		cout << "\nCity: " << city_name << "\tCountry: " << country_name << "\nUniversity: " << university_name << "\tCity name of the university: " << city_name_of_university;
		cout << "\nCountry name of the university: " << country_name_of_university << "\nGroup number: " << group_number << "\n\n";
	}
	void Init(const char* n, const char* sn, int b1, int b2, int b3, long long c, const char* cn, const char* cn1, const char* un, const char* cnou, const char* cnou1, int gn)
	{
		name = new char[strlen(n) * 2];
		strcpy_s(name, strlen(n) + 1, n);
		surname = new char[strlen(sn) * 2];
		strcpy_s(surname, strlen(sn) + 1, sn);
		birthday1 = b1;
		birthday2 = b2;
		birthday3 = b3;
		contact = c;
		city_name = new char[strlen(cn) * 2];
		strcpy_s(city_name, strlen(cn) + 1, cn);
		country_name = new char[strlen(cn1) * 2];
		strcpy_s(country_name, strlen(cn1) + 1, cn1);
		university_name = new char[strlen(un) * 6];
		strcpy_s(university_name, strlen(un) + 1, un);
		city_name_of_university = new char[strlen(cnou) * 2];
		strcpy_s(city_name_of_university, strlen(cnou) + 1, cnou);
		country_name_of_university = new char[strlen(cnou1) * 2];
		strcpy_s(country_name_of_university, strlen(cnou1) + 1, cnou1);
		group_number = gn;
	}
	char* GetName()
	{
		return name;
	}
	void SetName(const char* n1)
	{
		strcpy_s(name, strlen(n1) + 1, n1);
	}
	char* GetSurname()
	{
		return surname;
	}
	void SetSurname(const char* sn1)
	{
		strcpy_s(surname, strlen(sn1) + 1, sn1);
	}
	int GetBirthday1()
	{
		return birthday1;
	}
	void SetBirthday1(int bb1)
	{
		birthday1 = bb1;
	}
	int GetBirthday2()
	{
		return birthday2;
	}
	void SetBirthday2(int bb2)
	{
		birthday2 = bb2;
	}
	int GetBirthday3()
	{
		return birthday3;
	}
	void SetBirthday3(int bb3)
	{
		birthday3 = bb3;
	}
	long long GetContact()
	{
		return contact;
	}
	void SetContact(long long c1)
	{
		contact = c1;
	}
	char* GetCityName()
	{
		return city_name;
	}
	void SetCityName(const char* cn2)
	{
		strcpy_s(city_name, strlen(cn2) + 1, cn2);
	}
	char* GetCountryName()
	{
		return country_name;
	}
	void SetCountryName(const char* cn3)
	{
		strcpy_s(country_name, strlen(cn3) + 1, cn3);
	}
	char* GetUniversityName()
	{
		return university_name;
	}
	void SetUniversityName(const char* un2)
	{
		strcpy_s(university_name, strlen(un2) + 1, un2);
	}
	char* GetCityNameOfUniversity()
	{
		return city_name_of_university;
	}
	void SetCityNameOfUniversity(const char* cnou2)
	{
		strcpy_s(city_name_of_university, strlen(cnou2) + 1, cnou2);
	}
	char* GetCountryNameOfUniversity()
	{
		return country_name_of_university;
	}
	void SetCountryNameOfUniversity(const char* cnou3)
	{
		strcpy_s(country_name_of_university, strlen(cnou3) + 1, cnou3);
	}
	int GetGroupNumber()
	{
		return group_number;
	}
	void SetGroupNumber(int gn1)
	{
		group_number = gn1;
	}
	void MyDelete()
	{
		delete[] name;
		delete[] surname;
		delete[] city_name;
		delete[] country_name;
		delete[] university_name;
		delete[] city_name_of_university;
		delete[] country_name_of_university;
	}
};

int main()
{
	Student obj1;
	obj1.Init("Taras", "Kodzha", 15, 4, 2006, 380275713968, "Odesa", "Ukraine", "IT STEP", "Odesa", "Ukraine", 241);
	obj1.Print();
	obj1.SetName("George");
	cout << "Name: " << obj1.GetName();
	obj1.SetSurname("Johnson");
	cout << "\tSurname: " << obj1.GetSurname();
	obj1.SetBirthday1(22);
	obj1.SetBirthday2(07);
	obj1.SetBirthday3(2007);
	cout << "\nBirthday: " << obj1.GetBirthday1() << "." << obj1.GetBirthday2() << "." << obj1.GetBirthday3();
	obj1.SetContact(61563900249);
	cout << "\tContact: " << "+" << obj1.GetContact();
	obj1.SetCityName("Perth");
	cout << "\nCity: " << obj1.GetCityName();
	obj1.SetCountryName("Australia");
	cout << "\tCountry: " << obj1.GetCountryName();
	obj1.SetUniversityName("University of Technology Sydney");
	cout << "\nUniversity: " << obj1.GetUniversityName();
	obj1.SetCityNameOfUniversity("Sydney");
	cout << "\nCity name of the university: " << obj1.GetCityNameOfUniversity();
	obj1.SetCountryNameOfUniversity("Australia");
	cout << "\tCountry name of the university: " << obj1.GetCountryNameOfUniversity();
	obj1.SetGroupNumber(456);
	cout << "\nGroup number: " << obj1.GetGroupNumber() << "\n";
	obj1.MyDelete();
}
