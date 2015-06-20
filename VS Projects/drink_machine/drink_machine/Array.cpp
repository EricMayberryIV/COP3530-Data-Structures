#include <iostream>
using namespace std;

template <class DataType>
bool Stack<DataType>::peek( DataType & topElement )
{
	if ( top == -1  )
		return false;
	topElement = elements[ top ];
	return true;
}

template <class DataType>
bool Stack<DataType>::pop( DataType & poppedElement )
{
	if ( top == -1  )
		return false;
	poppedElement = elements[ top ];
	top--;
	int trysize = elements.length( );
	while ( ( top + 1 <= trysize >> 2 ) && trysize > 2 )
		trysize >>= 1;
	if ( trysize < elements.length( ) ) {
		try
		{
			elements.changeSize( trysize  );
		}
		catch( … ) { }
	}
	return true;
}


template <class DataType>
void Stack<DataType>::push( DataType elementToPush )
{
	if ( ++top == elements.length( ) )
		elements.changeSize( elements.length( ) << 1 );
	elements[ top ] = elementToPush;
}

template<class DataType>
bool Stack<DataType>::isEmpty() const
{
	return top == -1;
}


//template <class DataType>
//void Stack<DataType>::makeEmpty( )
//{
//	top = -1;
//	try
//		{
//			elements.changeSize( 2 );
//		}
//	catch( … ) { }
//}
