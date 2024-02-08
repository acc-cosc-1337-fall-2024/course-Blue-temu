#include<climits>
#include<iostream>

using std::cout;

int main()
{
    //OverFlow example
    auto max_int = INT_MAX;
    cout<<"Max_int: "<<max_int<<"\n";

    max_int = max_int + 1;
    cout<<"Max int: "<<max_int<<"\n";


    return 0;
}