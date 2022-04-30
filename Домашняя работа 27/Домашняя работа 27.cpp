#include <iostream>
#include "Products.h"




int main() {
	setlocale(LC_ALL, "Russian");
	product X;
	productData(X);							
	std::cout << "\nВывод на экран данных:\n";
	printProd(X);
	std::cout << std::endl;
	std::cout << "Полная стоимость товара, при его количестве: " << fullPrice(X) << std::endl << std::endl;
	std::cout << "Введите количество товара, которое хотите вычесть: ";
	int n;
	std::cin >> n;
	while (n > X.number) {
		std::cout << "Введённое вами количество больше, чем есть!\nВведите пожалуйста ещё раз вычетаемое количество продукта: ";
		std::cin >> n;
	}
	sell(X, n);
	printProd(X);


	return 0;
}