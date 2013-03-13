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
		virtual T evaluate(core::Expression<T>*, core::Expression<T>*) const;
	};

	template <class T>
	T AndMin<T>::evaluate(core::Expression<T>* _left, core::Expression<T>* _right) const
	{
		T left = _left->evaluate();
		T right = _right->evaluate();

		return (left<=right)? left : right;
	}
}

#endif