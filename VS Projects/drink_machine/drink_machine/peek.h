template <class DataType>
bool Stack<DataType>::peek( DataType & topElement )
{
	if ( top == -1  )
		return false;
	topElement = elements[ top ];
	return true;
}
