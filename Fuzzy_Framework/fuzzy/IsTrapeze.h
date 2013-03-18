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
		T min,mid1,mid2,max;
	};

	template <class T>
	IsTrapeze<T>::IsTrapeze(T _min, T _mid, T _max): min(_min), mid(_mid), max(_max)
	{
	}

	template <class T>
	T IsTrapeze<T>::evaluate(core::Expression<T>* o) const
	{
		T value = o->evaluate();

		if(value > min && value < mid1)
			return (value - min) / (mid - min);
		if (value > mid1 && value < mid2)
			return 1;
		if(value > mid2 && value < max)
			return (max - value) / (max - mid);
		
		return 0;
	}
}
#endif