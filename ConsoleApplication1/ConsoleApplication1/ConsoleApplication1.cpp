#include "pch.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <stdio.h>

struct Soldier
{
	char FirstName[30], LastName[30];

	std::string SecondName;
	std::string Nation, Position, Rank;
	int Date[2];

	struct Address
	{
		int Index, House, Apartments;
		char Country[20], Region[30], Area[30], City[20], Street[20];
	}A;
};

void Find(Soldier *man, char *LastName, int Number)
{
	for (int i = 0; i < Number; i++)
	{
		if (strcmp(LastName, man[i].LastName) == 0)
		{
			std::cout << "\n";
			std::cout << "FirstName: " << man[i].FirstName << "\n";
			std::cout << "SecondName: " << man[i].SecondName << "\n";
			std::cout << "LastName: " << man[i].SecondName << "\n";
			std::cout << "Day: " << man[i].Date[0] << "\n";
			std::cout << "Month: " << man[i].Date[1] << "\n";
			std::cout << "Year: " << man[i].Date[2] << "\n";
			/*std::cout << "Index: " << man[i].A.Index << "\n";
			std::cout << "House: " << man[i].A.House << "\n";
			std::cout << "Apartaments: " << man[i].A.Apartments << "\n";
			std::cout << "Country: " << man[i].A.Country << "\n";
			std::cout << "City: " << man[i].A.City << "\n";
			std::cout << "Region: " << man[i].A.Region << "\n";
			std::cout << "Street: " << man[i].A.Street << "\n";
			std::cout << "Area: " << man[i].A.Area << "\n";*/
		}
		else
		{
			std::cout << "\n";
			std::cout << "Correct your choice!" << "\n";
		}
	}
}


void InitMassive(Soldier *man, int Number)
{
	std::cout << "\n";
	for (size_t i = 0; i < Number; i++)
	{
		std::cout << "First Name:" << "\n";
		std::cin >> man[i].FirstName;
		std::cout << "\n";

		std::cout << "Second Name:" << "\n";
		std::cin >> man[i].SecondName;
		std::cout << "\n";

		std::cout << "Last Name:" << "\n";
		std::cin >> man[i].LastName;
		std::cout << "\n";

		//std::cout << "Position:" << "\n";
		//std::cin >> man[i].Position;
		//std::cout << "\n";

		//std::cout << "Rank:" << "\n";
		//std::cin >> man[i].Rank;
		//std::cout << "\n";

		//std::cout << "Nation:" << "\n";
		//std::cin >> man[i].Nation;
		//std::cout << "\n";

		std::cout << "Date (day, month, year) :" << "\n";
		std::cin >> man[i].Date[0];
		std::cin >> man[i].Date[1];
		std::cin >> man[i].Date[2];
		std::cout << "\n";

		/*std::cout << "Index:" << "\n";
		std::cin >> man[i].A.Index;
		std::cout << "\n";

		std::cout << "House:" << "\n";
		std::cin >> man[i].A.House;
		std::cout << "\n";

		std::cout << "Apartaments:" << "\n";
		std::cin >> man[i].A.Apartments;
		std::cout << "\n";

		std::cout << "Country:" << "\n";
		std::cin >> man[i].A.Country;
		std::cout << "\n";

		std::cout << "City:" << "\n";
		std::cin >> man[i].A.City;
		std::cout << "\n";

		std::cout << "Region:" << "\n";
		std::cin >> man[i].A.Region;
		std::cout << "\n";

		std::cout << "Street:" << "\n";
		std::cin >> man[i].A.Street;
		std::cout << "\n";

		std::cout << "Area:" << "\n";
		std::cin >> man[i].A.Area;
		std::cout << "\n";*/
	}
}

