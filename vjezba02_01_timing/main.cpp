# include <ctime>
# include <stdio.h>
# include <iostream>

void code_to_time()
{
	int r = 0;
	r = 3 + 5;

	return;
}

void f_O_n(long iterations)
{
	using namespace std;

	clock_t begin = clock();


	for(long i = 1; i <= iterations; i++)
	{
		//code_to_time();
	}

	clock_t end = clock();

	double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
	cout << "Elapsed time = " << elapsed_secs << endl;

	return;
}


void f_O_n_pow_2(long iterations)
{
	using namespace std;
	clock_t begin = clock();

	for(long i = 1; i <= iterations; i++)
	{
		for(long j = 1; j <= i; j++)
		{
			code_to_time();
		}
	}
	clock_t end = clock();

	double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
	cout << "Elapsed time = " << elapsed_secs << endl;
	
	return;
}

void f_O_n_pow_3(long iterations)
{
  using namespace std;
  clock_t begin = clock();

	for(long i = 1; i <= iterations; i++)
	{
		for(long j = 1; j <= iterations; j++)
		{
 			for(long k = 1; k <= iterations; k++)
			{
				//code_to_time();
				int r = 0;
				r = 3 + 5;

			}
		}
	}

	clock_t end = clock();
  double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;

  cout << "Elapsed time = " << elapsed_secs << endl;

  return;
}

void f_O_n_drugi(long iterations)
{
	time_t start,end;

	time (&start);

	//long iterations = 100000000;
	for(long i = 1; i <= iterations; i++)
	{
		code_to_time();
	}

	time (&end);

	double dif = difftime (end,start);
	printf ("Elapsed time is %.2lf seconds.", dif );
	std::cout << "Elapsed time = " << dif << std::endl;
}

int main()
{

	f_O_n(100000000);
	f_O_n(200000000);
	f_O_n(300000000);


	f_O_n_pow_2(10000);
	f_O_n_pow_2(20000);
	f_O_n_pow_2(30000);

	f_O_n_drugi(1000);

	std::cin.get();
	//system("pause");

	return 0;
}