#include<iostream>
using namespace std;
class Area{
    private:
    int length;
    int width;
    public:
    void SetSides(int l, int w){
        length = l;
        width =w;
    }
    friend void ShowArea(Area a);
};
void ShowArea(Area b){
    int area =b.length*b.width;
    cout<<"Area is:"<<area<<endl;
}
int main(){
    Area a;
    a.SetSides(5,10);
    ShowArea(a);
    return 0;
}
