
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