#include <iostream>
#include <windows.h>
#include <cmath>
// здарова
/*
тип возврата Имя_функции(аргументы_функции, ..., ...)
{
	тело_функции
}

double Plus(double one, double two)
{
	double answer;
	return one + two;
}
double Minus(double one, double two)
{
	double answer;
	answer = one - two;
	return answer;
}
double Ymnoj(double one, double two)
{
	double answer;
	answer = one * two;
	return answer;
}
double Del(double one, double two)
{
	double answer;
	answer = one / two;
	return answer;
}
double Ost_of_del(double one, double two)
{
	double answer;
	answer = fmod(one,two);
	return answer;
}

int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	srand(time(NULL));

	char symvol;
	double one, two;

	std::cout << " ________________________________________________ \n";
	std::cout << "|\t\t\t\t\t\t |\n";
	std::cout << "| \t\t << КАЛЬКУЛЯТОР >> \t\t |\n";
	std::cout << "|________________________________________________| \n\n";
	std::cout << "Введите первое число: ";
	std::cin >> one;
	std::cout << "Введите второе число: ";
	std::cin >> two;
	std::cout << "Список символов: \n" << "+ <- сложение\n"
		<< "- <- вычитание\n" << "* <- умножение\n" << "\\ <- деление\n" << "% <- остаток от деления\n";
	std::cout << "Введите один из символов из списка: ";
	std::cin >> symvol;

	if (symvol == '+')
	{
		std::cout << "\nВаш ответ:\n " << one << " + " << two << " = " << Plus(one, two) << "\n";
	}
	else if (symvol == '-')
	{
		std::cout << "\nВаш ответ:\n " << one << " - " << two << " = " << Minus(one, two) << "\n";
	}
	else if (symvol == '*')
	{
		std::cout << "\nВаш ответ:\n " << one << " * " << two << " = " << Ymnoj(one, two) << "\n";
	}
	else if (symvol == '\\')
	{
		if (two != 0)
		{
			std::cout << "\nВаш ответ:\n " << one << " \\ " << two << " = " << Del(one, two) << "\n";
		}
		else
		{
			std::cout << "Деления на 0 не существует!\n";
		}
	}
	else if (symvol == '%')
	{
		if (two != 0)
		{
			std::cout << "\nВаш ответ:\n " << one << " % " << two << " = " << Ost_of_del(one, two) << "\n";
		}
		else
		{
			std::cout << "Деления на 0 не существует!\n";
		}
	}
	else
	{
		std::cout << "некорректный ввод \n";
	}
}
*/

double Sum(double one, double two) {
	return one + two;
}
int Sum(int one, int two) {
	return one + two;
}


int FillArray(int first[], int size) {
	for (size_t i = 0; i < size; i++)
	{
		first[i] = rand() % 10;
	}
	return 0;
}
double FillArray(double second[], int size) {
	for (size_t i = 0; i < size; i++)
	{
		second[i] = (rand() % 20 + 1 ) + (double) (rand() % 9 + 1) / 10 ;
	}
	return 0;
}
char FillArray(char third[], int size) {
	for (size_t i = 0; i < size; i++)
	{
		third[i] = (char)(rand() % 26 + 97);
	}
	return ' ';
}

int ShowArray(int first[], int size) {
	for (size_t i = 0; i < size; i++)
	{
		std::cout << first[i] << " ";
	}
	return 0;
}
double ShowArray(double second[], int size) {
	std::cout << "\n";
	for (size_t i = 0; i < size; i++)
	{
		std::cout << second[i] << " ";
	}
	return 0;
}
char ShowArray(char third[], int size) {
	std::cout << "\n";
	for (size_t i = 0; i < size; i++)
	{
		std::cout << third[i] << " ";
	}
	return ' ';
}



