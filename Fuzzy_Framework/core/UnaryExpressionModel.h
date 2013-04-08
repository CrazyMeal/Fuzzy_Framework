#ifndef UNARYEXPRESSIONMODEL_H
#define UNARYEXPRESSIONMODEL_H

#include "Expression.h"

namespace core
{
	template <class T>
	class UnaryExpressionModel : Expression<T>, UnaryExpression<T>
	{
	public:
		UnaryExpressionModel(UnaryExpression<T>*, Expression<T>*);
		virtual T evaluate() const;
		virtual T evaluate(Expression<T>*) const;
	private:
		Expression<T>* operand;
		UnaryExpression<T>* ope;
	};

	template <class T>
	UnaryExpressionModel<T>::UnaryExpressionModel(UnaryExpression<T>* _ope, Expression<T>* _operand): ope(_ope), operand(_operand)
	{
	}

	template <class T>
	T UnaryExpressionModel<T>::evaluate()const
	{
		if(operand != null)
			return evaluate(operand);
	}

	template <class T>
	T UnaryExpressionModel<T>::evaluate(Expression<T>* _ope) const
	{
		return ope->Evaluate(_ope);
	}
}

#endif