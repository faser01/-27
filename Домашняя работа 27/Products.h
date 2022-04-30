#pragma once
#include <iostream>
#include <string>

struct product {
	std::string name;
	int number = 0;
	int price;
};
void productData(product& P);
void printProd(product& P);
int fullPrice(product& P);
void sell(product& P, int num);
