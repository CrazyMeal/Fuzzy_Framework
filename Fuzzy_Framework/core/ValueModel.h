#ifndef VALUEMODEL_H
#define VALUEMODEL_H

#include "Expression.h"

namespace core
{
	template <class T>
	class ValueModel: public Expression<T>
	{
	public:
		ValueModel();
		ValueModel(const T&);

		virtual T evaluate() const;
		void setValue(const T&);

	private:
		T value;
	};

	template <class T>
	ValueModel<T>::ValueModel()
	{
	}

	template <class T>
	ValueModel<T>::ValueModel(const T& _value): value(_value)
	{
	}

	template <class T>
	void ValueModel<T>::setValue(const T& _value)
	{
		value = _value;
	}

	template <class T>
	T ValueModel<T>::evaluate() const
	{
		return value;
	}
}

#endif