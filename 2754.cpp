#include <iostream>
#include <string>
using namespace std;

int main(){
    char ch;
    double score=0;
    
    ch=getchar();
    if(ch=='A')
        score+=4;
    else if(ch=='B')
        score+=3;
    else if(ch=='C')
        score+=2;
    else if(ch=='D')
        score+=1;
    else if(ch=='F'){
        score=0;
        printf("%.1f", score);
        return 0;
    }
    ch=getchar();
    if(ch=='+')
        score+=0.3;
    else if(ch=='-')
        score-=0.3;
    
    printf("%.1f", score);

    
}