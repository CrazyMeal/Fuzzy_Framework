#include "core\ValueModel.h"
#include "fuzzy\AndMin.h"
#include "fuzzy\AndMult.h"
#include "fuzzy\OrPlus.h"
#include "fuzzy\OrMax.h"
#include "fuzzy\ThenMin.h"
#include "fuzzy\ThenMult.h"
#include "fuzzy\AggMax.h"
#include "fuzzy\AggPlus.h"
#include "fuzzy\NotMinus1.h"
#include "fuzzy\IsTriangle.h"

#include <iostream>

void main(){

	fuzzy::AndMin<float> opMin;
	fuzzy::AndMult<float> opMult;
	fuzzy::OrPlus<float> opOrPlus;
	fuzzy::OrMax<float> opOrMax;
	fuzzy::ThenMin<float> opThenMin;
	fuzzy::ThenMult<float> opThenMult;
	fuzzy::AggMax<float> opAggMax;
	fuzzy::AggPlus<float> opAggPlus;
	fuzzy::NotMinus1<float> opNotMinus1;
	fuzzy::IsTriangle<float> opIsTriangle(0.2, 0.4, 0.7);

	core::ValueModel<float> v1(8);
	core::ValueModel<float> v2(4);

	core::ValueModel<float> v3(0.3);
	core::ValueModel<float> v4(0.5);

	std::cout << "premiere valeur: " << v1.evaluate() << std::endl;
	std::cout << "deuxieme valeur: " << v2.evaluate() << std::endl << std::endl;

	std::cout << "AndMin: " << opMin.evaluate(&v1, &v2) << std::endl;
	std::cout << "AndMult: " << opMult.evaluate(&v1, &v2) << std::endl;
	std::cout << "OrPlus: " << opOrPlus.evaluate(&v1, &v2) << std::endl;
	std::cout << "OrMax: " << opOrMax.evaluate(&v1, &v2) << std::endl;
	std::cout << "ThenMin: " << opThenMin.evaluate(&v1, &v2) << std::endl;
	std::cout << "ThenMult: " << opThenMult.evaluate(&v1, &v2) << std::endl;
	std::cout << "AggMax: " << opAggMax.evaluate(&v1, &v2) << std::endl;
	std::cout << "AggPlus: " << opAggPlus.evaluate(&v1, &v2) << std::endl << std::endl;

	std::cout << "NotMinus1: " << opNotMinus1.evaluate(&v1) << std::endl << std::endl;

	
	std::cout << "IsTriangle(" << v3.evaluate() << ") : " << opIsTriangle.evaluate(&v3) << std::endl;
	std::cout << "IsTriangle(" << v4.evaluate() << ") : " << opIsTriangle.evaluate(&v4) << std::endl;

	std::cin.ignore();

}