//optimised solution to solve queues using two stack problem.

#include<iostream>
#include<stack>
#include<vector>
//using  namespace std;

int main()
{
    int ch;
    int q;
    long long int x;
    long long int a;
    std::stack<long long int> arr1;
    std::stack<long long int> arr2;
    
    std::cin>>q;
    while(q--)
    {
        std::cin>>ch;
        if(ch == 1)
        {
            std::cin >> x;
            arr2.push(x);
        }    
        else // moving into another stack.(main stack arr1 {acting as a queue})
        {
           if(arr1.empty())
           {
               while(!arr2.empty())
               {
                   arr1.push(arr2.top());
                   arr2.pop();
               }   
            }    
           if(!arr1.empty())
           {
               if(ch == 2) arr1.pop();
               if(ch == 3) std::cout << arr1.top() << std::endl;
           }  
        }   
    }    
    
    return 0;
}
