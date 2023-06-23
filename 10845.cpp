#include <iostream>
#include <string>
#define MAX 10000
using namespace std;

class Queue
{
private:
    int data[MAX];
    int *f,*b;
public:
    void push(int);
    int pop();
    int size();
    int empty();
    int front();
    int back();
    Queue();
    ~Queue();
};
void Queue::push(int n){
    if(f==NULL&&b==NULL){
        f = b = data;
        *f = n;
    }
    else{
        b++;
        *b = n;
    }
}
int Queue::pop(){
    if(f==NULL&&b==NULL) return -1;
    else if(f==b){
        int tmp = *f;
        f = b = NULL;
        return tmp;
    }
    else{
        int tmp = *f;
        f++;
        return tmp;
    }
}
int Queue::size(){
    if(f==NULL&&b==NULL) return 0;
    else return b-f+1;
}
int Queue::empty(){
    if(f==NULL&&b==NULL) return 1;
    else return 0;
}
int Queue::front(){
    if(f==NULL) return -1;
    else return *f;
}
int Queue::back(){
    if(b==NULL) return -1;
    else return *b;
}
Queue::Queue()
{
    f = b = NULL;
}
Queue::~Queue()
{
}

int main(){
    Queue q;
    int N;
    cin >> N;
    string s;

    for(int i=0; i<N; i++){
        cin >> s;
        if(s=="push"){
            int n;
            cin >> n;
            q.push(n);
        }
        else if(s=="pop"){
            cout << q.pop() << "\n";
        }
        else if(s=="size"){
            cout << q.size() << "\n";
        }
        else if(s=="empty"){
            cout << q.empty() << "\n";
        }
        else if(s=="front"){
            cout << q.front() << "\n";
        }
        else if(s=="back"){
            cout << q.back() << "\n";
        }
    }
}