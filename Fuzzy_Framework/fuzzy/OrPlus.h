#ifndef ORPLUS_H
#define ORPLUS_H

#include "../core/Expression.h"
#include "Or.h"

namespace fuzzy
{
	template <class T>
	class OrPlus : public Or<T>
	{
	public:
		virtual T evaluate(core::Expression<T>*, core::Expression<T>*) const;
	};

	template <class T>
	T OrPlus<T>::evaluate(core::Expression<T>* _left, core::Expression<T>* _right) const
	{
		T left = _left->evaluate();
		T right = _right->evaluate();
		T resultat = left+right;

		return resultat;
	}
}

#endif