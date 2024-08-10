// for space in output using    cout<<"ends"
// for new line in c++ using    <<endl;
// WACPPP to print hello world.
#include<iostream>
using namespace std;
int main(){
    cout<<"hello world";
    return 0;
}

// WACPPP to print the value of global,local and static variable value.
#include <iostream>
using namespace std;
int b=10;//global variable 
int main(){
int a=15;//local variable 
static int c=25;//static variable
cout<<"a="<<a<<"   "<<"b="<<b<<"  "<<"c="<<c;
return 0;
}





// WACPPP to check wheather the user are entering coorect pin or not.
#include<iostream>
using namespace std;
int main(){
    int pin;
    cout<<"enter the atm pin:";
    cin>>pin;
    if(pin==8085){
        cout<<"correct pin";
    }else{
        cout<<"Incorrect Pin";
    }
    return 0;
}






// WACPPP to check wheather the given year is leap or not.
#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"enter the year:";
    cin>>year;
    if(year%4==0 && year%100!=0){
        cout<<"leap year";
    }
    else if(year%400==0 && year%100!=0){
        cout<<"leap year";
    }
    else
{
    cout<<"not a leap year";
}
return 0;
}




// NESTED IF ELSE QUESTION

// WACPPP to check the greatest number using nested if else.
#include<iostream>
using namespace std;
int main(){
    int a=10,b=20,c=30;
    if(a>b){
        if(a>c){
            cout<<"a="<<a;
        }
        else{
            cout<<"c="<<c;
        }
    }
    else{
        if(b>c){
            cout<<"b="<<b;
        }
        else{
            cout<<"c="<<c;
        }
    }
    return 0;
}




// WACPPP program to input the number of overs in the cricket match and output the maximum runs a 
//player can score in the match.Assume that there are no extra runs or NO balls in the match
//played for example, in a 50 over match,the miximum runs scored are 1653.
#include<iostream>
using namespace std;
int main(){
    int over;
    cout<<"enter the no. of over:";
    cin>>over;
    int max=(over - 1) * 33;
    int Max=max+36;
    cout<<"Maximum run can scored in "<<over<<" over is = "<<Max;
    return 0;
}





// WACPPP to print the self choice day using switch statement.
#include"iostream"
using namespace std;
int main(){
    int c;//c=choice day
    cout<<"Enter the choice day number from 1-7:";
    cin>>c;
    switch(c)
    {
      case 1: cout<<"monday";
    break;
      case 2: cout<<"tuesday";
    break;
      case 3: cout<<"wednesday";
    break;
      case 4: cout<<"thrusday";
    break;
      case 5: cout<<"friday";
    break;
      case 6: cout<<"saturday";
    break;
      case 7: cout<<"sunday";
    break;
    default:cout<<"invalid choice";
    }
    return 0;
}





// WACPPP to perform all the logical operator in c++
#include<iostream>
using namespace std;
int main(){
  cout<<((10>5) && (20<5))<<endl;//output: 0
  cout<<((10>5) || (80<10))<<endl;//output: 1
  cout<<((20<10) || (40>20))<<endl;//output: 1
  cout<<!(20>10)<<endl;//output: 0
  cout<<!(10>20);//output: 1
  return 0;
}





// WACPPP program to print the first 10 natural number.
#include<iostream>
using namespace std;
int main()
{
  int a=1;
  while(a<=10)
  {
    cout<<a<<endl;
    ++a;
  }
  return 0;
}




 
//  WACPP program to find the no. of digit
#include<iostream>
using namespace std;
int main()
{
  int num,count=0;
  cout<<"enter the number:";
  cin>>num;
  while(num>0)
  {
    num=num/10;
    count++;
  }
  cout<<count;
  return 0;
}





// WACPPP to give a example of do while loop
#include<iostream>
using  namespace std;
int main()
{
  int n;
  cout<<"enter the value of number";
  cin>>n;
  do
  {
    cout<<"hello vijay bhai";
  }
  while(n<5);
return 0;
}





// WACPPP to check that who is eligible to give vote and who is not elligible to give.
#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter your age:";
    cin>>age;
    if(age>=18)
    goto vote;
    else
    goto notvote;
    vote:
    cout<<"eligible for vote";
    return 0;
    notvote:
    cout<<"SORRY not elligible for vote";
    return 0;
}






// Example of array 
#include<iostream>
using namespace std;
int main(){
    int arr[5]={10,20,30,40,50};
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}






// WACPPP to print a matrix in 2d array.
#include<iostream>
using namespace std;
int main(){
    int a[3][3];
    cout<<"enter the element:"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<a[i][j]<<"  ";
    }
    cout<<endl;
    }
    return 0;
}






