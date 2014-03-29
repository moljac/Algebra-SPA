#include <iostream>
#include <chrono>


template<typename TimeT = std::chrono::milliseconds>

struct measure
{
	template<typename F>
		static typename TimeT::rep execution(F const &func)
		{
			auto start = std::chrono::system_clock::now();

			func();

			auto now = std::chrono::system_clock::now();
			auto delta = now - start;
			auto duration = std::chrono::duration_cast< TimeT>(delta);

			return duration.count();
		}
};


int main()
{
	std::cout << measure<>::execution
	(
		[&]() 
		{  
			std::cout << "In lambda, run for ";
		}
	) << std::endl;


	std::cin.get();

	system("pause");

	return 0;
}