#include <bits/stdc++.h>
using namespace std;
class Shape{   //if method is virtual then this class automatically becomes Abstract class
    virtual void draw()=0; //pure virtual class 
};
class circle : public Shape{
    public:
        void draw(){
            cout<<"Drwaing Circle"<<endl;
        }
};
int main(){
    // Shape s1; cannot make obj because shape is abstract class
    circle c1;
    c1.draw();
    return 0;
}