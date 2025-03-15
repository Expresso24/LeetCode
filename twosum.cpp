#include <iostream>
#include <vector>

void solution (std::vector <int>& num, int& targ){

    int size = num.size();

    for(int i = 0; i < size; i++)
    {
        for(int j = i + 1; j < size; j++)
        {
            if( (num[i] + num[j]) == targ )
            {
                std::cout << "la solucion es i: " << i << " y tambien es j: " << j << std::endl;
            }
        }
    }
}

int main()
{
    std::vector<int> numbers = {10, 20, 30, 40, 50, 60};

    int target = 90;

    solution(numbers, target);


    
    return 0;
}