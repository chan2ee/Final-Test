//1장 별찍기

//직사각형
/*#include <iostream>
using namespace std;

int main()
{
	int num;

	cin >> num;

	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl; 
	}
}*/

//역 직사각형
/*#include <iostream>
using namespace std;

int main()
{
	int num;

	cin >> num;

	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num - i; j++)
		{
			cout << " ";
		}
		for (int t = 0; t <= i; t++)
		{
			cout << "*";
		}
		cout << endl;
	}
}*/

//피라미드
/*#include <iostream>
using namespace std;

int main()
{
	int num;

	cin >> num;

	for (int i = 0; i < num; i++)
	{
		for (int j = 1; j < num - i; j++)
		{
			cout << "-";
		}
		for (int t = 0; t < 2 * i + 1; t++)
		{
			cout << "*";
		}
		cout << endl;
	}
}*/

//거꾸로 직각삼각형
/*#include <iostream>
using namespace std;

int main()
{
	int num;

	cin >> num;

	for (int i = num; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}*/

// 거꾸로 역 직각삼각형
/*#include <iostream>
using namespace std;

int main()
{
	int num;

	cin >> num;

	for (int i = num; i > 0; i--)
	{
		for (int j = num; j > i; j--)
		{
			cout << "-";
		}
		for (int t = 0; t < i; t++)
		{
			cout << "*";
		}
		cout << endl;
	}
}*/

//다이아몬드
/*#include <iostream>
using namespace std;

int main()
{
	int num;

	cin >> num;

	for (int i = 0; i < num; i++)
	{
		for (int j = 1; j < num - i; j++)
		{
			cout << "-";
		}
		for (int t = 0; t < 2 * i + 1; t++)
		{
			cout << "*";
		}
		cout << endl;
	}

	for (int i = num - 1; i > 0; i--)
	{
		for (int j = num; j > i; j--)
		{
			cout << "-";
		}
		for (int t = 2 * i - 1; t > 0; t--)
		{
			cout << "*";
		}
		cout << endl;
	}
}*/

//2장
//1번
/*#include <iostream>
using namespace std;

int main()
{
	for (int i = 1; i <= 100; i++)
	{
		cout << i;

		if (i % 10 == 0)
		{
			cout << endl;
		}
	}
}*/

//2번
/*#include <iostream>
using namespace std;

int main()
{
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			cout << j << " x " << i << " = " << i * j << " ";

			if (j % 9 == 0)
			{
				cout << endl;
			}
		}
	}
}*/

//3번
/*#include <iostream>
using namespace std;

int main()
{
	cout << "두 수를 입력하라 >> ";

	int num[2];
	int big = 0;

	for (int i = 0; i < 2; i++)
	{
		cin >> num[i];

		if (big < num[i])
		{
			big = num[i];
		}
	}

	cout << "큰 수 = " << big;
}*/

//4번
/*#include <iostream>
using namespace std;

int main()
{
	cout << "5 개의 실수를 입력하라 >> ";

	double num[5];
	double big = 0;

	for (int i = 0; i < 5; i++)
	{
		cin >> num[i];

		if (big < num[i])
		{
			big = num[i];
		}
	}

	cout << "제일 큰 수 = " << big;
}*/

//5번
/*#include <iostream>
using namespace std;

int main()
{
	char text[100];
	int count = 0;

	cout << "문자들을 입력하라(100개 미만)." << endl;

	cin.getline(text, 100);

	for (int i = 0; i < strlen(text); i++)
	{
		if (text[i] == 'x')
		{
			count++;
		}
	}

	cout << "x의 개수는 " << count;
}*/

//6번
/*#include <iostream>
#include <string>
using namespace std;

int main()
{
	string text;
	cout << "새 암호를 입력하세요 >> ";
	cin >> text;

	string _text;
	cout << "새 암호를 다시 한 번 입력하세요 >>";
	cin >> _text;

	if(text == _text)
	{
		cout << "같습니다.";
	}
	else
	{
		cout << "같지 않습니다.";
	}
}*/

//7번
/*#include <iostream>
using namespace std;

int main()
{
	char text[100];

	while (1)
	{
		cout << "종료하고싶으면 yes를 입력하세요 >>";
		cin.getline(text, 100);

		if (strcmp(text, "yes") == 0)
		{
			cout << "종료합니다...";
			break;
		}
	}
}*/

//8번
/*#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "5 명의 이름을 ';'으로 구분하여 입력하세요." << endl;
	cout << ">>";


	char text[100];
	string big;
	int len = 0;

	for (int i = 0; i < 5; i++)
	{
		cin.getline(text, 100, ';');
		cout << i + 1 << " : " << text << endl;

		if (strlen(text) > len)
		{
			len = strlen(text);
			big = text;
		}
	}

	cout << "가장 긴 이름은 " << big;
}*/

//9번
/*#include <iostream>
using namespace std;

int main()
{
	char text[100];
	cout << "이름은 ?";
	cin.getline(text, 100);

	char adr[100];
	cout << "주소는 ?";
	cin.getline(adr, 100);

	char age[20];
	cout << "나이는 ?";
	cin.getline(age, 20);

	cout << text << ", " << adr << ", " << age << "세";
}*/

//10번
/*#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "문자열 입력 >> ";
	string text;
	getline(cin, text);

	for (int i = 0; i < text.length(); i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << text[j];
		}
		cout << endl;
	}
}*/

//11번
/*#include <iostream>
using namespace std;

int main()
{
	int k, n = 0;
	int sum = 0;
	cout << "끝 수를 입력하세요 >>";
	cin >> n;

	for (k = 1; k <= n; k++)
	{
		sum += k;
	}

	cout << "1에서 " << n << "까지의 합은 " << sum << "입니다.";
}*/

//12번
/*#include <iostream>
using namespace std;
int sum(int a, int b);

int main()
{
	int n = 0;
	cout << "끝 수를 입력하세요 >> ";
	cin >> n;
	cout << "1에서 " << n << "까지의 합은 " << sum(1,n) << "입니다.";
}

int sum(int a, int b)
{
	int k, res = 0;
	for (k = a; k <= b; k++)
	{
		res += k;
	}
	return res;
}*/

//13번
/*#include <iostream>
using namespace std;

int main()
{
	cout << "***** 승리장에 오신 것을 환영합니다. *****" << endl;

	while (1)
	{
		int num , _num;

		cout << "짬뽕 : 1, 짜장 : 2, 군만두 : 3, 종료 : 4 >>";
		cin >> num;

		if (num == 1)
		{
			cout << "몇인분 ? ";
			cin >> _num;
			cout << "짬봉 " << _num << "인분 나왔습니다." << endl;
		}
		else if (num == 2)
		{
			cout << "몇인분 ? ";
			cin >> _num;
			cout << "짜장 " << _num << "인분 나왔습니다." << endl;
		}
		else if (num == 3)
		{
			cout << "몇인분 ? ";
			cin >> _num;
			cout << "군만두 " << _num << "인분 나왔습니다." << endl;
		}
		else if (num == 4)
		{
			cout << "오늘 영업은 끝났습니다.";
			break;
		}
		else
		{
			cout << "다시 주문하세요!!" << endl;
		}
	}
}*/

//14번
/*#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원 입니다." << endl;
	int sum = 0;

	while (1)
	{
		char text[100];
		int num;

		cout << "주문 >> ";
		cin >> text >> num;

		if (strcmp(text, "에스프레소") == 0)
		{
			sum += 2000 * num;
			cout << 2000 * num << "입니다. 맛있게 드세요." << endl;
		}
		else if (strcmp(text, "아메리카노") == 0)
		{
			sum += 2300 * num;
			cout << 2300 * num << "입니다. 맛있게 드세요." << endl;
		}
		else if (strcmp(text, "카푸치노") == 0)
		{
			sum += 2500 * num;
			cout << 2500 * num << "입니다. 맛있게 드세요." << endl;
		}
		else
		{
			cout << "다시 입력하세요" << endl;
		}
		if (sum >= 20000)
		{
			cout << "오늘은 " << sum << "원을 판매하여 카페를 닫습니다. 내일봐요 !!" << endl;
			break;
		}
	}
}*/

