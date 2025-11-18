#include <iostream>
#include <queue>
#include <stack>
#include <cctype>

using namespace std;

bool isPalindrome(const string& input){
    queue<char> q;
    stack<char> s;
    for(char c : input){
        q.push(c);
        s.push(c);
    }
    for(char c : input){
        if(q.front() != s.top()){
            return false;
        }
        q.pop();
        s.pop();
    }
    return true;
}


int main(){
    cout << "is palindrome : racecar : " << isPalindrome("racecar") << endl;  
    cout << "is palindrome : toto : " << isPalindrome("toto") << endl;  
}