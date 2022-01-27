// 3 sem lab 5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class B
{
private:
	int id;
protected:
	char name[40];
public: 
	B(const char* s1, int i) : id(i)
	{
		strcpy(name, s1);
	}
	B() { };
	~B() {};
	void see()
	{
		cout << "\n\nName: " << name;
		cout << "\n\nID: " << id;
	}
};

class P1 :virtual  public B
{
private:
	char company[20];
protected:
	int salary;
public:
	P1(int i, const char* s1,const char* s,int j) : B(s1, i)
	{
		strcpy(company, s);
		salary = j;
	}
	P1() {};
	~P1() {};
	void see()
	{
		cout << "\n\nName: " << name;
		cout << "\n\nCompany: " << company;
		cout << "\n\nSalary: " << salary;
		
	}
};

class P11 : public P1
{
private:
	int experience;
protected:
	char post[20];
public:
	P11(int i, const char* s1, const char* s,int j,const char* h,int a) : P1(i,s1,s,j)
	{
		strcpy(post, h);
		experience = a;
	}
	~P11() {};
	void see()
	{
		cout << "\n\nName: " << name;
		cout << "\n\nPost: " << post;
		cout << "\n\nExperience: " << experience;
		cout << "\n\nSalary: " << salary;
		
	}
};
class P2 :virtual public B
{
private:
	char division[20];
protected:
	int number_of_unit;
public:
	P2(int i, const char* s1, const char* s, int j) : B(s1, i)
	{
		strcpy(division, s);
		number_of_unit = j;
	}
	P2() {};
	~P2() {};
	void see()
	{
		cout << "\n\nName: " << name;
		cout << "\n\nDivision: " << division;
		cout << "\n\nNumber of unit: " << number_of_unit;

	}
};
class P21 : public P2
{
private:
	int serve_remain;
protected:
	char title[20];
public:
	P21(int i, const char* s1, const char* s, int j, const char* h, int a) : P2(i, s1, s, j)
	{
		strcpy(title, h);
		serve_remain = a;
	}
	~P21() {};
	void see()
	{
		cout << "\n\nName: " << name;
		cout << "\n\nTitle: " << title;
		cout << "\n\nIt remains to serve: " << serve_remain;
		cout << "\n\nNumber of unit: " << number_of_unit;
	}
};
class P3 :  public P21,  public P11
{
private:
	int age;
protected:
	char skills[20];
public:

	P3(int id, const char* name, const char* division, const char* company, int number_of_unit,int salary, const char* title, int serve_remain,const char* post,int experience,int ag,const char*ski) : B(name, id), P21(id,name,division, number_of_unit,title, serve_remain),P11(id,name,company,salary,post,experience)
	{
		strcpy(skills, ski);
		age = ag;
	}
	~P3() {};
	void see()
	{
		cout << "\n\nName: " << name;
		cout << "\n\nTitle: " << title;
		cout << "\n\nNumber of unit: " << number_of_unit;
		cout << "\n\nPost: " << post;
		cout << "\n\nSalary: " << salary;
		cout << "\n\nAge: " << age;
		cout << "\n\nSkill: " << skills;
	}
};
int main()
{
	//B dd("Stas", 19);
	//dd.see();
	//cout << "\n----------------";
	//P1 d(12, "dd", "ff",53);
	//d.see();
	//cout << "\n----------------";
	//P2 f(122,"'lkkld","ddf",23);
	//f.see();
	//cout << "\n----------------";
	//P11 s(1,"lo","bomba",2,"qqqq",89);
	//s.see();
	//cout << "\n----------------";
	//P21 p(14, "joom", "ali", 89, "baba", 900);
	//p.see();
	//cout << "\n----------------";
	P3 a(1, "Jack", "net", "ItechArt", 0, 10000, "Boss", 0, "programmer", 3, 20, "do money");
	a.see();
	return 0;
}