//15번
/*#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
	char num[100];
	char _num[100];
	char A;
	int res;

	while (1)
	{
		cout << "?";

		cin >> num >> A >> _num;

		if (A == '+')
		{
			res = atoi(num) + atoi(_num);
			cout << num << A << _num << " = " << res << endl;
		}
		else if (A == '-')
		{
			res = atoi(num) - atoi(_num);
			cout << num << A << _num << " = " << res << endl;
		}
		else if (A == '*')
		{
			res = atoi(num) * atoi(_num);
			cout << num << A << _num << " = " << res << endl;
		}
		else if (A == '/')
		{
			res = atoi(num) / atoi(_num);
			cout << num << A << _num << " = " << res << endl;
		}
		else if (A == '%')
		{
			res = atoi(num) % atoi(_num);
			cout << num << A << _num << " = " << res << endl;
		}
	}
}*/

//16번
/*#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다." << endl << "텍스트의 끝은 ; 입니다. 10000개까지 가능합니다." << endl;
	char text[10000];
	int count = 0;
	int alt[26] = { 0 };

	cin.getline(text, 10000, ';');

	for (int i = 0; i < strlen(text); i++)
	{
		if (isalpha(text[i]))
		{
			text[i] = tolower(text[i]);
			count++;
			alt[text[i] - 'a']++;
		}
	}

	cout << endl << endl << "총 알파벳 수 : " << count << endl;

	for (int i = 0; i < 26; i++)
	{
		char a = i + 'a';
		cout << a << " (" << alt[i] << ") " << "\t" << ": ";

		for (int j = 1; j <= alt[i]; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}*/

//3장
//1번
/*#include <iostream>
using namespace std;

class Tower {
	int high;
public:
	Tower();
	Tower(int h);
	int getHeight();
};
Tower::Tower()
{
	high = 1;
}
Tower::Tower(int h)
{
	high = h;
}
int Tower::getHeight()
{
	return high;
}
int main()
{
	Tower myTower;
	Tower seoulTower(100);
	cout << "높이는 " << myTower.getHeight() << "미터" << endl;
	cout << "높이는 " << seoulTower.getHeight() << "미터" << endl;
}*/

//2번
/*#include <iostream>
#include <string>
using namespace std;

class Date {
	int year, month, day;
public:
	Date(int y, int m, int d);
	Date(string t);
	void show();
	int getYear();
	int getMonth(); 
	int getDay();
};
Date::Date(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
}
Date::Date(string t)
{
	year = stoi(t.substr(0.4));
	month = stoi(t.substr(5.1));
	day = stoi(t.substr(7, 2));
}
int Date::getYear()
{
	return year;
}
int Date::getMonth()
{
	return month;
}
int Date::getDay()
{
	return day;
}
void Date::show()
{
	cout << year << "년" << month << "월" << day << "일" << endl;
}
int main()
{
	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << ", " << birth.getMonth() << ", " << birth.getDay();
}*/

//3번
/*#include <iostream>
#include <string>
using namespace std;

class Account {
	string name;
	int id, balance;
public:
	Account(string n, int i, int b);
	int deposit(int money);
	int withdraw(int money);
	string getOwner();
	int inquiry();
};
Account::Account(string n, int i, int b)
{
	name = n;
	id = i;
	balance = b;
}
int Account::deposit(int money)
{
	balance += money;
	return balance;
}
int Account::withdraw(int money)
{
	balance -= money;
	return balance;
}
string Account::getOwner()
{
	return name;
}
int Account::inquiry()
{
	return balance;
}
int main()
{
	Account a("Kitae", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
}*/

//4번
/*#include <iostream>
using namespace std;

class CoffeeMachine {
	int coffee, water, sugar;
public:
	CoffeeMachine(int c, int w, int s);
	int drinkEspresso();
	int drinkAmericano();
	int drinkSugarCoffee();
	void show();
	int fill();
};
CoffeeMachine::CoffeeMachine(int c, int w, int s)
{
	coffee = c;
	water = w;
	sugar = s;
}
int CoffeeMachine::drinkEspresso()
{
	coffee -= 1;
	water -= 1;
	return coffee, water;
}
int CoffeeMachine::drinkAmericano()
{
	coffee -= 1;
	water -= 2;
	return coffee, water;
}
int CoffeeMachine::drinkSugarCoffee()
{
	coffee -= 1;
	water -= 2;
	sugar -= 1;
	return coffee, water, sugar;
}
int CoffeeMachine::fill()
{
	coffee = 10;
	water = 10;
	sugar = 10;
	return coffee, water, sugar;
}
void CoffeeMachine::show()
{
	cout << "커피 머신 상태,  커피 : " << coffee << " 물 : " << water << " 설탕 : " << sugar << endl;
}
int main()
{
	CoffeeMachine java(5, 10, 3);
	java.drinkEspresso();
	java.show();
	java.drinkAmericano();
	java.show();
	java.drinkSugarCoffee();
	java.show();
	java.fill();
	java.show();
}*/

//5번
/*#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class Random {
public:
	Random();
	int next();
	int nextInRange(int a, int b);
};
Random::Random()
{
	srand((unsigned)time(0));
}
int Random::next()
{
	return rand();
}
int Random::nextInRange(int a, int b)
{
	return rand() % (b - a + 1) + a;
}
int main()
{
	Random r;
	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10 개 --" << endl;
	for (int i = 0; i < 10; i++)
	{
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 " << "4 까지의 랜덤 정수 10 개 --" << endl;
	for (int i = 0; i < 10; i++)
	{
		int n = r.nextInRange(2, 4);
		cout << n << ' ';
	}
	cout << endl;
}*/

//6번
/*#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class Random {
public:
	Random();
	int next();
	int nextInRange(int a, int b);
};
Random::Random()
{
	srand((unsigned)time(0));
}
int Random::next()
{
	int ran = rand();
	if (ran % 2 == 0)
	{
		return ran;
	}
	else
	{
		return --ran;
	}
}
int Random::nextInRange(int a, int b)
{
	int ran = rand() % (b - a + 1) + a;
	if (ran % 2 == 0)
	{
		return ran;
	}
	else
	{
		return --ran;
	}
}
int main()
{
	Random r;
	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10 개 --" << endl;
	for (int i = 0; i < 10; i++)
	{
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 " << "10 까지의 랜덤 정수 10 개 --" << endl;
	for (int i = 0; i < 10; i++)
	{
		int n = r.nextInRange(2, 10);
		cout << n << ' ';
	}
	cout << endl;
}*/

//7번
/*#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class Random {
	int num;
public:
	Random(int _n);
	int next();
	int nextInRange(int a, int b);
};
Random::Random(int _n)
{
	num = _n;
	srand((unsigned)time(0));
}
int Random::next()
{
	int ran = rand();
	if (num % 2 == 0)
	{
		if (ran % 2 == 0)
		{
			return ran;
		}
		else
		{
			return --ran;
		}
	}
	else
	{
		if (ran % 2 == 1)
		{
			return ran;
		}
		else
		{
			return ++ran;
		}
	}
}
int Random::nextInRange(int a, int b)
{
	int ran = rand() % (b - a + 1) + a;
	if (num % 2 == 0)
	{
		if (ran % 2 == 0)
		{
			return ran;
		}
		else
		{
			return ++ran;
		}
	}
	else
	{
		if (ran % 2 == 1)
		{
			return ran;
		}
		else
		{
			return ++ran;
		}
	}
}
int main()
{
	Random r(0);
	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 짝수 정수 10 개 --" << endl;
	for (int i = 0; i < 10; i++)
	{
		int n = r.next();
		cout << n << ' ';
	}
	Random _r(1);
	cout << endl << endl << "-- 2에서 " << "9 까지의 랜덤 홀수 정수 10 개 --" << endl;
	for (int i = 0; i < 10; i++)
	{
		int n = _r.nextInRange(2, 9);
		cout << n << ' ';
	}
	cout << endl;
}*/

