#include <iostream>

void main()
{
	int a = 0;
	std::cout << std::endl;
	for (int i = 10; i > 0; i--)
	{
		std::cout << "\t";
		for (int j = 0; j < i; j++)
		{
			std::cout << ' ';
		}
		for (int l = 0; l <= a * 2; l++)
		{
			if (i > 1 && i < 10 && (i<l && l<(a*2))  )
			{
				 std::cout << " ";
				
			}
	        else
			{
				std::cout << "*";
			}
		}
		
		std::cout << std::endl;
		
		a++;
	}
}
