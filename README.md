# CPP-tricky

|  <h1>[Long Factorial](https://github.com/ArshdeepSahni/CPP-tricky/blob/master/LongFactorial.cpp)</h1> |<h1>[CODE](https://github.com/ArshdeepSahni/CPP-tricky/blob/master/LongFactorial.cpp)</h1>|
|---|---|
|<table style="width:max-content"> <tbody> <tr> <td colspan="2"> <table>`CUSTOM EXAMPLES`</table></td> <tr> <tr>  <td> `INPUT` </td>  <td>`OUTPUT`</td>  </tr> <tr>  <td> 4 </td>  <td> </td>  </tr>  <tr>  <td> 1 </td>  <td> 1 </td>  </tr>  <tr>  <td> 2 </td>  <td> 2 </td>  </tr>  <tr>  <td> 5 </td>  <td> 120 </td>  </tr> <tr>  <td> 3 </td>  <td> 6 </td>  </tr>  </tbody>  </table> | ```#include <iostream>```<br>```#include <boost/multiprecision/cpp_int.hpp>```<br>```using namespace boost::multiprecision;```<br>```using namespace std;```<br>```int main()```<br>```{```<br>```int n;```<br>```cin>>n;```<br>```for(int i=0;i<n;i++)```<br>```{```<br>```int t;```<br>```cpp_int p=1;```<br>```cin>>t;```<br>```for(int k=1;k<=t;k++)```<br>```{```<br>```p=p*k;```<br>```}```<br>```cout<<p<<endl;```<br>```}```<br>```return 0;```<br>```}```|

