#ifndef AGGPLUS_H
#define AGGPLUS_H

namespace fuzzy
{
	template <class T>
	class AggPlus : public Or<T>
	{
	public:
		virtual T evaluate(core::Expression<T>*, core::Expression<T>*) const;
	};

	template <class T>
	T AggPlus<T>::evaluate(core::Expression<T>* _left, core::Expression<T>* _right) const
	{
		T left = _left->Evaluate();
		T right = _right->Evaluate();
		T resultat = left+right;

		return resultat;
	}
}		
#endif