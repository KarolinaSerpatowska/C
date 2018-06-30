template <typename T>
class Array {
	unsigned int m_size;
	T *arr;
public:

	class iterator
	{
		T *ptr;

	public:
		iterator(T *ptr)
		{
			this->ptr = ptr;
		}

		iterator &operator++()
		{
			++ptr;
			return *this;
		}

		iterator operator++(int)
		{
			iterator temp = *this;
			ptr++;
			return temp;
		}

		T &operator*()
		{
			return *ptr;
		}

		T *operator->()
		{
			return ptr;
		}

		bool operator==(const iterator &i)
		{
			return ptr == i.ptr;
		}

		bool operator!=(const iterator &i)
		{
			return ptr != i.ptr;
		}
	};

	Array(int size);
	~Array();
	int size();
	T& operator[](int index);

	iterator begin()
	{
		return iterator(arr);
	}

	iterator end()
	{
		return iterator(arr + m_size);
	}

};

template <typename T>
Array<T>::Array(int size) {
	this->m_size = size;
	this->arr = new T[size];
}

template <typename T>
Array<T>::~Array() {
	delete[] arr;
}

template <typename T>
int Array<T>::size() {
	return m_size;
}

template <typename T>
T& Array<T>::operator[](int index) {
	return arr[index];
}