//8번
/*#include <iostream>
#include <string>
using namespace std;

class Integer {
	int num;
	string _num;
public:
	Integer(int n)
	{
		num = n;
	}
	int get()
	{
		return num;
		cout << num;
	}
	void set(int n2)
	{
		num = n2;
	}
	Integer(string _n)
	{
		num = stoi(_n);
	}
	bool isEven()
	{
		return true;
		cout << true;
	}
};
int main()
{
	Integer n(30);
	cout << n.get() << ' ';
	n.set(50);
	cout << n.get() << ' ';

	Integer m("300");
	cout << m.get() << ' ';
	cout << m.isEven();
}*/

//9번
/*#include <iostream>
using namespace std;

class Oval {
	int width, height;
public:
	Oval();
	Oval(int w, int h);
	~Oval();
	int getWidth();
	int getHeight();
	void set(int w, int h);
	void show();
};
Oval::Oval()
{
	width = 1;
	height = 1;
}
Oval::Oval(int w, int h)
{
	width = w;
	height = h;
}
Oval::~Oval()
{
	cout << "Oval 소멸 : width = " << width << ", height = " << height << endl;
}
int Oval::getWidth()
{
	return width;
}
int Oval::getHeight()
{
	return height;
}
void Oval::set(int w, int h)
{
	width = w;
	height = h;
}
void Oval::show()
{
	cout << "width = " << width << ", height = " << height << endl;;
}
int main()
{
	Oval a, b(3, 4);
	a.set(10, 20);
	a.show();
	cout << b.getWidth() << ", " << b.getHeight() << endl;
}*/

//10번
/*#include <iostream>
using namespace std;

class Add {
	int a, b;
public:
	void setValue(int x, int y);
	int calculate();
};
void Add::setValue(int x, int y)
{
	a = x;
	b = y;
}
int Add::calculate()
{
	return a + b;
}

class Sub {
	int a, b;
public:
	void setValue(int x, int y);
	int calculate();
};
void Sub::setValue(int x, int y)
{
	a = x;
	b = y;
}
int Sub::calculate()
{
	return a - b;
}

class Mul {
	int a, b;
public:
	void setValue(int x, int y);
	int calculate();
};
void Mul::setValue(int x, int y)
{
	a = x;
	b = y;
}
int Mul::calculate()
{
	return a * b;
}

class Div {
	int a, b;
public:
	void setValue(int x, int y);
	int calculate();
};
void Div::setValue(int x, int y)
{
	a = x;
	b = y;
}
int Div::calculate()
{
	return a / b;
}

int main()
{
	Add a;
	Sub s;
	Mul m;
	Div d;

	int num, _num;
	char t;

	while (1)
	{
		cout << "두 정수와 연산자를 입력하세요 >>";
		cin >> num >> _num >> t;

		if (t == '+')
		{
			a.setValue(num, _num);
			cout << a.calculate() << endl;
		}
		else if (t == '-')
		{
			s.setValue(num, _num);
			cout << s.calculate() << endl;
		}
		else if (t == '*')
		{
			m.setValue(num, _num);
			cout << m.calculate() << endl;
		}
		else if (t == '/')
		{
			d.setValue(num, _num);
			cout << d.calculate() << endl;
		}
	}
}*/

//10번 나누기
/*#include <iostream>
using namespace std;

#include "3장 10번.h"

int main()
{
	Add a;
	Sub s;
	Mul m;
	Div d;

	int num, _num;
	char t;

	while (1)
	{
		cout << "두 정수와 연산자를 입력하세요 >>";
		cin >> num >> _num >> t;

		if (t == '+')
		{
			a.setValue(num, _num);
			cout << a.calculate() << endl;
		}
		else if (t == '-')
		{
			s.setValue(num, _num);
			cout << s.calculate() << endl;
		}
		else if (t == '*')
		{
			m.setValue(num, _num);
			cout << m.calculate() << endl;
		}
		else if (t == '/')
		{
			d.setValue(num, _num);
			cout << d.calculate() << endl;
		}
	}
}*/

//11번
/*#include <iostream>
using namespace std;

class Box {
	int width, height;
	char fill;
public:
	Box(int w, int h);
	void setFill(char f);
	void setSize(int w, int h);
	void draw();
};
Box::Box(int w, int h)
{
	setSize(w, h);
	fill = '*';
}
void Box::setFill(char f)
{
	fill = f;
}
void Box::setSize(int w, int h)
{
	width = w;
	height = h;
}
void Box::draw()
{
	for (int n = 0; n < height; n++)
	{
		for (int m = 0; m < width; m++)
		{
			cout << fill;
		}
		cout << endl;
	}
}
int main()
{
	Box b(10, 2);
	b.draw();
	cout << endl;
	b.setSize(7, 4);
	b.setFill('^');
	b.draw();
}*/

//11번 나누기
/*#include <iostream>
using namespace std;
#include "3장 11번.h"

int main()
{
	Box b(10, 2);
	b.draw();
	cout << endl;
	b.setSize(7, 4);
	b.setFill('^');
	b.draw();
}*/

//12번
/*#include <iostream>
using namespace std;

class Ram {
	char mem[100 * 1024];
	int size;
public:
	Ram();
	~Ram();
	char read(int address);
	void write(int address, char value);
};
Ram::Ram()
{
	size = 100 * 1024;

	for (int i = 0; i < size; i++)
	{
		mem[i] = 0;
	}
}
Ram::~Ram()
{
	cout << "메모리 제거됨" << endl;
}
char Ram::read(int address)
{
	return mem[address];
}
void Ram::write(int address, char value)
{
	 mem[address] = value;
}
int main()
{
	Ram ram;
	ram.write(100, 20);
	ram.write(101, 30);
	char res = ram.read(100) + ram.read(101);
	ram.write(102, res);
	cout << "102 번지의 값 = " << (int)ram.read(102) << endl;
}*/

//12번 나누기
/*#include <iostream>
using namespace std;
#include "3장 12번.h"

int main()
{
	Ram ram;
	ram.write(100, 20);
	ram.write(101, 30);
	char res = ram.read(100) + ram.read(101);
	ram.write(102, res);
	cout << "102 번지의 값 = " << (int)ram.read(102) << endl;
}*/

//4장
//1번
/*#include <iostream>
using namespace std;

class Color {
	int red, green, blue;
public:
	Color() { red = green = blue = 0; }
	Color(int r, int g, int b) { red = r; green = g; blue = b; }
	void setColor(int r, int g, int b) { red = r; green = g; blue = b; }
	void show() { cout << red << " " << green << " " << blue << endl; }
};

int main()
{
	Color screenColor(255, 0, 0);
	Color* p;
	p = &screenColor;
	p->show();
	Color colors[3];
	p = colors;

	p[0].setColor(255, 0, 0);
	p[1].setColor(0, 255, 0);
	p[2].setColor(0, 0, 255);

	for (int i = 0; i < 3; i++)
	{
		p[i].show();
	}
}*/

//2번
/*#include <iostream>
using namespace std;

int main()
{
	cout << "정수 5개 입력 >> ";

	double num[5];
	double sum = 0;
	double ave;

	for (int i = 0; i < 5; i++)
	{
		cin >> num[i];
		sum += num[i];
	}
	ave = sum / 5.0;

	cout << "평균 : " << ave;
}*/

//3-1번
/*#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "문자열 입력 >> ";
	string text;
	getline(cin, text);

	int count = 0;

	for (int i = 0; i < text.length(); i++)
	{
		if (text[i] == 'a')
		{
			count++;
		}
	}

	cout << "문자 a는 " << count << "개 있습니다.";
}*/

