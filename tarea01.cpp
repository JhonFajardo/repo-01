#include <iostream>

int main()
{
    //int result{};
    int n{};
    double result{};
    for(n=10; n<=100 and n>=10 ;n=n+1)
    {

        if(n%2 == 1){
            std::cout << n<< "\n";
            result = result + 1.0/n;
            std::cout << result << "\n";
        }
        
    }
    //std::cout << result << "\n";
    return 0;
}