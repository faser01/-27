#include <iostream>
#include "Products.h"

void productData(product& P)
{
	std::cout << "Ввдите название продукта -> ";
	std::cin >> P.name;
	std::cout << "Введите количество товара -> ";
	std::cin >> P.number;
	std::cout << "Введите стоимость товара -> ";
	std::cin >> P.price;
}

void printProd(product& P) {
	std::cout << "Название продукта ->: " << P.name << std::endl;
	std::cout << "Количество товара ->: " << P.number << std::endl;
	std::cout << "Стоимость товара ->: " << P.price << std::endl;
}

int fullPrice(product& P) {
	return P.number * P.price;
}

void sell(product& P, int num) {
	P.number -= num;
}