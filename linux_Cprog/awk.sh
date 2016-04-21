{
	if(NR == 1)
	{
		bstr = $0;
		next;
	}
	{print;}
	if(NR == 2)
	{
		printf bstr;
	}


}
