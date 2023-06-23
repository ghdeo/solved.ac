#include<iostream>
#include<string>
#define MAX 10000
using namespace std;

class Stack
{
private:
    int data[MAX];
    int stack_top;
public:
    void push(int);
    int pop();
    int size();
    int empty();
    int top();
    Stack(/* args */);
    ~Stack();
};
void Stack::push(int n){
    stack_top++;
    data[stack_top] = n;
}
int Stack::pop(){
    int tmp;
    if(stack_top==-1) return -1;
    tmp = data[stack_top];
    stack_top--;
    return tmp;
}
int Stack::size(){
    return stack_top;
}
int Stack::empty(){
    if(stack_top==-1) return 1;
    else return 0;
}
int Stack::top(){
    if(stack_top==-1) return -1;
    else return data[stack_top];
}

Stack::Stack(/* args */)
{
    stack_top = -1;
}
Stack::~Stack()
{
    
}

int main(){
    int N,n;
    cin >> N;
    Stack stack;
    string s;
    for(int i=0; i<N; i++){
        cin >> s;
        if(s=="push"){
            cin >> n;
            stack.push(n);
        }
        else if(s=="pop"){
            cout << stack.pop() << "\n";
        }
        else if(s=="size"){
            cout << stack.size() << "\n";
        }
        else if(s=="empty"){
            cout << stack.empty() << "\n";
        }
        else if(s=="top"){
            cout << stack.top() << "\n";
        }
    }
}