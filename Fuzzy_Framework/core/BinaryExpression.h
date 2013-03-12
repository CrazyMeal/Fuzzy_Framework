#ifndef BINARYEXPRESSION_H
#define BINARYEXPRESSION_H

#include "Expression.h"

namespace core
{
	template <class T>
	class Expression
	{
	public:
		virtual T evaluate(Expression<T>*,Expression<T>*) const=0;
	};
}
#endif