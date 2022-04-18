#include "manager.h"

void GameManager::generetObject()
{
	srand(time(0));

	for (int i = 0; i < 9; i++)
	{
		array[i] = *factory.getObject(randomType(0 + rand() % 3));
		array[i].setCoor(i);
		array[i].setSize(rand(), rand());
	}
}

void GameManager::printVectorSize()
{
	cout << "Tipe Object yang di-created : ";
	for (auto i = factory.listOf.begin(); i != factory.listOf.end(); ++i)
	{
		cout << i->getTipe() << ", ";
	}
	cout << "Maka ukuran vektor adalah : " << factory.listOf.size() << endl;
}

string GameManager::randomType(int index)
{
	return tipe[index];
}

void GameManager::useObject()
{
	int i;
	cout << "Pada koordinat mana ? " << endl;
	cout << "Input Koordinat : ";

	cin >> i;
	array[i].use();
	cout << endl;
	cout << "Tipe Object " << array[i].getTipe() << " pada " << i << " digunakan";
}