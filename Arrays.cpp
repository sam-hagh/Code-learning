#include <iostream>
using namespace std;

int main()
{
int arr[]={11,35,62,555,989};
int sum=0;
int score=5;
int *ad_of_score; // asterisk to declare a pointer


for (int x=0; x<5; x++) {
sum+=arr[x];
//cout << arr[x] <<endl;
ad_of_score = & score; // ampersand address of "score"

}
cout << & score << endl; // ampersand address of "score"
cout << * ad_of_score << endl; // De-reference operator

//cout << sum <<endl;

return 0;
}
// 
// samans-Air-2:~ saman$ cd Documents/Code\ learning/
// samans-Air-2:Code learning saman$ g++ Arrays.cpp -o array_3
// samans-Air-2:Code learning saman$ ./array_3
//  
//