//3-2번
/*#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "문자열 입력 >> ";
	string text;
	getline(cin, text);

	int index = 0;
	int count = 0;

	for (int i = index; i < text.length(); i++)
	{
		int f = text.find('a', index);

		if (f >= index)
		{
			count++;
			index = f + 1;
		}
	}
	cout << "문자 a는 " << count << "개 있습니다.";
}*/

//4번
/*#include <iostream>
using namespace std;

class Sample {
	int* p;
	int size;
public:
	Sample(int n)
	{
		size = n;
		p = new int[n];
	}
	void read();
	void write();
	int big();
	~Sample();
};
void Sample::read()
{
	for (int i = 0; i < size; i++)
	{
		cin >> p[i];
	}
}
void Sample::write()
{
	for (int i = 0; i < size; i++)
	{
		cout << p[i] << " ";
	}
	cout << endl;
}
int Sample::big()
{
	int big = 0;

	for (int i = 0; i < size; i++)
	{
		if (p[i] > p[0])
		{
			big = p[i];
		}
		else
		{
			big = p[0];
		}
	}

	return big;
}
Sample::~Sample()
{
	delete[] p;
}
int main()
{
	int n;
	cin >> n;
	Sample s(n);
	s.read();
	s.write();
	cout << "가장 큰 수는 " << s.big() << endl;
}*/

//5번
/*#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
	cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다.)" << endl;

	string text;
	char c = rand();

	while (1)
	{
		cout << ">> ";
		getline(cin, text);

		srand((unsigned)time(0));
		int ran = rand() % text.length();

		if (text == "exit")
		{
			break;
		}

		for (int i = 0; i < text.length(); i++)
		{
			if (c % 2 == 0)
			{
				c = rand() % (122 - 97 + 1) + 97;
			}
			else
			{
				c = rand() % (90 - 65 + 1) + 65;
			}
			text[ran] = c;
		}

		cout << text << endl;
	}
}*/

//6번
/*#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다.)" << endl;
	string text;

	while (1)
	{
		cout << ">> ";
		getline(cin, text);

		if (text == "exit")
		{
			break;
		}

		for (int i = text.length() - 1; i >= 0; i--)
		{
			cout << text[i];
		}

		cout << endl;
	}
}*/

//7번
/*#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	void setRadius(int radius);
	double getArea();
};
void Circle::setRadius(int radius)
{
	this->radius = radius;
}
double Circle::getArea()
{
	return 3.14 * radius * radius;
}
int main()
{
	Circle circle[3];
	int r;
	int count = 0;
	
	for (int i = 0; i < 3; i++)
	{	
		cout << "원 " << i + 1 << "의 반지름 >> ";
		cin >> r;
		circle[i].setRadius(r);

		if (circle[i].getArea() > 100)
		{
			count++;
		}
	}
	cout << "면적이 100보다 큰 원은 " << count << "입니다.";
}*/

//8번
/*#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	void setRadius(int radius);
	double getArea();
};
void Circle::setRadius(int radius)
{
	this->radius = radius;
}
double Circle::getArea()
{
	return 3.14 * radius * radius;
}
int main()
{
	int size;
	int count = 0;

	cout << "원의 개수 >> ";
	cin >> size;

	Circle* p = new Circle[size];
	
	for (int i = 0; i < size; i++)
	{
		cout << "원 " << i + 1 << "의 반지름 >> ";
		int r;
		cin >> r;
		p[i].setRadius(r);

		if (p[i].getArea() > 100)
		{
			count++;
		}
	}

	cout << "면적이 100보다 큰 원은 " << count << "입니다.";
}*/

//9번
/*#include <iostream>
#include <string>
using namespace std;

class Person {
	string name;
	string tel;
public:
	Person();
	string getName();
	string getTel();
	void set(string name, string tel);
};
Person::Person()
{
	name = " ";
	tel = "000-0000-0000";
}
string Person::getName()
{
	return name;
}
string Person::getTel()
{
	return tel;
}
void Person::set(string name, string tel)
{
	this->name = name;
	this->tel = tel;
}
int main()
{
	cout << "이름과 전화 번호를 입력해 주세요." << endl;

	string n, t;
	Person person[3];

	for (int i = 0; i < 3; i++)
	{
		cout << "사람 " << i + 1 << ">> ";
		cin >> n >> t;

		person[i].set(n, t);
	}

		cout << "모든 사람의 이름은 " << person[0].getName() << " " << person[1].getName() << " " << person[2].getName() << endl;
	
	cout << "전화번호를 검색합니다. 이름을 입력하세요 >> ";
	cin >> n;

	for (int i = 0; i < 3; i++)
	{
		if (n == person[i].getName())
		{
			cout << "전화 번호는 " << person[i].getTel();
		}
	}
}*/

//10번
/*#include <iostream>
#include <string>
using namespace std;

class Person {
	string name;
public:
	Person();
	Person(string name);
	string getName();
	void setName(string name);
};
Person::Person()
{
	name = " ";
}
Person::Person(string name)
{
	this->name = name;
}
string Person::getName()
{
	return name;
}
void Person::setName(string name)
{
	this->name = name;
}

class Family{
	Person* p;
	string name;
	int size;
public:
	Family(string name, int size);
	void show();
	void setName(int num, string n);
	~Family();
};
Family::Family(string name, int size)
{
	p = new Person[size];
	this->name = name;
	this->size = size;
}
void Family::setName(int num, string name)
{
	p[num].setName(name);
}
void Family::show()
{
	cout << "Simpson가족은 다음과 같이 3명 입니다." << endl;

	for (int i = 0; i < size; i++)
	{
		cout << p[i].getName() << "\t";
	}
}
Family::~Family()
{
	delete[] p;
}
int main()
{
	Family* simpson = new Family("Simpson", 3);
	simpson->setName(0, "Mr. Simpson");
	simpson->setName(1, "Mrs. Simpson");
	simpson->setName(2, "Bart. Simpson");
	simpson->show();
	delete simpson;
}*/

//11번
/*#include <iostream>
using namespace std;

class Container {
	int size;
public:
	Container();
	void fill();
	void consume();
	int getSize();
};
Container::Container()
{
	size = 10;
}
void Container::fill()
{
	size = 10;
}
void Container::consume()
{
	size -= 1;
}
int Container::getSize()
{
	return size;
}

class CoffeeVendingMachine {
	Container tong[3];
	void fill();
	void selectEspresso();
	void selectAmericano();
	void selectSugarCoffee();
	void show();
public:
	void run();
	int sw;
};
void CoffeeVendingMachine::fill()
{
	for (int i = 0; i < 3; i++)
	{
		tong[i].fill();
	}
	sw = 0;
}
void CoffeeVendingMachine::selectEspresso()
{
	for (int i = 0; i < 3; i++)
	{
		if (tong[i].getSize() == 0)
		{
			sw = 1;
			break;
		}
	}
	if (sw == 1)
	{
		cout << "잔량이 부족합니다." << endl;
	}
	else
	{
		tong[0].consume();
		tong[1].consume();
		sw = 0;
		cout << "에스프레소 드세요." << endl;
	}
}
void CoffeeVendingMachine::selectAmericano()
{
	for (int i = 0; i < 3; i++)
	{
		if (tong[i].getSize() == 0)
		{
			sw = 1;
			break;
		}
	}
	if (sw == 1)
	{
		cout << "잔량이 부족합니다." << endl;
	}
	else
	{
		tong[0].consume();
		tong[1].consume();
		tong[1].consume();
		sw = 0;
		cout << "아메리카노 드세요." << endl;
	}
}
void CoffeeVendingMachine::selectSugarCoffee()
{
	for (int i = 0; i < 3; i++)
	{
		if (tong[i].getSize() == 0)
		{
			sw = 1;
			break;
		}
	}
	if (sw == 1)
	{
		cout << "잔량이 부족합니다." << endl;
	}
	else
	{
		tong[0].consume();
		tong[1].consume();
		tong[1].consume();
		tong[2].consume();
		sw = 0;
		cout << "설탕커피 드세요." << endl;
	}
}
void CoffeeVendingMachine::show()
{
	cout << "커피 : " << tong[0].getSize() << ", 물 : " << tong[1].getSize() << ", 설탕 : " << tong[2].getSize() << endl;
}
void CoffeeVendingMachine::run()
{
	cout << "*****  커피자판기를 작동합니다. *****" << endl;

	while (1)
	{
		cout << "메뉴를 눌러주세요(1 : 에스프레소, 2 : 아메리카노, 3 : 설탕커피, 4 : 잔량보기, 5 : 채우기) >>";
		int num;
		cin >> num;

		switch (num)
		{
		case 1:
			selectEspresso();
			break;
		case 2:
			selectAmericano();
			break;
		case 3:
			selectSugarCoffee();
			break;
		case 4:
			show();
			break;
		case 5:
			fill();
			show();
			break;

		default:
			cout << "다시 주문하세요." << endl;
			break;
		}
	}
}

int main()
{
	CoffeeVendingMachine c;
	c.run();
}*/