void InitNewMassive(Soldier *new_man, int Number, int Final)
{
	std::cout << "\n";
	for (size_t i = Number; i < Final; i++)
	{
		std::cout << "First Name:" << "\n";
		std::cin >> new_man[i].FirstName;
		std::cout << "\n";

		std::cout << "Second Name:" << "\n";
		std::cin >> new_man[i].SecondName;
		std::cout << "\n";

		/*std::cout << "Last Name:" << "\n";
		std::cin >> new_man[i].LastName;
		std::cout << "\n";

		std::cout << "Position:" << "\n";
		std::cin >> new_man[i].Position;
		std::cout << "\n";

		std::cout << "Rank:" << "\n";
		std::cin >> new_man[i].Rank;
		std::cout << "\n";

		std::cout << "Nation:" << "\n";
		std::cin >> new_man[i].Nation;
		std::cout << "\n";*/

		std::cout << "Date (day, month, year) :" << "\n";
		std::cin >> new_man[i].Date[0];
		std::cin >> new_man[i].Date[1];
		std::cin >> new_man[i].Date[2];
		std::cout << "\n";

		/*std::cout << "Index:" << "\n";
		std::cin >> new_man[i].A.Index;
		std::cout << "\n";

		std::cout << "House:" << "\n";
		std::cin >> new_man[i].A.House;
		std::cout << "\n";

		std::cout << "Apartaments:" << "\n";
		std::cin >> new_man[i].A.Apartments;
		std::cout << "\n";

		std::cout << "Country:" << "\n";
		std::cin >> new_man[i].A.Country;
		std::cout << "\n";

		std::cout << "City:" << "\n";
		std::cin >> new_man[i].A.City;
		std::cout << "\n";

		std::cout << "Region:" << "\n";
		std::cin >> new_man[i].A.Region;
		std::cout << "\n";

		std::cout << "Street:" << "\n";
		std::cin >> new_man[i].A.Street;
		std::cout << "\n";

		std::cout << "Area:" << "\n";
		std::cin >> new_man[i].A.Area;
		std::cout << "\n";*/
	}
}

void DisplaySoldier(Soldier man)
{
	std::cout << "\n";
	std::cout << "FirstName: " << man.FirstName << "\n";
	std::cout << "SecondName: " << man.SecondName << "\n";
	std::cout << "Day: " << man.Date[0] << "\n";
	std::cout << "Month: " << man.Date[1] << "\n";
	std::cout << "Year: " << man.Date[2] << "\n";
	/*std::cout << "Index: " << man.A.Index << "\n";
	std::cout << "House: " << man.A.House << "\n";
	std::cout << "Apartaments: " << man.A.Apartments << "\n";
	std::cout << "Country: " << man.A.Country << "\n";
	std::cout << "City: " << man.A.City << "\n";
	std::cout << "Region: " << man.A.Region << "\n";
	std::cout << "Street: " << man.A.Street << "\n";
	std::cout << "Area: " << man.A.Area << "\n";*/
}

void DisplayNewArray(Soldier *new_man, int Final)
{
	for (size_t i = 0; i < Final; i++)
	{
		DisplaySoldier(new_man[i]);
	}
}

void DisplayNewSoldier(Soldier new_man)
{
	std::cout << "\n";
	std::cout << "FirstName: " << new_man.FirstName << "\n";
	std::cout << "SecondName: " << new_man.SecondName << "\n";
	std::cout << "Day: " << new_man.Date[0] << "\n";
	std::cout << "Month: " << new_man.Date[1] << "\n";
	std::cout << "Year: " << new_man.Date[2] << "\n";
	/*std::cout << "Index: " << man.A.Index << "\n";
	std::cout << "House: " << man.A.House << "\n";
	std::cout << "Apartaments: " << man.A.Apartments << "\n";
	std::cout << "Country: " << man.A.Country << "\n";
	std::cout << "City: " << man.A.City << "\n";
	std::cout << "Region: " << man.A.Region << "\n";
	std::cout << "Street: " << man.A.Street << "\n";
	std::cout << "Area: " << man.A.Area << "\n";*/
}

void DisplayArray(Soldier *man, int Number)
{
	for (size_t i = 0; i < Number; i++)
	{
		DisplaySoldier(man[i]);
	}
}

