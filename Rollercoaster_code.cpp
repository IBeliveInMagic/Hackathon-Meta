/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    
    int x , last , value = 0, maior = 0;
    
    while(cin >> x){
        
        if( value == 0 ){
            
            value = 10;
            
        }else{
            
            if( x > last ){
                
                value += 10;
                
            }else{
                
                value = 10;
            }
        }
        
        if( value > maior ){
            maior = value;
        }
        
        last = x;
        
    }
    
    cout << maior << endl;
    
    return 0;
}
