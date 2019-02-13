#ifndef MATRIX_H
#define MATRIX_H

#include <vector>
using namespace std;

template <typename object>
class matrix
{ 
    public:
    	matrix( int rows, int cols ) : array( rows )
    	{
    		for ( int i = 0; i < rows; ++i )
    			array[ i ].resize( cols );
    	}

    	const vector< object > & operator[] (int row) const
    	{
    		return array[ row ];
    	}
    	vector< object > & operator[] (int row)
    	{
    		return array[ row ];
    	}

    	int numrows() const
    	{
    		return array.size();
    	}
    	int numcols() const
    	{
    		return numrows( ) ? array[ 0 ].size() : 0; 
    	}

    private:
    	vector< vector< object > > array;
};

#endif