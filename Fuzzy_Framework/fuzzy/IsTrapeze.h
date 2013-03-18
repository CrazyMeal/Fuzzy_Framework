#ifndef ISTRAPEZE_H
#define ISTRAPEZE_H

#include "Is.h"
#include "../core/Expression.h"
#include "../core/UnaryExpression.h"

namespace fuzzy
{
	template <class T>
	class IsTrapeze : public Is<T>
	{
	public:
		IsTriangle(T, T, T);
		virtual T evaluate(core::Expression<T>*) const;

	private:
		T min,mid,max;
	};

	template <class T>
	IsTrapeze<T>::IsTrapeze(T _min, T _mid, T _max): min(_min), mid(_mid), max(_max)
	{
	}

	template <class T>
	T IsTrapeze<T>::evaluate(core::Expression<T>* o) const
	{
		T value = o->evaluate();
	}
}
#endif