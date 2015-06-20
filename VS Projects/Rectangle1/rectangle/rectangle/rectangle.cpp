
template <class T>
Rectangle<T>::Rectangle()
{
}

template <class T>
void Rectangle<T>::setLength(T l)
{
	length=l;
}

template <class T>
void Rectangle<T>::setWidth(T w)
{
	width=w;
}

template <class T>
T Rectangle<T>::getLength()
{
	return length;
}

template <class T>
T Rectangle<T>::getWidth()
{
	return width;
}

template <class T>
T Rectangle<T>::getPerimeter()
{
	perimeter=(length*2)+(width*2);
	return perimeter;
}

template <class T>
T Rectangle<T>::getArea()
{
	area=length*width;
	return area;
}
