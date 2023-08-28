#include <iostream>
using namespace std;
int main(){
// question number 1
    int a , b ;
    cout << "enter first number:";
    cin >> a ;
    cout << "enter second number:";
    cin >> b ;
    if (a > b){
        cout <<"first number "<< a << " is greater" << endl;
    } else if (a == b) {
        cout <<"first and second number are equal" <<endl; 
    }
    else cout << "second number "<< b << " is greater" << endl;

// question number 2
    float pi = 3.14;
    float radius , circumference , area ;
    cout <<"enter the radius of the circle:";
    cin >> radius ;
    area = 2 * pi * radius;
    cout << "the area of circle is "<<area <<endl;
    circumference = pi * radius * radius ;
    cout << "the circumference of circle is "<< circumference << endl ;
    if (area > circumference){
        cout << "area is greater than circumference"<<endl;
    }else  cout << "circuference is greater than area"<< endl;

    // question number 3
    int year ;
    cout << "enter a year :";
    cin >> year;
    if (year % 4 == 0){
        cout << year <<" is a leap year" <<endl;
    }else if (year % 100){
     cout << year <<" is not a leap year"<< endl;
    }else if(year % 400 == 0){
        cout << year <<" is a leap year "<<endl ;
    }else cout << year <<" is not a leap year "<<endl ;

    // question number 4
    int lenght , width , Area , perimeter;
    cout <<"Enter the lenght of the rectangle :";
    cin >> lenght ;
    cout <<"Enter the width of the rectangle :";
    cin >> width ;
    Area = lenght * width ;
    cout << "the area of rectangle is " << Area  <<endl;
    perimeter = (lenght + width) * 2; 
    cout <<"the perimeter of rectangle is " << perimeter << endl ;
    if (Area > perimeter){
        cout <<"the area is greater than the perimeter  " << endl;
    } else if (Area == perimeter){
        cout <<"the area and perimeter is both are equal " << endl;
    } 
    else cout <<"the perimter is greater than area " << endl ;
    
     // question number 5
     int side1 , side2 , side3 ;
     cout <<"Enter the first side of the triangle :";
     cin >> side1 ;
     cout << "Enter the second side of the triangle :";
     cin >>side2 ;
     cout <<"Enter the third side of the triangle :";
     cin >>side3 ;
     if (side1 == side2 && side2 == side3) {
     cout <<"this is equilateral triangle"<<endl ;
     } else if (side1 == side2 || side2 == side3 || side3 == side1) {
        cout <<"this is isosceles triangle"<<endl ;
     } else cout <<"this is scalane triangle" <<endl;     

    // question number 6
    int maths , physics , chemistry ;
    cout <<"Enter the marks of maths:";
    cin >> maths;
    cout <<"Enter the marks of physics:";
    cin >> physics;
    cout <<"Enter the marks of chemistry:";
    cin >> chemistry;
    if (maths < physics && maths < chemistry){
        cout << maths <<"has the least mask "<<endl;
    }else if (physics < maths && physics < chemistry){
        cout << physics <<" has the least mask"<<endl;
    }else if (chemistry < maths && chemistry <physics){
        cout << chemistry <<" has the least mask" <<endl;
    }else cout <<"all marks are equal";
    
    // question number 7
    int x_asix ,y_axis ;
    cout <<"Enter the value of x axis :";
    cin >> x_asix ;
    cout <<"Enter the value of y axis :";
    cin >>y_axis ;
    if (x_asix == 0 && y_axis == 0){
         cout <<"the point lie on the origin " <<endl;
    } else if (x_asix != 0 && y_axis == 0){
        cout <<"the point lie on the x axis" <<endl;
    } else if (x_asix == 0 && y_axis != 0){
        cout <<"the point lie on the y axis" <<endl;
    }else if (x_asix != 0 && y_axis !=0){
         cout <<"the point lie on the plain" <<endl;
    }
    
    // question number 8
    int x1 , y1 , x2 , y2 , x3 ,y3 , slope1 , slope2 ;
    cout <<"Enter the x1 and y1 :" ;
    cin >> x1 >> y1 ;
    cout <<"Enter the x2 and y2 :" ;
    cin >>x2 >> y2 ;
    cout <<"Enter the x3 anh y3 :" ;
    cin >> x3 >> y3 ;
    slope1 = y2 - y1 / x2 - x1 ;
    slope2 = y3 - y2 / x3 - x2 ;
    if (slope1 == slope2){
        cout <<"the point lie on the stright line "<<endl;
    }else cout <<"the point lie doesnot lie on the stright line"<<endl;
    
    // question number 9
    char ch ;
    int c = (int)ch ;
    cout << "Enter any alphabat digit and special character :";
    cin >> ch ;
    if (ch >= 65 && ch <= 90 || ch >= 97 && ch <=122){
        cout <<"the character is alphabat" << endl;
    } else if (ch >= 48 && ch <= 57){
        cout <<"the character is digit "<<endl ;
    } else if (ch >=32 && ch <= 47 || ch >= 58 && ch <= 64 ||ch >= 91 && ch <=96 || ch >= 123 && ch <= 126){
        cout <<"the character is special character "<<endl ;
    }
    
    // question number 10
    int p = 500 ;
    int q , r ;
    if(p >= 500){
    q = 400 ;
    r = 300 ;
    }
    cout <<"the value of q and r is " << q <<" and " << r ;
    return 0 ; 
}