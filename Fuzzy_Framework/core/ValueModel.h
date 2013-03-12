#ifndef VALUEMODEL_H
#define VALUEMODEL_H

namespace core
{
	template <class T>
	class ValueModel: public Expression<T>
	{
	public:
		ValueModel();
		ValueModel(const T&);

		virtual T evaluate() const;
		virtual void setValue(T) const;

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
	void ValueModel<T>::setValue(T _value) const
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