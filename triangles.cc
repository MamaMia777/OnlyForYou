#include <iostream>
#include <math.h>
using namespace std;

class Triangle{
    private:
        double a,b,c;
    public:
        Triangle(double a, double b, double c){
            this->a = a;
            this->b = b;
            this->c = c;
        }
        double getPerimeter(){
            return a+b+c;
        };
        double getArea(){
            double hp = (a+b+c)/2; 
            return pow(hp*(hp-a)*(hp-b)*(hp-c),0.5);
        }

};

int main()
{
    double a,b,c;

    cout<<"a b c =>";
    cin >>a>>b>>c;

    if (a<=0 || b<=0 || c<=0 || a>b+c || b>a+c || c>a+b) {
        cout<<"Invalid triangle";
        return 0;
    }else if (c*c==a*a+b*b){
        Triangle rightTriangle(a,b,c);
        cout<<"rightTriangle with sides ["<<a<<" "<<b<<" "<<c<<"]"<<endl;
        cout.precision(3);
        cout<<"Area: "<<rightTriangle.getArea()<<endl;
        cout<<"Perimeter: "<<rightTriangle.getPerimeter();
    } else{
        Triangle equalTriange(a,b,c);
        cout<<"equalTriangle with sides ["<<a<<" "<<b<<" "<<c<<"]"<<endl;
        cout.precision(3);
        cout<<"Area: "<<equalTriange.getArea()<<endl;
        cout<<"Perimeter: "<<equalTriange.getPerimeter();
    }

    return 0;
}