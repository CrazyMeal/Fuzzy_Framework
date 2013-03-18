#include "core\ValueModel.h"
#include "fuzzy\AndMin.h"
#include "fuzzy\AndMult.h"
#include "fuzzy\OrPlus.h"
#include "fuzzy\OrMax.h"
#include "fuzzy\ThenMin.h"
#include "fuzzy\ThenMult.h"

#include <iostream>

void main(){

	fuzzy::AndMin<int> opMin;
	fuzzy::AndMult<int> opMult;
	fuzzy::OrPlus<int> opOrPlus;
	fuzzy::OrMax<int> opOrMax;
	fuzzy::ThenMin<int> opThenMin;
	fuzzy::ThenMult<int> opThenMult;

	core::ValueModel<int> v1(8);
	core::ValueModel<int> v2(4);

	std::cout << "premiere valeur: " << v1.evaluate() << std::endl;
	std::cout << "deuxieme valeur: " << v2.evaluate() << std::endl << std::endl;

	std::cout << "AndMin: " << opMin.evaluate(&v1, &v2) << std::endl;
	std::cout << "AndMult: " << opMult.evaluate(&v1, &v2) << std::endl;
	std::cout << "OrPlus: " << opOrPlus.evaluate(&v1, &v2) << std::endl;
	std::cout << "OrMax: " << opOrMax.evaluate(&v1, &v2) << std::endl;
	std::cout << "ThenMin: " << opThenMin.evaluate(&v1, &v2) << std::endl;
	std::cout << "ThenMult: " << opThenMult.evaluate(&v1, &v2) << std::endl;
	
	std::cin.ignore();

}