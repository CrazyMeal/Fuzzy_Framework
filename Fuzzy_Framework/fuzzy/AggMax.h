#ifndef AGGMAX_H
#define AGGMAX_H

namespace fuzzy
{
	template <class T>
	class AggMax : public Or<T>
	{
	public:
		virtual T evaluate(core::Expression<T>*, core::Expression<T>*) const;
	};

	template <class T>
	T AggMax<T>::evaluate(core::Expression<T>* _left, core::Expression<T>* _right) const
	{
	}
}
#endif