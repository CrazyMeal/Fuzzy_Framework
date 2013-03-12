#ifndef UNARYEXPRESSIONMODEL_H
#define UNARYEXPRESSIONMODEL_H

namespace core
{
	template <class T>
	class UnaryExpressionModel : Expression<T>, UnaryExpression<T>
	{
	public:
		virtual T evaluate() const;
		virtual T evaluate(Expression<T>*) const;
	private:
		Expression<T>* operand;
		UnaryExpression<T>* ope;
	};

	template <class T>
	T UnaryExpressionModel<T>::evaluate()
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