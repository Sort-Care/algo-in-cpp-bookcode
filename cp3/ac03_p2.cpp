#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

typedef int Number;

Number randNumber(){
    return rand();
}

/* calculate the average and  */

int main(int argc, char *argv[])
{
    int N = atoi(argv[1]);
    float m1 = 0.0, m2 = 0.0;

    for (int i = 0; i<N; i++) {
        Number x = randNumber();
        cout <<"the "<< i << " random number"<< x <<endl;
        m1 += ((float)x)/N;
        m2 += ((float) x*x)/N;
    }
    cout<<"	Avg.: "<< m1 << endl;
    cout << "Std. dev.: "<< sqrt(m2-m1*m1) << endl;
    // int a;
    
    return 0;
}