void SWAP(Soldier *man, int i, int j) // Реализация функции 
{
	Soldier swap;

	swap = man[i];
	man[i] = man[j];
	man[j] = swap;
}

void NameSort(Soldier *man, int Number)
{
	for (int i = 0; i < Number; i++)
	{
		for (int j = i + 1; j < Number; j++)
		{
			if (strcmp(man[i].SecondName.c_str(), man[j].SecondName.c_str()) > 0)
			{
				SWAP(man, i, j);
			}
		}
	}
}
void DateSort(Soldier *man, int Number)
{
	for (size_t i = 0; i < Number + 1; i++)
	{
		for (size_t j = i + 1; j < Number; j++)
		{
			if (man[i].Date[2] == man[j].Date[2])
			{
				if (man[i].Date[1] == man[j].Date[1])
				{
					if ((man[i].Date[0] > man[j].Date[0]) || (man[i].Date[0] < man[j].Date[0]))
					{
						SWAP(man, i, j); // вызов функции, меняющей местами студентов по дате
					}
				}
				else if (man[i].Date[1] > man[j].Date[1])
				{
					SWAP(man, i, j);
				}
			}
			else if (man[i].Date[2] > man[j].Date[2])
			{
				SWAP(man, i, j);
			}
		}
	}
}

int main()
{
	char LastName[30]; // Для поиска конкретного солдата в структуре (используется в функции Find)

	short Number;

	std::cout << "Press the number of soldiers: " << "\n";
	std::cin >> Number;

	Soldier *man = new Soldier[Number];

	std::cout << "\n";
	std::cout << "Enter the information about soldiers: " << "\n";
	InitMassive(man, Number);

	std::cout << "\n";
	std::cout << "This is your list of soldiers: " << "\n";
	DisplayArray(man, Number);

pointer:

	int choice = 0;

	std::cout << "\n";
	std::cout << "What do you want to do?" << "\n" << "1. Sort" << "\n" << "2. Add new information" << "\n" << "3. Find the soldier" << "\n" << "4. Exit" << "\n";
	std::cin >> choice;

	if (choice == 1)
	{
		int choice2 = 0;

	pointer2:

		std::cout << "\n";
		std::cout << "What sort do you want?" << "\n" << "1. Name sort" << "\n" << "2. Date sort" << "\n" << "4. Exit" << "\n";
		std::cin >> choice2;

		if (choice2 == 1)
		{
			NameSort(man, Number);
			std::cout << "\n";
			std::cout << "Your new list: " << "\n";
			DisplayArray(man, Number);
			goto pointer2;
		}
		else if (choice2 == 2)
		{
			DateSort(man, Number);
			std::cout << "\n";
			std::cout << "Your new list: " << "\n";
			DisplayArray(man, Number);
			goto pointer2;
		}
		else if (choice2 == 3)
		{
			goto pointer;
		}
		else
		{
			std::cout << "\n";
			std::cout << "Correct your answer!" << "\n";
			goto pointer2;
		}
	}
	else if (choice == 2)
	{
		int Add_Number = 0;
		int Final = 0;

		std::cout << "\n";
		std::cout << "How many soldiers do you want to add?" << "\n";
		std::cin >> Add_Number;

		Final = Number + Add_Number;

		Soldier *new_man = new Soldier[Final];

		for (size_t i = 0; i < Number; i++)
		{
			new_man[i] = man[i];
		}

		InitNewMassive(new_man, Number, Final);

		std::cout << "\n";
		std::cout << "Your new list: " << "\n";
		DisplayNewArray(new_man, Final);

		delete[] new_man;
	}
	else if (choice == 3)
	{
		std::cout << "\n";
		std::cout << "Enter the LastName:" << "\n";
		std::cin >> LastName;
		Find(man, LastName, Number);
		goto pointer;
	}
	else if (choice == 4)
	{
		return 0;
	}
	else
	{
		std::cout << "\n";
		std::cout << "Correct your answer! " << "\n";
		goto pointer;
	}
	delete[] man;
}



