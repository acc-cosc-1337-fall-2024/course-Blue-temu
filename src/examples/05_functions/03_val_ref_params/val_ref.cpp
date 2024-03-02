#include "val_ref.h"

void value_params(int num)
{
    num = 20;
}

void reference_params(int& num)
{
    num = 10;
    int rate = federal_tax_rate;
}

void const_reference_param(const int& num)
{
    //num = 90;statement shows that we can protect variable data by using const which means read only
}

void access_global_variable()
{
    //federal_tax_rate = .5; can't modify  it it's const (read only)
    //more code that uses it 
    int rate = 1;//local function variable

    if(true)//same holds for switch, while, for loop
    {
        rate = 10;    
    }

    rate = 5;
}