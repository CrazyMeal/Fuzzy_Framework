#ifndef ISTRIANGLE_H
#define ISTRIANGLE_H

#include "Is.h"

namespace fuzzy
{
	template <class T>
	class IsTriangle : public UnaryExpression<T>
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
	T IsTriangle<T>::evaluate(core::Expression<T> o)
	{

	}
}
#endif