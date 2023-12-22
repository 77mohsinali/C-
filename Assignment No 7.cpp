#include <iostream>

using namespace std;

class maths {
    private:
    int length =20;
    int breadth =20;
    int height =20;
    
    public:
    void area(){
        int area=length*breadth;
        cout<<"Area :"<<area<<endl;
    }
    
    void volume(){
        int volume=length*breadth*height;
        cout<<"Volume :"<<volume<<endl;
     
    }
};


int main()
{
   maths objmaths;
   objmaths.area();
   objmaths.volume();
   
   
   
   
   
   
   
   
}
