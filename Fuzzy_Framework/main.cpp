#include "core\ValueModel.h"
#include <iostream>

void main(){

	core::ValueModel<int> v1(2);

	std::cout << v1.evaluate() << std::endl;

	system("pause");

}