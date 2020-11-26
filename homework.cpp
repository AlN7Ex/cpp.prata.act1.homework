// homework.cpp -- some tasks from act 1 (Prata)

// Task 1 -- Напишите программу, которая будет отображать Ваше имя и адрес

/*
#include <iostream>
int main()
{
	using namespace std;
	char name[20];
	cout << "What's your name?" << endl;
	cin >> name;
	int age;
	cout << "How old are you?" << endl;
	cin >> age;
	cout << "You " << name << " and your age is" << age << '.' << endl;

	return 0;

}
*/

//Task 2 -- Напишите программу, которая выдает запрос на ввод расстояния
// 			в фарлонгах и преобразует его в ярды.
//			(Один фарлонг равен 220 ярдам или 201168 м.)

/*
#include <iostream>
double converse(double);

int main()
{
	using namespace std;
	cout << "Enter distance in farlongs" << endl;
	double farlongs;
	cin >> farlongs;
	double yard;
	yard = converse(farlongs);
	cout << farlongs << " farlongs is " << yard << " yard." << endl;
}

double converse(double fr)
{
	return fr * 220;
}
*/

// Task 3 -- Напишите программу, которая предлагает пользователю
//  		 ввести свой возраст и отображает его в месяцах

/*
#include <iostream>
int converse(int);

int main()
{
	using namespace std;
	cout << "Enter your age: ";
	int years;
	cin >> years;
	int months;
	months = converse(years);
	cout << years << " years is " << months << " months." << endl;
}

int converse(int y)
{
	int YearToMonth;
	YearToMonth = y * 12;

	return YearToMonth;
}
*/

// Task 4 -- Напишите программу, которая выдает запрос на ввод часов и минут
//			 Функция main() должна передать эти два значения функции с типом void,
//			 которая отобразит время

/*
#include <iostream>
void showtime(int hours, int minutes);

int main()
{
	using namespace std;
	cout << "Enter the number of hours: ";
	int hours;
	cin >> hours;
	cout << "Enter the number of minutes: ";
	int minutes;
	cin >> minutes;
	showtime(hours, minutes);

	return 0;
}
void showtime(int hours, int minutes)
{
	using namespace std;
	cout << hours << ":" << minutes << endl;
}
*/