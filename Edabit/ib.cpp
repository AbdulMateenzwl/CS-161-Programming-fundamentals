#include <iostream>
using namespace std;
void display(int *pr){
    for(int i=0; i<4; i++){
        //cout<<*(pr+i);
        cout<<*pr;
        *pr++;
    }
}
int main()
{
    system("cls");
//   struct sd{
//       string name;
//   } mateen, ibrahim;
//   mateen.name;
//   ibrahim.name;
    int arr[2][2]={{1,2,},{3,4}};
    // int array[4]={4,3,4,1};
    // display(array);
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}




