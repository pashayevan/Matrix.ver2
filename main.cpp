#include <iostream>
#include "matrix.h"
int main() {
	Matrix<int> m({
		{1,2},
		{4,5}
	});
	Matrix<int> mm({
		{5,5},
		{1,7}
	});
	//std::cout<<m.GetRows()<<"\n";
	//std::cout<<m.GetColumns()<<"\n";
	Matrix<double> m2(3,4);
	//std::cin >> m2;
	//std::cout << m2;
	//int el=m[0][1];
	//m[1][1]=11;
	//md[0].resize(10);
	//md(1,1)=11;
	Matrix<int> m3(2,2);
	m+=mm;
	//std::cin>>m3;
	std::cout<<m;
	
	return 0;
}
