#include <iostream>
using namespace std;

int main(){
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    
    int num=1;
    while (1)
    {
        int count=0;
        for (int i = 0; i < 5; i++)
        {
            if(num%arr[i]==0)
                count++;
        }
        if(count>=3)
            break;
        num++;
    }
    cout << num;
}