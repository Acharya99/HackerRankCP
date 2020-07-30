//naive solution to solve queues using two stack problem.

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
        switch(ch){
            case 1: std::cin>>x;
                    arr1.push(x);
                    break;
            case 2: while(!arr1.empty()){
                        arr2.push(arr1.top());
                        arr1.pop();
                    }
                    arr2.pop();
                    while(!arr2.empty()){
                        arr1.push(arr2.top());
                        arr2.pop();
                    }
                    break;
            case 3: while(!arr1.empty()){
                        arr2.push(arr1.top());
                        arr1.pop();
                    }
                    a=arr2.top();
                    std::cout<<a<<std::endl;
                    while(!arr2.empty()){
                        arr1.push(arr2.top());
                        arr2.pop();
                    }
                    break;
        }

    }
    return 0;
}
