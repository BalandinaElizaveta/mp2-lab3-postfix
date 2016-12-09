#ifndef __STACK_H__
#define __STACK_H__

const int MaxStackSize = 100;

template <class Type>
class TStack
{
  Type *pMem;
  int size;
  int count;
public:
	TStack(int _size);
	~TStack();
	bool IsEmpty();//проверка пустоты
	bool IsFull(); // проверка полности
	void Push(Type val); // положить элемент
	Type Pop(); //взять элемент
	Type Top(); // Посмотреть элемент
};

template <class Type>
TStack<Type>::TStack(int _size)
{
		if ((_size<1) || (_size>MaxStackSize)) throw(_size);
		size = _size;
		count = 0;
		pMem = new Type[size];
}

template<class Type>
TStack<Type>::~TStack()
{
	delete[] pMem;
}

template<class Type>
bool TStack<Type>::IsEmpty()
{
	return(count == 0);
}

template<class Type>
 bool TStack<Type>::IsFull()
{
	return (count == size);
}

template<class Type>
 void TStack<Type>::Push(Type val)
{
	if (IsFull()) throw(val);
	pMem[count++] = val;
	
}

template<class Type>
 Type TStack<Type>::Pop()
{
	if (IsEmpty()) throw("Empty");
	count--;
	return pMem[count];
}

template<class Type>
Type TStack<Type>::Top()
{
	if (IsEmpty()) throw("Empty");
	return pMem[count-1];
}



#endif
