#include <iostream>
#include <Windows.h>
using namespace std;


int main()

{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	/*Зарплата менеджера — 100$ + 5% від продажів. Користувач вводить з клавіатури загальну суму угод
менеджера за місяць. Порахувати підсумкову зарплату
менеджера.*/

	double zp = 100;
	double ygody;
	double summa;

	cout << "Зарплата менеджера без угод = " << zp << "" << '$';
	cout << "\n";
	cout << "Введіть загальну сумум угод : "; 
	cin >> ygody;
	cout<<"\n";

	summa = (ygody + ygody / 100 * 5);

	cout << "Зарплата з угодами = " << summa << "" << '$';

	return 0;

}


			



