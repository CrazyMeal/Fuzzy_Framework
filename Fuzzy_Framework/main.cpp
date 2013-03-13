#include "core\ValueModel.h"
#include "fuzzy\AndMin.h"
#include "fuzzy\AndMult.h"
#include <iostream>

void main(){

	fuzzy::AndMin<int> opMin;
	fuzzy::AndMult<int> opMult;
	core::ValueModel<int> v1(8);
	core::ValueModel<int> v2(4);

	std::cout << "premiere valeur: " << v1.evaluate() << std::endl;
	std::cout << "deuxieme valeur: " << v2.evaluate() << std::endl << std::endl;

	std::cout << "AndMin: " << opMin.evaluate(&v1, &v2) << std::endl;
	std::cout << "AndMult: " << opMult.evaluate(&v1, &v2) << std::endl;
	std::cin.ignore();

}