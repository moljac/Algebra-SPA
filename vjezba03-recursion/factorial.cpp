// http://en.wikipedia.org/wiki/Recursion

unsigned int factorial(unsigned int n) 
{
    if (n == 0) 
	{
        return 1;
    } 
	else 
	{
        return n * factorial(n - 1);
    }
}