/*
                   ---------------------------------------------
                   |                CUSTOM EXAMPLE             |
                   ---------------------------------------------
                   |         INPUT:                |   OUTPUT: |
                   ---------------------------------------------
                   |  4 (no. of Testcases)         |           |
                   |  1                            |    1      |
                   |  2                            |    2      |
                   |  5                            |    120    |
                   |  3                            |    6      |
                   ---------------------------------------------
*/
#include <iostream>                             //*******************************************************************************
                                               //******************************** MAIN TRICK ************************************
#include <boost/multiprecision/cpp_int.hpp>   //********* This library is used to actually use a "cpp_int" datatype *************
using namespace boost::multiprecision;       //********** which can add a long integer as long as more than 158digits ***********
                                            //***********************************************************************************
using namespace std;                       //************************************************************************************

int main() {
    int n;
    cin>>n;
	for(int i=0;i<n;i++){
	    int t;
	    cpp_int p=1;                     //********* 'cpp_int' datatype used for var 'p'
	    cin>>t;
	    for(int k=1;k<=t;k++){          //********* functionality of factorial
	        p=p*k;
	    }
	   cout<<p<<endl;
	}
	return 0;
}
