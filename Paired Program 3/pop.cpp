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
