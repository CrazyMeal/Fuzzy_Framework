#ifndef NOT_H
#define NOT_H

#include "../core/Expression.h"

namespace fuzzy
{
	template <class T>
	class Not : public core::UnaryExpression<T>
	{

	};
}
#endif