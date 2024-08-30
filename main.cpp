#include <iostream>
#include <conio.h>
using namespace std;
#define H 20
#define W 20
class Fence{
    public:
    char fence[H][W];
    Fence(){
        for(int i=0;i<H;i++){
            fence[i][0]=fence[i][H-1]='*';

        }
        for(int i=1;i<W-1;i++){
            for(int j=1;j<H-1;j++){
                fence[i][j]=' ';
            }

        }
        for(int i=0;i<W;i++){
            fence[0][i]=fence[W-1][i]='*';
        }

        }
    void print() {
        for (int i = 0; i < W ; i++) {
            for (int j = 0; j < H ; j++) {
                cout << fence[i][j]<<" ";
            }
            cout<<endl;

        }
    }
    };




int main() {
    char dec=getch();
    switch(dec){
        case 'a':
            cout<<"a"<<endl;
            break;
        case 'w':
            cout<<"W";
            break;
        case 'd':
            cout<<"d";
            break;

    }
    Fence f;
    cout<<"\t"<<endl;
    f.print();
    system("pause");
    srand((unsigned)time(NULL));

    cout<<rand()<<endl;
    cout<<time<<endl;
    cout<<time<<endl;
    cout<<time<<endl;
    return 0;
}