//12번
/*#include <iostream>
#include <string>
using namespace std;

class Circle {
	int radius;
	string name;
public:
	void setCircle(string name, int radius);
	double getArea();
	string getName();
};
void Circle::setCircle(string name, int radius)
{
	this->name = name;
	this->radius = radius;
}
double Circle::getArea()
{
	return 3.14 * radius * radius;
}
string Circle::getName()
{
	return name;
}

class CircleManager {
	Circle* p;
	int size;
public:
	CircleManager(int size);
	~CircleManager();
	void searchByName();
	void searchByArea();
};
CircleManager::CircleManager(int size)
{
	this->size = size;
	p = new Circle[size];

	string n;
	int r;

	for(int i = 0; i < size; i ++)
	{
		cout << "원 " << i + 1 << "의 이름과 반지름 >> ";
		cin >> n >> r;
		p[i].setCircle(n, r);
	}
}
void CircleManager::searchByName()
{
	string n;

	cout << "검색하고자 하는 원의 이름 >> ";
	cin >> n;

	for (int i = 0; i < size; i++)
	{
		if (n == p[i].getName())
		{
			cout << n << "의 면적은 " << p[i].getArea() << endl;
		}
	}
}
void CircleManager::searchByArea()
{
	int a;
	cout << "최소 면적을 정수로 입력하세요 >> ";
	cin >> a;
	cout << a << "보다 큰 원을 검색합니다." << endl;

	for (int i = 0; i < size; i++)
	{
		if (p[i].getArea() > a)
		{
			cout << p[i].getName() << "의 면적은 " << p[i].getArea() << ",";
		}
	}
}
CircleManager::~CircleManager()
{
	delete[] p;
}
int main()
{
	int size;
	cout << "원의 개수 >> ";
	cin >> size;
	CircleManager CM(size);
	CM.searchByName();
	CM.searchByArea();
}*/

//13번
/*#include<iostream>
#include <string>
using namespace std;

class Hisotogram {
	string text;
	char c;
public:
	Hisotogram(string text);
	void put(string text);
	void putc(char c);
	void print();
};
Hisotogram::Hisotogram(string text)
{
	this->text = text;
	cout << text << endl;
}
void Hisotogram::put(string text)
{
	this->text += text;
	cout << text;
}
void Hisotogram::putc(char c)
{
	text += c;
	cout << c;
}
void Hisotogram::print()
{
	int count = 0;
	int alt[26] = { 0 };

	for (int i = 0; i < text.length(); i++)
	{
		if (isalpha(text[i]))
		{
			text[i] = towlower(text[i]);
			count++;
			alt[text[i] - 'a']++;
		}
	}
	cout << endl << endl << "총 알파벳 수 : " << count << endl << endl;

	for (int i = 0; i < 26; i++)
	{
		cout << (char)(i + 'a') << " (" << alt[i] << ") " << "\t : ";
		for (int j = 0; j < alt[i]; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}
int main()
{
	Hisotogram elvisHisto("Wise men say, only fools rush in But I can't help, ");
	elvisHisto.put("falling in love with you");
	elvisHisto.putc('-');
	elvisHisto.put("Elvis Presley");
	elvisHisto.print();
}*/

//14번
/*#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

class Player {
	string name;
public:
	void setName(string name);
	string getName();
};
void Player::setName(string name)
{
	this->name = name;
}
string Player::getName()
{
	return name;
}

class GamblingGame {
	Player* p;
public:
	GamblingGame();
	~GamblingGame();
	void start();
	void game();
	bool win();
};
GamblingGame::GamblingGame()
{
	srand((unsigned)time(0));

	cout << "***** 겜블링 게임을 시작합니다. *****" << endl;

	p = new Player[2];
}
GamblingGame::~GamblingGame()
{
	delete[] p;
}
void GamblingGame::start()
{
	string n;
	cout << "첫번째 선수 이름 >> ";
	cin >> n;
	p[0].setName(n);

	cout << "두번째 선수 이름 >> ";
	cin >> n;
	p[1].setName(n);

	cout << endl;
}
bool GamblingGame::win()
{
	int card[3];

	for (int i = 0; i < 3; i++)
	{
		int ran = rand() % 3;
		card[i] = ran;
		cout << card[i] << "\t";
	}
	if (card[0] == card[1] && card[0] == card[2])
	{
		return true;
	}
	else
	{
		return false;
	}

}
void GamblingGame::game()
{
	string n;
	int i = 0;

	while(1)
	{
		cout << p[i % 2].getName() << endl;
		getline(cin, n);
		if (this->win())
		{
			cout << p[i % 2].getName() << "님의 승리" << endl;
			break;
		}
		else
		{
			cout << "아쉽군요 !" << endl;
		}
		i++;
	}
}
int main()
{
	GamblingGame g;
	g.start();
	g.game();
}*/

//2장 8번
/*#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "5명의 이름을 ';'으로 구분하여 입력하세요." << endl;
	cout << ">> ";

	char text[100];
	string big;
	int _big = 0;

	for (int i = 0; i < 5; i++)
	{
		cin.getline(text, 100, ';');
		cout << i + 1 << " : " << text << endl;

		if (strlen(text) > _big)
		{
			big = text;
			_big = strlen(text);
		}
	}
	cout << "가장 긴 이름은 " << big;
}*/

//2장 15번
/*#include <iostream>
using namespace std;

int main()
{
	while (1)
	{
		cout << "? ";
		char num[20];
		char K;
		char _num[20];

		cin >> num >> K >> _num;

		if (K == '+')
		{
			cout << num << " " << K << " " << _num << " = " << atoi(num) + atoi(_num) << endl;
		}
		if (K == '-')
		{
			cout << num << " " << K << " " << _num << " = " << atoi(num) - atoi(_num) << endl;
		}
		if (K == '*')
		{
			cout << num << " " << K << " " << _num << " = " << atoi(num) * atoi(_num) << endl;
		}
		if (K == '/')
		{
			cout << num << " " << K << " " << _num << " = " << atoi(num) / atoi(_num) << endl;
		}
		if (K == '%')
		{
			cout << num << " " << K << " " << _num << " = " << atoi(num) % atoi(_num) << endl;
		}
	}
}*/

//2장 16번
/*#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다." << endl;
	cout << "텍스트의 끝은 ; 입니다. 10000개까지 가능합니다." << endl;

	char text[10000];
	int alt[26] = { 0 };
	cin.getline(text, 10000, ';');

	int count = 0;

	for (int i = 0; i <= strlen(text); i++)
	{
		if (isalpha(text[i]))
		{
			text[i] = towlower(text[i]);
			count++;
			alt[text[i] - 'a']++;
		}
	}

	cout << endl << endl << "총 알파벳 수 : " << count << endl << endl;

	for (int i = 0; i < 26; i++)
	{
		cout << (char)(i + 'a') << " (" << alt[i] << ") " << "\t : ";

		for (int j = 0; j < alt[i]; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}*/

