#ifndef ISTRIANGLE_H
#define ISTRIANGLE_H

#include "Is.h"
#include "../core/Expression.h"
#include "../core/UnaryExpression.h"

namespace fuzzy
{
	template <class T>
	class IsTriangle : public Is<T>
	{
	public:
		IsTriangle(T, T, T);
		virtual T evaluate(core::Expression<T>*) const;

	private:
		T min,mid,max;
	};

	template <class T>
	IsTriangle<T>::IsTriangle(T _min, T _mid, T _max): min(_min), mid(_mid), max(_max)
	{
	}

	template <class T>
	T IsTriangle<T>::evaluate(core::Expression<T>* o) const
	{
		T value = o->evaluate();

		if(value > min && value < mid)
			return (value - min) / (mid - min);
		if (value == mid)
			return 1;
		if(value > mid && value < max)
			return (max - value) / (max - mid);
		
		return 0;
	}
}
#endif