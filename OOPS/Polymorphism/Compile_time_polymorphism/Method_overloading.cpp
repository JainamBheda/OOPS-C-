//Method overloading and constructor overloadind is example of Compile time polymorphism 
#include <bits/stdc++.h>
using namespace std;
class print{
    public:
        void show(int x){
            cout<<"int : "<<x<<endl;
        }
        void show(char ch){
            cout<<"char :"<<ch<<endl;
        }
};
int main(){
    //it automatically detect at compile time that for integer parameter choose method1 show(int x) and for char parameter choose method2 show(char ch);

    print p;
    p.show(101);
    p.show('j');
    return 0;
}
