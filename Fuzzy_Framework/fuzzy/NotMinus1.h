#ifndef NOTMINUS1_H
#define NOTMINUS1_H

#include "Not.h"

namespace fuzzy
{
	template <class T>
	class NotMinus1: public Not<T>
	{
	public:
		virtual T evaluate(core::Expression<T>*) const;
	};

	template <class T>
	T NotMinus1<T>::evaluate (core::Expression<T>* o) const
	{
		T minus = -(o->evaluate());

		return minus;
	}
}
#endif