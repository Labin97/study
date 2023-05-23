#include "Sales.hpp"

void SALES::setSales(Sales & s, const double ar[], int n)
{
	if (n < 1)
	{
		std::cout << "n must be greater than 0." << std::endl;
		return ;
	}

	for (int i = 0; i < 4; i++)
		s.sales[i] = 0;

	for (int i = 0; i < n; i++)
		s.sales[i] = ar[i];
	
	s.max = s.min = s.sales[0];
	for (int i = 0; i < n; i++)
	{
		s.average += s.sales[i];
		if (s.max < s.sales[i])
			s.max = s.sales[i];
		if (s.min > s.sales[i])
			s.min = s.sales[i];
	}
	s.average /= n;
}

void SALES::setSales(Sales & s)
{
	std::cout << "Enter 1 sales: ";
	std::cin >> s.sales[0];
	std::cout << "Enter 2 sales: ";
	std::cin >> s.sales[1];
	std::cout << "Enter 3 sales: ";
	std::cin >> s.sales[2];
	std::cout << "Enter 4 sales: ";
	std::cin >> s.sales[3];

	s.max = s.min = s.sales[0];
	for (int i = 0; i < 4; i++)
	{
		s.average += s.sales[i];
		if (s.max < s.sales[i])
			s.max = s.sales[i];
		if (s.min > s.sales[i])
			s.min = s.sales[i];
	}
	s.average /= 4;
}

void SALES::showSales(const Sales & s)
{
	std::cout << "Sales: ";
	for (int i = 0; i < 4; i++)
		std::cout << s.sales[i] << " ";
	std::cout << std::endl;
	std::cout << "Average: " << s.average << std::endl;
	std::cout << "Max: " << s.max << std::endl;
	std::cout << "Min: " << s.min << std::endl;
}