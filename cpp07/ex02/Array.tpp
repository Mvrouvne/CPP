template <typename T>
Array<T>::Array()
{
	array = NULL;
	n = 0;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	this->n = n;
	array = new T[n];
}

template <typename T>
Array<T>::Array(Array& old_obj)
{
	*this = old_obj;
}

template <typename T>
Array<T>&	Array<T>::operator=(Array& old_obj)
{
	if (this != &old_obj)
	{
		this->array = new T[old_obj.n];
		for(unsigned int x = 0; x < old_obj.n; x++)
			this->array[x] = old_obj.array[x];
		this->n = old_obj.n;
	}
	return *this;
}
