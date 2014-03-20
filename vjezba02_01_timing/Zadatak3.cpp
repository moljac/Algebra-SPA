void zadatak3_funkcija1(long broj_ponavljanja)
{
	double d; 

	for ( unsigned int i = 0; i < broj_ponavljanja; ++i ) 
	{
		for ( unsigned int j = 0; j < broj_ponavljanja; ++j ) 
		{
			for ( unsigned int k = 0; k < broj_ponavljanja; ++k ) 
			{
				d = i + j - k;
			}
		}
	}

	return;
}


void zadatak3_funkcija2(long broj_ponavljanja)
{
	double d = 0.0;

	for ( unsigned int i = 0; i < broj_ponavljanja; ++i ) 
	{
		for ( unsigned int j = i + 1; j < broj_ponavljanja; ++j ) 
		{
			for ( unsigned int k = j + 1; k < broj_ponavljanja; ++k ) 
			{
				d = i + j - k;
			}
		}
	}

	return;
}
