#ifndef FACTORY_H
#define FACTORY_H

#include "UnaryExpression.h"
#include "BinaryExpression.h"
#include "Expression.h"
#include "BinaryExpressionModel.h"

namespace core
{
	template <class T>
	class Factory
	{
	protected:
		virtual Expression<T>* Hold(Expression<T>*);
		virtual Expression<T>* NewUnary(UnaryExpression<T>*, Expression<T>*);
		virtual Expression<T>* NewBinary(BinaryExpression<T>*, Expression<T>*, Expression<T>*);
	
		Expression<T>* Factory<T>::NewUnary(UnaryExpression<T>* _ope, Expression<T>* _o)
		{
			return (UnaryExpressionModel<T>*) Hold(new UnaryExpressionModel<T>(_ope, _o));;
		}

		Expression<T>* Factory<T>::NewBinary(BinaryExpression<T>* _ope, Expression<T>* _left, Expression<T>* _right)
		{
			return (BinaryExpressionModel<T>*) Hold(new BinaryExpressionModel<T>(_ope, _left, _right));
		}
		Expression<T>* Factory<T>::Hold(Expression<T>* _expr)
		{

		}
	}
}
#endif