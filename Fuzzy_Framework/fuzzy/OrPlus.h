namespace fuzzy
{
	template <class T>
	class OrPlus:public Or<T>
	{
	public:
		virtual T Evualuate();
	}
}