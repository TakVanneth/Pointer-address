



#include<iostream>
#include<iomanip>
using namespace std;
const double PI = 3.1416;
 int main(){

    double radius;
    double *radiusPtr;
    cout << fixed << showpoint << setprecision(2);
    radius = 2.5;
    radiusPtr = &radius;
    cout <<"Radius = "<<radius<<",area= "<< PI*(*radiusPtr)*(*radiusPtr) <<endl;
    cout <<"Enter the radius: ";
    cin >> radius;
    cout << endl;
    cout <<"Radius=" << radius <<",area" <<PI * radius*radius<<endl;
    cout << "Radius= "<<*radiusPtr<<",area="<<PI*(*radiusPtr)*(*radiusPtr) << endl <<endl;
    cout <<"address of RadiusPtr: "<<&radiusPtr<<endl;
    cout <<"Value stored in RadiusPtr= " << radiusPtr <<endl;
    cout <<"Address of Radius: " <<&radius<<endl;
    cout <<"Value stored in Radius= " << radius <<endl;

    // float S, Pi, R2, R;
    // cout <<"Input R:";
    // cin >> R;
    // Pi = 3.1416;
    // R2 = R * R;
    // S = Pi * R2;
    // cout << fixed << showpoint << setprecision(2);
    // cout <<"S:"<<S<<endl;
    // float *p;
    // p = &S;
    // cout <<"Address of S:"<< &S <<endl;

    return 0;
}










// int var=20;
// int *p;
// p = &var;
// cout <<"Address of p : "<< p << endl;
// cout <<"Value of *p : "<< *p << endl;
// cout <<"var : " << &var << endl;
    // float S, Pi, R2, R;
    // cout <<"Input R:";
    // cin >> R;
    // Pi = 3.1416;
    // R2 = R * R;
    // S = Pi * R2;
    // cout << fixed << showpoint << setprecision(2);
    // cout <<"S:"<<S<<endl;
    // float *p;
    // p = &S;
    // cout <<"Address of S:"<< &S <<endl;
