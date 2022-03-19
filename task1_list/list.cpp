#include "pch.h"
#include "list.h"



List* initList(void)
{
	List* pRoot = (List*)malloc(sizeof(*pRoot));
	if (pRoot != NULL) {

		pRoot->pNext = NULL;

		pRoot->pPlateNum = NULL;
		pRoot->entryTime = NULL;

		std::cout << "Pomyslnie zainicjalizowano liste.\n";

		return pRoot;
	}
	else {

		std::cout << "Nie udalo sie zainicjalizowac listy.\n";
		return nullptr;
	}
}

void deinitList(List* pRoot)
{
	free(pRoot);
	pRoot = NULL;
}

void addCar(List* pRoot, char* plateNum)
{

}

void removeCar(List* pRoot, char* plateNum)
{

}
void printAll(List* pRoot) {

}

int numberOfElements(List* pRoot)
{
	return 0;
}