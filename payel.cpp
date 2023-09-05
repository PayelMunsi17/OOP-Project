#include<bits/stdc++.h>
using namespace std;

class myself {
    private:
    string name;
    public:
    int age=21;
    int number=123;

    void setName(string &n){
		name = n;
	}
	void info(){
		cout <<"name: "<< name<<endl;
	}
	string getName(){
		return name;
	}

    void display(){
        cout<<"Age: "<<age<<endl;
        cout<<"phone number: "<<number<<endl;
    };
};

class family {
    public:
    string name;
    int age;
    int number;

    family(){
       name;
       age;
    };
    void fname()
    {
        cout<<"father's name:"<<name<<endl;
        cout<<"father's age:"<<age<<endl;
    }

    family(string n,int a){
        name = n;
        age = a;
    };

    void display2(){
        cout<<"____Brothers details____"<<endl;
        cout<<"Brothers Name: "<<name<<endl;
        cout<<"Brothers age:"<<age<<endl;
    }
};
class sister: public family
{
 public:
     void display3(){
        cout<<"_____sister details_____"<<endl;
        cout<<"Sisters Name :"<<name<<endl;
        cout<<"Sisters Age :"<<age<<endl;
     }
};

class pocketmoney{
public:
	virtual void fatherGive (int x, int y)=0;
	virtual void brotherTaken(int x, int y)=0;
};
class RemainMoney:public pocketmoney{
	public:
		void fatherGive (int x, int y)
		{
			cout << "Father give money : "<<x+y <<endl;
		}
		void brotherTaken (int x, int y)
		{
			cout << "brother taken : "<<x+y <<endl;
		}
};

int main(){
    myself m1;
    string n;
    n="payel";
    m1.setName(n);
    m1.info();
    m1.display();
    family f1;
    f1.name="akkas ali";
    f1.age=45;
    cout<<"------father details------"<<endl;
    f1.fname();
    family f2("Maruf",21);
    f2.display2();
    sister s1;
    s1.name="eite";
    s1.age=18;
    s1.display3();
    pocketmoney *p= new RemainMoney;
    cout<<"_______pocketMoney________"<<endl;
    p->fatherGive(1000,500);
    p->brotherTaken(300,400);
}
