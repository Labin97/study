#include "Sales.hpp"

int main(void)
{
	SALES::Sales s1;
	SALES::Sales s2;
	SALES::Sales s3;
	double ar3[3] = { 1.1, 2.2, 3.3};
	double ar4[4] = { 1.1, 2.2, 3.3, 4.4};

	SALES::setSales(s1, ar3, 3);
	SALES::setSales(s2, ar4, 4);
	SALES::setSales(s3);

	std::cout << "s1" << std::endl;
	SALES::showSales(s1);

	std::cout << "s2" << std::endl;
	SALES::showSales(s2);

	std::cout << "s3" << std::endl;
	SALES::showSales(s3);
}