//3장 2번
/*#include <iostream>
#include <string>
using namespace std;

class Date {
	string text;
	int year, month, day;
public:
	Date(int y, int m, int d);
	Date(string t);
	void show();
	int getYear();
	int getMonth();
	int getDay();
};
Date::Date(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
}
Date::Date(string t)
{
	text = t;
	year = stoi(t.substr(0, 4));
	month = stoi(t.substr(5, 1));
	day = stoi(t.substr(7, 2));
}
int Date::getYear()
{
	return year;
}
int Date::getMonth()
{
	return month;
}
int Date::getDay()
{
	return day;
}
void Date::show()
{
	cout << year << "년" << month << "월" << day << "일" << endl;
}
int main()
{
	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << "," << birth.getMonth() << "," << birth.getDay() << endl;
}*/

//3장 7번
/*#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class Random {
	int num;
public:
	Random(int num);
	int next();
	int nextInRange(int a, int b);
};
Random::Random(int n)
{
	num = n;
	srand((unsigned)time(0));
}
int Random::next()
{
	int ran = rand();
	if (num % 2 == 0)
	{
		if (ran % 2 == 0)
		{
			return ran;
		}
		else
		{
			return --ran;
		}
	}
	else
	{
		if (ran % 2 == 1)
		{
			return ran;
		}
		else
		{
			return ++ran;
		}
	}
}
int Random::nextInRange(int a, int b)
{
	int ran = rand() % (b - a + 1) + a;

	if (num % 2 == 0)
	{
		if (ran % 2 == 0)
		{
			return ran;
		}
		else
		{
			return --ran;
		}
	}
	else
	{
		if (ran % 2 == 1)
		{
			return ran;
		}
		else
		{
			return ++ran;
		}
	}
}
int main()
{
	Random r(0);
	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10 개 --" << endl;
	for (int i = 0; i < 10; i++)
	{
		int n = r.next();
		cout << n << ' ';
	}

	Random _r(1);
	cout << endl << endl << "-- 2에서 9까지의 랜덤 정수 10 개 --" << endl;
	for (int i = 0; i < 10; i++)
	{
		int n = _r.nextInRange(2, 9);
		cout << n << ' ';
	}
	cout << endl;
}*/

//3장 12번
/*#include <iostream>
using namespace std;

class Ram {
	char mem[100 * 1024];
	int size;
public:
	Ram();
	~Ram();
	char read(int address);
	void write(int address, char value);
};
Ram::Ram()
{
	int size = 100 * 1024;

	for (int i = 0; i < size; i++)
	{
		mem[i] =  0 ;
	}
}
Ram::~Ram()
{
	cout << "메모리 제거됨" << endl;
}
char Ram::read(int address)
{
	return mem[address];
}
void Ram::write(int address, char value)
{
	mem[address] = value; 
}
int main()
{
	Ram ram;
	ram.write(100, 20);
	ram.write(101, 30);
	char res = ram.read(100) + ram.read(101);
	ram.write(102, res);
	cout << "102 번지의 값 = " << (int)ram.read(102) << endl;
}*/

//4장 5번
/*#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
	string text;
	char r = rand();
	cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다.)" << endl;

	while (1)
	{
		srand((unsigned)time(0));

		cout << ">> ";
		getline(cin, text);

		int ran = rand() % text.length();

		if (ran % 2 == 0)
		{
			r = rand() % (122 - 97 + 1) + 97;
		}
		else
		{
			r = rand() % (90 - 65 + 1) + 65;
		}

		text[ran] = r;

		cout << text << endl;
		
	}
}*/

/*#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	void setRadius(int radius);
	double getArea();
};
void Circle::setRadius(int radius)
{
	this->radius = radius;
}
double Circle::getArea()
{
	return 3.14 * radius * radius;
}
int main()
{
	int size;
	cout << "원의 개수 >> ";
	cin >> size;

	int r;
	int count = 0;

	Circle* circles = new Circle[size];

	for (int i = 0; i < size; i++)
	{
		cout << "원 " << i + 1 << "의 반지름 >> ";
		cin >> r;
		circles[i].setRadius(r);

		if (circles[i].getArea() > 100)
		{
			count++;
		}
	}

	cout << "면적이 100보다 큰 원은 " << count << "개 입니다." << endl;
}*/

//10번
/*#include <iostream>
#include <string>
using namespace std;

class Person {
	string name;
	int num;
public:
	Person();
	Person(string name);
	string getName();
	void setName(string name);
};
Person::Person()
{
	name = " ";
}
Person::Person(string name)
{
	this->name = name;
}
string Person::getName()
{
	return name;
}
void Person::setName(string name)
{
	this->name = name;
}

class Family {
	Person* p;
	string name;
	int num;
	int size;
public:
	Family(string name, int size);
	void show();
	~Family();
	void setName(int num, string name);
};
Family::Family(string name, int size)
{
	p = new Person[size];
	this->name = name;
	this->size = size;
}
void Family::show()
{
	cout << "simpson 가족은 다음과 같이 3명입니다." << endl;

	for (int i = 0; i < size; i++)
	{
		cout << p[i].getName() << "\t";
	}
}
Family::~Family()
{
	delete[] p;
}
void Family::setName(int num, string name)
{
	p[num].setName(name);
}
int main()
{
	Family* simpson = new Family("Simpson", 3);
	simpson->setName(0, "Mr. Simpson");
	simpson->setName(1, "Mrs. Simpson");
	simpson->setName(2, "Bart. Simpson");
	simpson->show();
	delete simpson;
}*/

//11번
/*#include <iostream>
using namespace std;

class Container {
	int size;
public:
	Container();
	void fill();
	void consume();
	int getSize();
};
Container::Container()
{
	size = 10;
}
void Container::fill()
{
	size = 10;
}
void Container::consume()
{
	size -= 1;
}
int Container::getSize()
{
	return size;
}

class CoffeeVendingMachine {
	Container tong[3];
	void fill();
	void selectEspresso();
	void selectAmericano();
	void selectSugarCoffee();
	void show();
public:
	int a;
	void run();
};
void CoffeeVendingMachine::fill()
{
	for (int i = 0; i < 3; i++)
	{
		tong[i].fill();
		a = 0;
	}
}
void CoffeeVendingMachine::selectEspresso()
{
	for (int i = 0; i < 3; i++)
	{
		if (tong[i].getSize() == 0)
		{
			a = 1;
		}
	}

	if (a == 1)
	{
		cout << "원료가 부족합니다." << endl;
	}
	else
	{
		tong[0].consume();
		tong[1].consume();
		cout << "에스프레소 드세요." << endl;
	}
}
void CoffeeVendingMachine::selectAmericano()
{
	for (int i = 0; i < 3; i++)
	{
		if (tong[i].getSize() == 0)
		{
			a = 1;
		}
	}

	if (a == 1)
	{
		cout << "원료가 부족합니다." << endl;
	}
	else
	{
		tong[0].consume();
		tong[1].consume();
		tong[1].consume();
		cout << "아메리카노 드세요." << endl;
	}
}
void CoffeeVendingMachine::selectSugarCoffee()
{
	for (int i = 0; i < 3; i++)
	{
		if (tong[i].getSize() == 0)
		{
			a = 1;
		}
	}

	if (a == 1)
	{
		cout << "원료가 부족합니다." << endl;
	}
	else
	{
		tong[0].consume();
		tong[1].consume();
		tong[1].consume();
		tong[2].consume();
		cout << "설탕커피 드세요." << endl;
	}
}
void CoffeeVendingMachine::show()
{
	cout << "커피 : " << tong[0].getSize() << " 물 : " << tong[1].getSize() << " 설탕 : " << tong[2].getSize() << endl;
}
void CoffeeVendingMachine::run()
{
	cout << "***** 커피자판기를 작동합니다. *****" << endl;

	while (1)
	{
		cout << "메뉴를 눌러주세요.(1: 에스프레소, 2: 아메리카노, 3: 설탕커피, 4: 잔량보기, 5: 채우기) >>";
		int num;
		cin >> num;

		switch (num)
		{
		case 1:
			selectEspresso();
			break;
		case 2:
			selectAmericano();
			break;
		case 3:
			selectSugarCoffee();
			break;
		case 4:
			show();
			break;
		case 5:
			fill();
			show();
			break;
		default:
			cout << "다시 입력하세요";
			break;
		}
	}
}
int main()
{
	CoffeeVendingMachine C;
	C.run();
}*/

