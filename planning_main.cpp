# include <iostream>
# include "process.h"

using std::cout,std::endl;

int main()
{
    cout<<"planning started"<<endl;
    Process pro;
    pro.planProcess();
    cout<<"planning finished"<<endl;
    
    return 0;
}