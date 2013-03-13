#ifndef THENMIN_H
#define THENMIN_H

#include "../core/Expression.h"
#include "Then.h"

namespace fuzzy
{
	template <class T>
	class Then : public Or<T>
	{
	public:
		virtual T evaluate(core::Expression<T>*, core::Expression<T>*) const;
	};
}
#endif