// WACPPP to find the reverse of a string.
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char s1[]="vijay";
    char s2[]=" kumar";
    cout<<"s1="<<s1<<endl;
    cout<<"s2="<<s2<<endl;
    int k=strlen(s1);
    int l=strlen(s2);
    cout<<"length(s1)="<<k<<endl;
    cout<<"length(s2)="<<l<<endl;
    strcat(s1,s2);
    cout<<s1<<endl;
    strupr(s1);
    cout<<"upper case:"<<s1<<endl;
    if(strcmp(s1,s2)==0){;
    cout<<"cmp:"<<s1<<endl;
    }
    else{
        cout<<"cmp:"<<s2<<endl;
    }
    strrev(s1);
    cout<<"rev(s1)="<<s1<<endl;
    return 0;
}





//example of pointer.
#include<iostream>
using namespace std;
int main(){
   int a;int b;
    int *p;int *q;
    cout<<"enter the value of a:";
    cin>>a;
    cout<<"enter the value of b:";
    cin>>b;
    p=&a;
    q=&b;
    cout<<"address of a = "<<p<<endl;
    cout<<"address of b = "<<q<<endl;
    cout<<"value of a = "<<*p<<endl;
    cout<<"value of b = "<<*q<<endl;
}




//example to check the default value of storage class.
#include<iostream>
using namespace std;
int a;//global variable
int main(){
int b;//local variable
static int c;
register int d;
cout<<"a = "<<a<<endl;
cout<<"b = "<<b<<endl; 
cout<<"c = "<<c<<endl; 
cout<<"d = "<<d<<endl; 
return 0;
}




//example of structure and union user defined data types in c++
#include<iostream>
using namespace std;
struct s
{
    int marks;  //int 4 bytes
    float avg;  //float 4 bytes
    double salary;  //double 8 bytes
    // Total memory taken by struct is :4+4+8=16 bytes
};
union u
{
    int marks;      // as we know that the union
    float avg;      // size is equal to biggest member size
    double salary;  // so Total size is: 8 bytes
};
int main(){
    struct s  m;
    union u   n;
    cout<<"structure size = "<<sizeof m<<endl;
    cout<<"union size = "<<sizeof n<<endl;
    return 0;
}




//How to use the struct user defined function in c++
#include<iostream>
using namespace std;
struct str
{
    int roll;
    char name[10];
    int  marks;
};
int main(){
    struct str S;
    cout<<"enter your roll:";
    cin>>S.roll;

    cout<<"enter your name:";
    cin>>S.name;

    cout<<"enter your marks:";
    cin>>S.marks;

    cout<<S.roll<<endl;
    cout<<S.name<<endl;
    cout<<S.marks<<endl;
    return 0;
}




//example of ___enum____user defined function in c++
#include<iostream>
using namespace std;
int main(){
    enum gender{male,female,other};
    cout<<male<<endl;
    cout<<female<<endl;
    cout<<other<<endl;

    gender str=other;
    cout<<str<<endl;
    return 0;
}
      




//example of ____macro___ 
#include<iostream>
using namespace std;
#define num 10
int main(){
    cout<<"Table of 10:"<<endl;
    for(int i=1;i<=10;i++){
        int r=num*i;
        cout<<num<<" * "<<i<<" = "<<r<<endl;
    }
    return 0;
}

   


//example of __macro__ just like a global variable
#include<iostream>
#define num(a,b)  ((a>b)?a:b)
using namespace std;
int main(){
    cout<<num(123,465)<<endl;
    cout<<num(456,456)<<endl;
    cout<<num(457,789)<<endl;
    cout<<num(786,596)<<endl;
    cout<<num(356,789)<<endl;
    cout<<num(475,236)<<endl;
    cout<<num(431,729)<<endl;
    return 0;
}





//example of __exception handling__
#include<iostream>
using namespace std;
int main(){
    cout<<"Execution start..."<<endl;
    int a,b,c;
    cout<<"enter two number:";
    cin>>a>>b;

    try
    {
        if(b==0)
        throw b;
        c=a/b;
        cout<<"Result:"<<c<<endl;
    }
    catch(int x)
    {
        cout<<"can not divisible by "<<x<<endl;
    }
    cout<<"Execution end..."<<endl;
    return 0;
}




//example of __class and object__
#include<iostream>
using namespace std;
class print
{
    public:
    void show()
    {
      cout<<"welcome to GLA"<<endl;  
    }
    
};
int main(){
    print obj;
    obj.show();
    return 0;
}




//example of __class and object__
#include<iostream>
using namespace std;
class person
{
    private:            //state
    int run;
    string msg;
    public:
    void play()         //behaviour
    {
        run=50;
        cout<<"today i scored "<<run<<" runs"<<endl;
    }
    void walk()
    {
        msg="today i walked 5 kilometer";
        cout<<"and "<<msg;
    }
};
int main(){
    person obj;    //identities
    obj.play();
    obj.walk();
    return 0;
}





//example of access specifier
#include<iostream>
using namespace std;
class A
{
    private:
    int a;
    protected:
    int b;
    public:
    int c;
};
int main(){
    A obj;
    //obj.a=10;
    //obj.b=20;
    obj.c=30;
    //cout<<obj.a<<endl;    not allowed because
    //cout<<obj.b<<endl;    a is declared in 
    cout<<obj.c<<endl;    // private and b is in protected
    return 0;
}





// example of __constructor__
