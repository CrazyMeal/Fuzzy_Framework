#ifndef FUZZYFACTORY_H
#define FUZZYFACTORY_H

//#include "Expression.h"
#include "../fuzzy/Is.h"
#include "BinaryExpression.h"
#include "UnaryExpression.h"

namespace core
{
	template <class T>
	class FuzzyFactory : public Factory<T>
	{
		public:
			virtual Expression<T>* NewAnd(Expression<T>*, Expression<T>*);
			virtual Expression<T>* NewOr(Expression<T>*, Expression<T>*);
			virtual Expression<T>* NewThen(Expression<T>*, Expression<T>*);
			virtual Expression<T>* NewAgg(Expression<T>*, Expression<T>*);
			virtual Expression<T>* NewDefuzz(Expression<T>*, Expression<T>*, const T&, const T&, const T&);
			virtual Expression<T>* NewNot(Expression<T>*);
			virtual Expression<T>* NewIs(fuzzy::Is<T>*, Expression<T>*);

		private:
			UnaryExpression<T> opNot;
			BinaryExpression<T> opAnd;
			BinaryExpression<T> opOr;
			BinaryExpression<T> opThen;
			BinaryExpression<T> opAgg;
	};
	
	template <class T>
	Expression<T>* FuzzyFactory<T>::NewAnd(Expression<T>* _left, Expression<T>* _right)
	{
		return NewBinary((BinaryExpression<T>*) &opAnd, _left, _right);
	}
	
}
#endif