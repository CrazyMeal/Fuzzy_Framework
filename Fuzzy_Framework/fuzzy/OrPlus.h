#ifndef ORPLUS_H
#define ORPLUS_H

namespace fuzzy
{
	template <class T>
	class OrPlus : public Or<T>
	{
	public:
		virtual T evaluate();
	}
}

#endif