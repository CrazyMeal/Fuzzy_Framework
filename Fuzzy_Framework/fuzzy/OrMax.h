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

	template <class T>
	T OrMax<T>::evaluate(core::Expression<T>* _left, core::Expression<T>* _right) const
	{
		T left = _left->evaluate();
		T right = _right->evaluate();

		return (left>=right)? left : right ;
	}
}
#endif