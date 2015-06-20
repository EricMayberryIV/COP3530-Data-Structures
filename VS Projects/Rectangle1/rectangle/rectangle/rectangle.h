/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
// File Name:	rectangle.h													 //
//																			 //
// Due Date:	20130910													 //
//																			 //
// Purpose:		This file is the creates and implements the class which is	 //
//				then used in rectangleSource.cpp							 //
//																			 //
// Author:		emayberry Eric A. Mayberry IV								 //
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#ifndef RECTANGLE_H
#define RECTANGLE_H

// template class for Rectangle
template <class T>
class Rectangle
{
public:
	Rectangle();
	void setLength(T l);
	void setWidth(T w);
	T getLength();
	T getWidth();
	T getPerimeter();
	T getArea();
private:
	T length;
	T width;
	T perimeter;
	T area;
};
/* I tried to separate the class declaration and the implementation file,
   but, for the life of me, I could not get it to compile without linker
   errors. */

// implementation of template class
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

#endif
