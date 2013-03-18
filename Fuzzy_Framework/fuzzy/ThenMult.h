#ifndef THENMULT_H
#define THENMULT_H

#include "../core/Expression.h"
#include "Then.h"

namespace fuzzy
{
	template <class T>
	class ThenMult : public Then<T>
	{
	public:
		virtual T evaluate(core::Expression<T>*, core::Expression<T>*) const;
	};

	template <class T>
	T ThenMult<T>::evaluate(core::Expression<T>* _left, core::Expression<T>* _right) const
	{
		T left = _left->evaluate();
		T right = _right->evaluate();
		T resultat = left*right;

		return resultat;
	}
}
#endif