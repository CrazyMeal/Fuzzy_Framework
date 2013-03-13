#ifndef ANDMIN_H
#define ANDMIN_H

#include "../core/Expression.h"
#include "And.h"

namespace fuzzy
{
	template <class T>
	class AndMin: public And<T>
	{
	public:
		virtual T Evaluate(core::Expression<T>*, core::Expression<T>*) const;
	};
}

#endif