#ifndef ANDMULT_H
#define ANDMULT_H

#include "../core/Expression.h"
#include "And.h"

namespace fuzzy
{
	template <class T>
	class AndMult : And<T>
	{
	public:
		virtual T evaluate(core::Expression<T>*, core::Expression<T>*) const;
	};

	template <class T>
	T AndMult<T>::evaluate(core::Expression<T>* _left, core::Expression<T>* _right) const
	{
		T left = _left->evaluate();
		T right = _right->evaluate();
		T resultat = left*right;

		return resultat;
	}
}

#endif