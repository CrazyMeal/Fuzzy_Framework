#ifndef FACTORY_H
#define FACTORY_H

#include "UnaryExpressionModel.h"
#include "BinaryExpressionModel.h"
#include <set>

namespace core
{
	template <class T>
	class Factory
	{
		public:
			typedef std::set<Expression<T>* > Memory;

		protected:
			virtual Expression<T>* Hold(Expression<T>*);
			virtual Expression<T>* NewUnary(UnaryExpression<T>*, Expression<T>*);
			virtual Expression<T>* NewBinary(BinaryExpression<T>*, Expression<T>*, Expression<T>*);

		private:
			Memory memory;
	};

	template <class T>
	Expression<T>* Factory<T>::NewUnary(UnaryExpression<T>* _ope, Expression<T>* _o)
	{
		return (UnaryExpressionModel<T>*) Hold(new UnaryExpressionModel<T>(_ope, _o));
	}

	template <class T>
	Expression<T>* Factory<T>::NewBinary(BinaryExpression<T>* _ope, Expression<T>* _left, Expression<T>* _right)
	{
		return (BinaryExpressionModel<T>*) Hold(new BinaryExpressionModel<T>(_ope, _left, _right));
	}
	
	template <class T>
	Expression<T>* Factory<T>::Hold(Expression<T>* _expr)
	{
		memory.insert(_expr);
		return _expr;
	}
}
#endif