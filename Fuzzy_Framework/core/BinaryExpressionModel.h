#ifndef BINARYEXPRESSIONMODEL_H
#define BINARYEXPRESSIONMODEL_H


namespace core
{
	template <class T>
	class BinaryExpressionModel : Expression<T>, BinaryExpression<T>
	{
	public:
		virtual T evaluate() const;
		virtual T evaluate(Expression<T>* left, Expression<T>* right)const;

		BinaryExpression<T>* getOperator();
		void setOperator(BinaryExpression<T>*);

	private:
		BinaryExpression<T>* ope;
		Expression<T>* left,right;
	};

	template <class T>
	T BinaryExpressionModel<T>::evaluate()
	{
		if (left != null && right != null)
			return evaluate(left, right);
	}

	template <class T>
	T BinaryExpressionModel<T>::evaluate(Expression<T>* _left, Expression<T>* _right)
	{
		if (ope != null)
			return ope.evaluate(_left, _right);
	}
}
#endif