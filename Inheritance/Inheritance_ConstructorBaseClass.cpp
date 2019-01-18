#include <iostream>
#include "Inheritance_ConstructorBaseClass.h"
using namespace std;

PetStoreItem::PetStoreItem(int stock, double pr)
{
	stockNum = stock;
	price = pr;
}

// one way to create constructor for class PetStoreAnimal
//PetStoreAnimal::PetStoreAnimal(int stock, double price,
//	int age) : PetStoreItem(stock, price)
//{
//	petAge = age;
//}

// another way to create constructor for class PetStoreAnimal
PetStoreAnimal::PetStoreAnimal(int stock, double price,
	int age) : PetStoreItem(stock, price), petAge(age) {};

