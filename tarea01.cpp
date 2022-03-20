#include <iostream>

int main()
{
    int n{};
    double result{};
    for(n=10; n<=100 and n>=10 ;n=n+1)
    {
        if(n%2 == 1)
        {
            result = result + 1.0/n;
        }  
    }
    std::cout << result << "\n";
    return 0;
}