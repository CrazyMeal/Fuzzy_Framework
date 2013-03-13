#ifndef THENMIN_H
#define THENMIN_H

#include "../core/Expression.h"
#include "Then.h"

namespace fuzzy
{
	template <class T>
	class ThenMin : public Then<T>
	{
	public:
		virtual T evaluate(core::Expression<T>*, core::Expression<T>*) const;
	};

	template <class T>
	T ThenMin<T>::evaluate(core::Expression<T>* _left, core::Expression<T>* _right) const
	{
		T left = _left->evaluate();
		T right = _right->evaluate();

		return (left<=right)? left : right;
	}
}
#endif