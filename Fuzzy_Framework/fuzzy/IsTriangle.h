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

	private:
		T min,mid,max;
	};

	template <class T>
	IsTriangle<T>::IsTriangle(T _min, T _mid, T _max): min(_min), mid(_mid), max(_max)
	{
	}
}
#endif