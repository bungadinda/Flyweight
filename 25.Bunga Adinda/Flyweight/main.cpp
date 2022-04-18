#include "manager.h"
#include "factory.h"
#include "object.h"

int main()
{
	Factory factory;
	GameManager gameManager;

	cout << " Creating Objek .." << endl;
	gameManager.generetObject();

	cout << " Displaying Objek .." << endl;
	gameManager.printArray();
	gameManager.printVectorSize();

	int opt = 0;
	while (opt != 99)
	{
		cout << endl;
		cout << "1. Gunakan Object" << endl;
		cout << "2. Display semua Object" << endl;
		cout << "3. List Objek yang dibuat pada Vektor" << endl;
		cout << "00. Exit" << endl;
		cout << "[] : "; cin >> opt;

		switch (opt)
		{
		case 1:
			gameManager.useObject();
			break;
		case 2:
			gameManager.printArray();
			break;
		case 3:
			gameManager.printVectorSize();
			break;
		}
	}
}