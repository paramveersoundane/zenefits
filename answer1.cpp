#include <iostream>
#include <string>
using namespace std;



int main() {
    int test_case,i,j=0;
    string tree;
    cin>>test_case;
    for (i=0;i<test_case;i++) {
       cin >> tree ;
       int counter=0;
       j=0;
 while(1){
        if(tree[j]== '{'){
            counter++;
        }
        
        if(tree[j] == '}'){
            break;
        }
       j=j+3;
    }    
    cout>>counter;
     
    }
	return 0;
}
