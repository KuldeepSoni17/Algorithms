#include<iostream>
using namespace std;
class maths{
    protected:
        float n,m;
    public:
        void get_data(){
        cout << "Enter two numbers:" << endl;
        cin >>n>>m;

    }
    float mul(){
        return (n*m);
    }
    float sub(){
        return (n-m);
    }
    float sum(){
        return (n+m);
    }
    float div(){
        if(m == 0){
            cout << "Can't divide by 0..\n";
        }else{
            return (n/m);
        }
    }
};
int main(){
    maths m;
    bool flag = true;
    do{
    cout<<endl;
    cout<<"Menu"<<endl;
    cout<<"1.Addition"<<endl;
    cout<<"2.Subtraction"<<endl;
    cout<<"3.Multiplication"<<endl;
    cout<<"4.Division"<<endl;
    cout<<"5.exit"<<endl;
    cout<<"Enter your choice by number from above: "<<endl;
    int o;
    cin >> o;
    if(o == 5){break;
    }
    switch(o){
    case 1:
        m.get_data();
        cout << m.sum() << endl;
        break;
    case 2:
        m.get_data();
        cout << m.sub() << endl;
        break;
    case 3:
        m.get_data();
        cout << m.mul() << endl;
        break;
    case 4:
        m.get_data();
        cout << m.div() << endl;
        break;
    case 5:

    default:
        cout << "Enter valid num.\n";break;
    }
    }while(true);
}