int main(){
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	srand(time(NULL));

	Sum(6.2, 4.45);
	Sum(4, 2);

	const int size = 4;

	int first[size]{};
	double second[size]{};
	char third[size]{};
	FillArray(first, size);
	FillArray(second, size);
	FillArray(third, size);
	ShowArray(first, size);
	ShowArray(second, size);
	ShowArray(third, size);


	/*
	int number = 0, symmaPlus = 0, symmaMin = 0, MiddleNumber = 0, symma = 0; 
	double arifmetich = 0;

	const int size = 10;
	int arr[size]{};

	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % 21 - 10;
		std::cout << arr[i] << " ";
	}
	for (size_t i = 0; i < size; i++)
	{
		symma = symma + arr[i];
		if (arr[i] > 0) {
			symmaPlus += arr[i];
		}
		else {
			symmaMin += arr[i];
		}
	}
	arifmetich = symma / size;
	std::cout << "\n Сумма положительных чисел: " << symmaPlus << "\n Сумма отрицательных чисел: "
		<< symmaMin << "\n Среднее арифметическое: " << arifmetich << "\n";

	const int row = 3, col = 4;
	int arr[row][col]{};

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = rand() % 10;
			std::cout << arr[i][j] << " ";
		}
		std::cout << "\n";
	}
	*/
	/*
	int choose =0, number = 0, hp = 0,randomNumber = 0;
	int maxHp = 20, maxHpHard = 25, chance = 40;
	choose = rand() % 10;

	while (true)
	{
		system("cls");
		std::cout << "\n\n\n\t\t Игра \"угадай число\"\n\n\n";
		std::cout << "1 - начать игру\n";
		std::cout << "2 - настройки\n";
		std::cout << "0 - выход\n\n";
		std::cout << "Ввод: ";
		std::cin >> choose;

		if (choose == 1)
		{
			while (true)
			{
				system("cls");
				std::cout << "\n\n\n\t\t Выберите уровень сложности: \n\n\n";
				std::cout << "1 - легкий (1-500)\n";
				std::cout << "2 - сложный(1-5000)\n";
				std::cout << "0 - выход в главное меню\n\n";
				std::cout << "Ввод: ";
				std::cin >> choose;

				if (choose == 1)
				{
					randomNumber = rand() % 500 + 1;
					hp = maxHp;

					while (hp != 0)
					{
						system("cls");
						std::cout << "Кол-во жизней: " << hp << "\n";
						std::cout << "Введите число от 1 до 500: ";
						std::cin >> number;
						if (number == randomNumber)
						{
							std::cout << "\n Вы угадали! наши поздравления !)\n";
							system("pause");
							break;
						}
						else if (number < 1 || number > 500)
						{
							std::cout << "Вы вышли из цикла, анлак\n";
							Sleep(1200);
						}
						else
						{
							hp--;
							if (hp <= 0 )
							{
								std::cout << "О нееет, ты помер!\n";
								std::cout << "Число компа было " << randomNumber << "\n";
								system("pause");
								break;
							}
							std::cout << "\nНе угадали(\n";
							std::cout << "Кол-во жизней: " << hp << "\n";
							std::cout << "взять подсказку за 1 хп?\n";
							std::cout << "1 - да\n любое другое число - нет\n Ввод: ";
							std::cin >> choose;

							if (choose == 1)
							{
								hp--;
								if (hp <= 0)
								{
									std::cout << "О нееет, ты помер!\n";
									std::cout << "Число компа было " << randomNumber << "\n";
									system("pause");
									break;
								}
								if (number < randomNumber)
								{
									std::cout << "Ваше число меньше числа компа\n";
								}
								else
								{
									std::cout << "Ваше число больше числа компа\n";
								}
								Sleep(1500);
							}
							else
							{
								std::cout << "Отказ от подсказки\n";
								Sleep(550);
							}
						}

					}

				}
				else if (choose == 2)
				{
					randomNumber = rand() % 5000 + 1;
					hp = maxHpHard;

					while (hp != 0)
					{
						system("cls");
						std::cout << "Кол-во жизней: " << hp << "\n";
						std::cout << "Введите число от 1 до 5000: ";
						std::cin >> number;
						if (number == randomNumber)
						{
							std::cout << "\n Вы угадали! наши поздравления !)\n";
							system("pause");
							break;
						}
						else if (number < 1 || number > 5000)
						{
							std::cout << "Вы вышли из цикла, анлак\n";
							Sleep(1200);
						}
						else
						{
							hp--;
							if (hp <= 0)
							{
								std::cout << "О нееет, ты помер!\n";
								std::cout << "Число компа было " << randomNumber << "\n";
								system("pause");
								break;
							}
							std::cout << "\nНе угадали(\n";
							std::cout << "Кол-во жизней: " << hp << "\n";
							std::cout << "взять подсказку за 1 хп?\n";
							std::cout << "1 - да\n любое другое число - нет\n Ввод: ";
							std::cin >> choose;

							if (choose == 1)
							{
								if (rand() % 101 <= chance)
								{
									std::cout << "\n Ура! Бесплатная подсказка\n";
									Sleep(2000);
								}
								else
								{
									hp--;
									if (hp <= 0)
									{
										std::cout << "О нееет, ты помер!\n";
										std::cout << "Число компа было " << randomNumber << "\n";
										system("pause");
										break;
									}
								}

								hp--;
								if (hp <= 0)
								{
									std::cout << "О нееет, ты помер!\n";
									std::cout << "Число компа было " << randomNumber << "\n";
									system("pause");
									break;
								}
								if (number < randomNumber)
								{
									std::cout << "Ваше число меньше числа компа\n";
								}
								else
								{
									std::cout << "Ваше число больше числа компа\n";
								}
								Sleep(1500);
							}
							else
							{
								std::cout << "Отказ от подсказки\n";
								Sleep(550);
							}
						}

					}
				}
				else if (choose == 0)
				{
					break;
				}
				else
				{
					std::cout << "\n Некорректный ввод \n";
					Sleep(1500);
				}
			}
		}
		else if (choose == 2)
		{
			system("cls");
			std::cout << "\n\n\n\t\t Настройки игры: \n\n\n";
			std::cout << "1 - изменить кол-во жизней для легкой игры\n";
			std::cout << "2 - изменить кол-во жизней для сложной игры\n";
			std::cout << "3 - изменить шанс бесплатной подсказки для сложной игры\n";
			std::cout << "0 - Выход\n\n";
			std::cout << "Ввод: ";
			std::cin >> choose;

			if (choose == 1)
			{
				while (true)
				{
					std::cout << "Введите кол-во жизней для легкой игры: \n";
					std::cin >> choose;
					if (choose < 1 || choose > 100)
					{
						std::cout << "Допустимые лимиты от 1 до 100\n";
						Sleep(1500);
					}
					else
					{
						std::cout << "успешно!\n";
						Sleep(1500);
						maxHp = choose;
						break;
					}
				}
			}
			else if (choose == 2)
			{
				while (true)
				{
					std::cout << "Введите кол-во жизней для сложной игры: \n";
					std::cin >> choose;
					if (choose < 1 || choose > 100)
					{
						std::cout << "Допустимые лимиты от 1 до 100\n";
						Sleep(1500);
					}
					else
					{
						std::cout << "успешно!\n";
						Sleep(1500);
						maxHpHard = choose;
						break;
					}
				}
			}
			else if (choose == 3)
			{
				while (true)
				{
					std::cout << "Введите кол-во жизней для сложной игры: \n";
					std::cin >> choose;
					if (choose < 0 || choose > 100)
					{
						std::cout << "Допустимые лимиты от 0 до 100\n";
						Sleep(1500);
					}
					else
					{
						std::cout << "успешно!\n";
						Sleep(1500);
						chance = choose;
						break;
					}
				}
			}
			else if (choose == 0)
			{
				break;
			}
			else
			{
				std::cout << "\n Некорректный ввод \n";
				Sleep(1500);
			}
		}
		else if (choose == 0)
		{
			system("cls");
			std::cout << "\n\n\n\t\t Спасибо за игру! :)\"\n\n\n";
			break;
		}
		else
		{
			std::cout << "\n Некорректный ввод \n";
			Sleep(1500);
		}
	}
	*/
	/*
	double a = 0;
	do {
		system("cls");
		std::cout << "\t<Меню>\n";
		std::cout << "1) Ларионов \n";
		std::cout << "2) Александр \n";
		std::cout << "3) Дмитриевич \n";
		std::cout << "\nВыберите пункт меню: ";
		std::cin >> a;
	} while (a != 1 && a != 2 && a != 3);
	if (a == 1) {
		std::cout << "\tЛарионов :) \n";
	}
	else if (a == 2) {
		std::cout << "\tАлександр :) \n";
	}
	else if (a == 3) {
		std::cout << "\tДмитриевич :) \n";
	}


	for (int i = 0; i < 5; i++)
	{

	}

	int g = 3;
	switch (g)
	{
	case 1:

		break;
	default:

		break;
	}
	*/
	/*double a = 0, b = 0, c = 0, d = 0, x1 = 0, x2 = 0;


	std::cout << "Решение полного квадратного уравнения\n";
	std::cout << "ax^2 + bx + c = 0\n\n";
	std::cout << "Введите а: ";
	std::cin >> a;
	std::cout << "Введите b: ";
	std::cin >> b;
	std::cout << "Введите c: ";
	std::cin >> c;

	std::cout << a << "x^2 + " << b << "x + " << c << " = 0\n\n";

	d = std::pow(b, 2) - 4 * a * c;

	std::cout << "Дискриминант = " << d << "\n\n";

	if (d < 0)
	{
		std::cout << "Корней нет!\n";
	}
	else if (d == 0)
	{
		x1 = -b / (2 * a);
		std::cout << "Один корень - " << x1 << "\n";
	}
	else
	{
		x1 = (-b + std::sqrt(d)) / (2 * a);
		x2 = (-b - std::sqrt(d)) / (2 * a);
		std::cout << "x1 = " << x1 << "\n";
		std::cout << "x2 = " << x2 << "\n";
	}


	double a, sym=0;
	std::cout << "Введите число: ";
	std::cin >> a;
	while (a != 0)
	{
		sym += a;
		std::cout << "Введите число: ";
		std::cin >> a;
		if (a == 0)
		{
			std::cout << "\nСумма чисел = " << sym;
			break;
		}
	}*/
	/*
	char symvol;
	double one;
	double two;
	double answer;

	std::cout << " ________________________________________________ \n";
	std::cout << "|\t\t\t\t\t\t |\n";
	std::cout << "| \t\t << КАЛЬКУЛЯТОР >> \t\t |\n";
	std::cout << "|________________________________________________| \n\n";
	std::cout << "Введите первое число: ";
	std::cin >> one;
	std::cout << "Введите второе число: ";
	std::cin >> two;
	std::cout << "Список символов: \n" << "+ <- сложение\n"
		<< "- <- вычитание\n" << "* <- умножение\n" << "/ <- деление\n" << "% <- остаток от деления\n";
	std::cout << "Введите один из символов из списка: ";
	std::cin >> symvol;

	if (symvol == '+')
	{
		answer = one + two;
		std::cout << "\nВаш ответ:\n " << one << " + " << two << " = " << answer << "\n";
	}
	else if (symvol == '-')
	{
		answer = one - two;
		std::cout << "\nВаш ответ:\n " << one << " - " << two << " = " << answer << "\n";
	}
	else if (symvol == '*')
	{
		answer = one * two;
		std::cout << "\nВаш ответ:\n " << one << " * " << two << " = " << answer << "\n";
	}
	else if (symvol == '/')
	{
		if (two != 0)
		{
			answer = one / two;
			std::cout << "\nВаш ответ:\n " << one << " / " << two << " = " << answer << "\n";
		}
		else
		{
			std::cout << "\n Некорректный ввод данных! Деления на 0 не существует! \n";
		}
	}
	else if (symvol == '%')
	{
		if (two != 0)
		{
			std::cout << "\nВаш ответ:\n " << one << " % " << two << " = " << fmod(one, two) << "\n";
		}
		else
		{
			std::cout << "\n Некорректный ввод данных! Деления на 0 не существует! \n";
		}
	}
	else
	{
		std::cout << "\n Некорректный ввод данных! \n";
	}





	int one = 4;
	int two = 5;
	char sym;

	if (one + 10 > 0)
	{
		std::cout << "Hello";
	}
	else if (one != 0)
	{
		std::cout << 2;

	}
	else
	{
		std::cout << 1;
	}
	*/

	return 0;
}

/*
	типы данных:
	bool		true/false		0 - false
	char		'%' '\t' 'd' '4'	 '+' = 43
	unsigned char		0 to 255

	short		1234		-32769 to 32767
	unsigned short		1234		0 to 65535

	int		12365		-2147483648 to 2147483647
	unsigned int	 12334		0 to 4294967295

	float		123.456		+-3.4e-38...3.4e+38

	double		1234643.123546		+- 1.7e-308...1.7e-308
	long double		no comment

	long long int		...............

	auto		???

	const int - фиксированное значение


	Операторы:
	математические: + - * : % () ++ -- += -= *= /= =
	сравнительныe: > < == >= <= !=		<=>
	логические: && (и)		|| (или)		! (не)

	ТАБУ: goto		and or not		int номерОдинЙоу		


	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	std::cout << "Меня зовут Вика\n" << "\t Мне " << 17 << " лет\n"
		<< "Профессия отсутствует\n"<< "\t\tПельмени дорогие, потому что вкусные\n"
		<< "Пачка пельменей бесценна\n"
		<< "\t Имба энерджи - топ энергетик,потому что само название говорит об этом)"; // йоууууу

	int one = 0;

*/

