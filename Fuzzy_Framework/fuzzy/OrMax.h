#ifndef ORMAX_H
#define ORMAX_H

#include "../core/Expression.h"
#include "Or.h"

namespace fuzzy
{
	template <class T>
	class OrMax : public Or<T>
	{
	public:
		virtual T evaluate(core::Expression<T>*, core::Expression<T>*) const;
	};
}
#endif