/*#include <iostream>
#include <string>
using namespace std;

class Circle {
	int radius;
	string name;
public:
	void setCircle(string name, int radius);
	double getArea();
	string getName();
};
void Circle::setCircle(string name, int radius)
{
	this->name = name;
	this->radius = radius;
}
double Circle::getArea()
{
	return 3.14 * radius * radius;
}
string Circle::getName()
{
	return name;
}

class CircleManger {
	Circle* p;
	int size;
public:
	CircleManger(int size);
	~CircleManger();
	void searchByName();
	void searchByArea();
};
CircleManger::CircleManger(int size)
{
	this->size = size;
	p = new Circle[size];

	string n;
	int r;

	for (int i = 0; i < size; i++)
	{
		cout << "원 " << i + 1 << "의 이름과 반지름 >> ";
		cin >> n >> r;
		p[i].setCircle(n, r);
	}
}
CircleManger::~CircleManger()
{
	delete[] p;
}
void CircleManger::searchByName()
{
	string n;
	cout << "검색하고자 하는 원의 이름 >> ";
	cin >> n;

	for (int i = 0; i < size; i++)
	{
		if (n == p[i].getName())
		{
			cout << p[i].getName() << "의 면적은 " << p[i].getArea() << endl;
		}
	}
}
void CircleManger::searchByArea()
{
	int num;

	cout << "최소 면적을 정수로 입력하세요 >> ";
	cin >> num;
	cout << num << "보다 큰 원을 검색합니다." << endl;

	for (int i = 0; i < size; i++)
	{
		if (p[i].getArea() > num)
		{
			cout << p[i].getName() << "의 면적은 " << p[i].getArea() << ", ";
		}
	}
}
int main()
{
	
	cout << "원의 개수 >> ";
	int size;
	cin >> size;

	CircleManger CM(size);

	CM.searchByName();
	CM.searchByArea();

}*/

//13번
/*#include <iostream>
#include <string>
using namespace std;

class Histogram {
	string text;
	char c;
public:
	Histogram(string text);
	void put(string text);
	void putc(char c);
	void print();
};
Histogram::Histogram(string text)
{
	this->text = text;
	cout << text << endl;
}
void Histogram::put(string text)
{
	this->text += text;
	cout << text;
}
void Histogram::putc(char c)
{
	this->c = c;
	text += c;
	cout << c;
}
void Histogram::print()
{
	int count = 0;
	int alt[26] = { 0 };

	for (int i = 0; i < text.length(); i++)
	{
		if (isalpha(text[i]))
		{
			text[i] = towlower(text[i]);
			count++;
			alt[text[i] - 'a']++;
		}
	}

	cout << endl << endl << "총 알파벳 수 : " << count << endl << endl;

	for (int i = 0; i < 26; i++)
	{
		cout << (char)(i + 'a') << " (" << alt[i] << ") " << "\t : ";
		
		for (int j = 0; j < alt[i]; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}
int main()
{
	Histogram elvisHisto("Wise men say, only fools rush in But I can't help, ");
	elvisHisto.put("falling in love with you");
	elvisHisto.putc('-');
	elvisHisto.put("Elvis Presley");
	elvisHisto.print();
}*/

//14번
/*#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

class Player {
	string name;
public:
	void setName(string name);
	string getName();
};
void Player::setName(string name)
{
	this->name = name;
}
string Player::getName()
{
	return name;
}

class GamblingGame {
	Player* p;
public:
	GamblingGame();
	~GamblingGame();
	void start();
	bool win();
	void game();
};
GamblingGame::GamblingGame()
{
	srand((unsigned)time(0));
	p = new Player[2];
	cout << "***** 겜블링 게임을 시작합니다. *****" << endl;
}
GamblingGame::~GamblingGame()
{
	delete[] p;
}
void GamblingGame::start()
{
	string name;
	cout << "첫번째 선수 이름 >> ";
	cin >> name;
	p[0].setName(name);
	cout << "두번째 선수 이름 >> ";
	cin >> name;
	p[1].setName(name);
	cout << endl;
}
bool GamblingGame::win()
{
	int card[3];
	for (int i = 0; i < 3; i++)
	{
		int ran = rand() % 3;
		card[i] = ran;
		cout << card[i] << "\t";
	}
		if (card[0] == card[1] && card[0] == card[2])
		{
			return true;
		}
		else
		{
			return false;
		}
	
}
void GamblingGame::game()
{
	string t;
	int i = 0;

	while (1)
	{
		cout << p[i % 2].getName() << "<Enter>" << endl;
		getline(cin, t);

		if (this->win())
		{
			cout << p[i % 2].getName() << "님의 승리 !!" << endl;
			break;
		}
		else
		{
			cout << "아쉽군요.!" << endl;
		}
		i++;
	}
}
int main()
{
	GamblingGame G;
	G.start();
	G.game();
}*/

//9번
/*#include <iostream>
#include <string>
using namespace std;

class Person {
	string name;
	string tel;
public:
	Person();
	string getName();
	string getTel();
	void set(string name, string tel);
};
Person::Person()
{
	name = " ";
	tel = "000-0000-0000";
}
string Person::getName()
{
	return name;
}
string Person::getTel()
{
	return tel;
}
void Person::set(string name, string tel)
{
	this->name = name;
	this->tel = tel;
}
int main()
{
	Person p[3];
	cout << "이름과 전화번호를 입력해 주세요." << endl;
	string n, t;

	for (int i = 0; i < 3; i++)
	{
		cout << "사람 " << i + 1 << ">> ";
		cin >> n >> t;
		p[i].set(n, t);
	}
	cout << "모든 사람의 이름은 " << p[0].getName() << p[1].getName() << p[2].getName() << endl;

	cout << "전화번호를 검색합니다. 이름을 입력하세요 >> ";
	cin >> n;

	for (int i = 0; i < 3; i++)
	{
		if (n == p[i].getName())
		{
			cout << "전화 번호는 " << p[i].getTel();
		}
	}
}*/

/*#include <iostream>
#include <string>
using namespace std;

class Person {
	string name;
public:
	Person();
	Person(string name);
	string getName();
	void setName(string name);
};
Person::Person()
{
	name = " ";
}
Person::Person(string name)
{
	this->name = name;
}
string Person::getName()
{
	return name;
}
void Person::setName(string name)
{
	this->name = name;
}
class Family {
	Person* p;
	string name;
	int size;
public:
	Family(string name, int size);
	void show();
	void setName(int num, string name);
	~Family();
};
Family::Family(string name, int size)
{
	this->name = name;
	this->size = size;

	p = new Person[size];
}
void Family::setName(int num, string name)
{
	p[num].setName(name);
}
void Family::show()
{
	cout << "Simpson가족은 다음과 같이 3명 입니다." << endl;

	for (int i = 0; i < 3; i++)
	{
		cout << p[i].getName() << "\t";
	}
}
Family::~Family()
{
	delete[] p;
}
int main()
{
	Family* simpson = new Family("Simpson", 3);
	simpson->setName(0, "Mr. Simpson");
	simpson->setName(1, "Mrs. Simpson");
	simpson->setName(2, "Bart. Simpson");
	simpson->show();
	delete simpson;
	
}*/

