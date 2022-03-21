//Este programa suma los inversos de los numeros pares entre dos numeros "start" y "end" 

#include <iostream>

int main()
{
    int n{};
    int start{10};
    int end{100};
    double result{};
    for(n=start; n>=start and n<=end ;n=n+1)
    {
        if(n%2 == 1)
        {
            result = result + 1.0/n;
            std::cout << n <<" - "<< result << "\n";
        }  
    }
    std::cout << result << "\n";
    return 0;
}