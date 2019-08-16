#!/bin/bash -x

if [ "$1" ]
then
	cat > "$1" <<- EOF
	#include <stdio.h>
	void main()
	{

	} 
	EOF
fi