/*#include <iostream>
#include <string>
using namespace std;

class Circle {
	int radius;
	string name;
public:
	void setCircle(string name, int radius);
	double getArea();
	string getName();
};
void Circle::setCircle(string name, int radius)
{
	this->name = name;
	this->radius = radius;
}
double Circle::getArea()
{
	return 3.14 * radius * radius;
}
string Circle::getName()
{
	return name;
}

class CircleManager {
	Circle* p;
	int size;
public:
	CircleManager(int size);
	~CircleManager();
	void searchByName();
	void searchByArea();
};
CircleManager::CircleManager(int size)
{
	this->size = size;
	p = new Circle[size];

	string n;
	int r;

	for (int i = 0; i < size; i++)
	{
		cout << "원 " << i + 1 << "의 이름과 반지름 >> ";
		cin >> n >> r;
		p[i].setCircle(n, r);
	}
}
void CircleManager::searchByName()
{
	cout << "검색하고자 하는 원의 이름 >> ";
	string n;
	cin >> n;

	for (int i = 0; i < size; i++)
	{
		if (n == p[i].getName())
		{
			cout << p[i].getName() << "의 면적은 " << p[i].getArea() << endl;
		}
	}
}
void CircleManager::searchByArea()
{
	int s;
	cout << "최소 면적을 정수로 입력하세요 >> ";
	cin >> s;
	cout << s << "보다 큰 원을 검색합니다." << endl;

	for (int i = 0; i < size; i++)
	{
		if (p[i].getArea() > s)
		{
			cout << p[i].getName() << "의 면적은" << p[i].getArea() << ", ";
		}
	}
}
CircleManager::~CircleManager()
{
	delete[] p;
}
int main()
{
	int size;
	cout << "원의 개수 >> ";
	cin >> size;

	CircleManager CM(size);
	CM.searchByName();
	CM.searchByArea();
}*/

/*#include <iostream>
#include <string>
using namespace std;

class Histogram {
	string text;
	char c;
public:
	Histogram(string text);
	void put(string text);
	void putc(char c);
	void print();
};
Histogram::Histogram(string text)
{
	this->text = text;
	cout << text << endl;
}
void Histogram::put(string text)
{
	this->text += text;
	cout << text;
}
void Histogram::putc(char c)
{
	this->c = c;
	text += c;
	cout << c;
}
void Histogram::print()
{
	int alt[26] = { 0 };
	int count = 0;

	for (int i = 0; i < text.length(); i++)
	{
		if (isalpha(text[i]))
		{
			text[i] = tolower(text[i]);
			count++;
			alt[text[i] - 'a']++;
		}
	}

	cout << endl << endl << "총 알파벳 수 : " << count << endl << endl;

	for (int i = 0; i < 26; i++)
	{
		cout << (char)(i + 'a') << " (" << alt[i] << ") " << "\t :";

		for (int j = 0; j < alt[i]; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}
int main()
{
	Histogram elvisHisto("Wise men say, only fools rush in But I can't help, ");
	elvisHisto.put("falling in love with you");
	elvisHisto.putc('-');
	elvisHisto.put("Elvis Presley");
	elvisHisto.print();
}*/

/*#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class Player {
	string name;
public:
	Player();
	void setName(string name);
	string getName();
};
Player::Player()
{
	name = " ";
}
string Player::getName()
{
	return name;
}
void Player::setName(string name)
{
	this->name = name;
}
class GamblingGame{
	Player* p;
	string name;
public:
	GamblingGame();
	void start();
	void game();
	bool win();
};
GamblingGame::GamblingGame()
{
	srand((unsigned)time(0));
	p = new Player[2];
	cout << "***** 겜블링 게임을 시작합니다. *****" << endl;
}
void GamblingGame::start()
{
	cout << "첫번째 선수 이름 >> ";
	string n;
	cin >> n;
	p[0].setName(n);
	cout << "두번째 선수 이름 >> ";
	cin >> n;
	p[1].setName(n);
	cout << endl;
}
bool GamblingGame::win()
{
	int card[3];

	for (int i = 0; i < 3; i++)
	{
		int ran = rand() % 3;
		card[i] = ran;
		cout << card[i] << "\t";
	}

	if (card[0] == card[1] && card[0] == card[2])
	{
		return true;
	}
	else
	{
		return false;
	}
}

void GamblingGame::game()
{
	int i = 0;
	string n;

	while (1)
	{
		cout << p[i % 2].getName() << " : <Enter>" << endl;
		getline(cin, n);

		if (this->win())
		{
			cout << p[i % 2].getName() << "님의 승리" << endl;
			break;
		}
		else
		{
			cout << "아쉽군요!" << endl;
		}
		i++;
	}
}
int main()
{
	GamblingGame GG;
	GG.start();
	GG.game();
}*/

/*#include <iostream>
#include <string>
using namespace std;

class Person {
	string name;
	string tel;
public:
	Person();
	string getName() { return name; }
	string getTel() { return tel; }
	void set(string name, string tel);
};
Person::Person()
{
	name = " ";
	tel = "000-0000-0000";
}
void Person::set(string name, string tel)
{
	this->name = name;
	this->tel = tel;
}
int main()
{
	Person person[3];
	cout << "3사람의 이름과 전화번호를 입력하세요." << endl;
	string n, t;


	for (int i = 0; i < 3; i++)
	{
		cout << "사람 " << i + 1 << ">> ";
		cin >> n >> t;
		person[i].set(n, t);
	}

	cout << "모든 사람의 이름 : " << person[0].getName() << " " << person[1].getName() << " " << person[2].getName() << endl;

	cout << endl << endl << "전화번호 검색합니다. 이름을 입력하세요 >> ";
	cin >> n;

	for (int i = 0; i < 3; i++)
	{
		if (n == person[i].getName())
		{
			cout << person[i].getName() << "의 전화번호는 " << person[i].getTel() << "입니다." << endl;
		}
	}
}

int main()
{
	int size;
	cout << "몇 명입니까 ? ";
	cin >> size;

	Person* person = new Person[size];

	cout << "3사람의 이름과 전화번호를 입력하세요." << endl;
	string n, t;

	for (int i = 0; i < size; i++)
	{
		cout << "사람 " << i + 1 << ">> ";
		cin >> n >> t;
		person[i].set(n, t);
	}

	cout << "모든 사람의 이름 : " << person[0].getName() << " " << person[1].getName() << " " << person[2].getName() << endl;

	cout << "이름을 수정합니다. 수정할 이름은 >> ";
	cin >> n;

	for (int i = 0; i < size; i++)
	{
		if (n == person[i].getName())
		{
			string _n;
			cout << "바꿀이름을 입력하세요. >> ";
			cin >> _n;

			person[i].set(_n, t);
		}
	}

	cout << "모든 사람의 이름 : " << person[0].getName() << " " << person[1].getName() << " " << person[2].getName() << endl;
}*/

#include <iostream>
#include <cstring>
using namespace std;

class Book{
	char *bname;
	int price;
public:
	Book();
	Book(char* bname, int price);
	~Book();
	void set(char* bname, int price);
	char* getName();
	int getPrice();
	void show() { cout << bname << ' ' << price << "원" << endl; }
};
Book::Book()
{
	char* bname = new char;
	price = 0;
}
Book::Book(char* bname, int price)
{
	this->bname = bname;
	this->price = price;

}
char* Book::getName()
{
	return bname;
}
int Book::getPrice()
{
	return price;
}
Book::~Book()
{
	delete[] bname;
}
void Book::set(char* bname, int price)
{
	this->bname = bname;
	this->price = price;
}
int main()
{
	Book cpp("명품C++", 30000);
	Book java = cpp;
	java.set("명품java", 15000);
	cpp.show();
	java.show();
}


