#include<bits/stdc++.h>
using namespace std;
class imaginary_number{
    int real;
    int imag;
    public:
    imaginary_number(){
        real=0;
        imag=0;
    }
    void setreal(int n){
        real=n;
    }
    int getreal(){
        return real;
    }
    void setimg(int n){
        imag=n;
    }
    int getimg(){
        return imag;
    }
    void shownumber(){
        if(imag>0)
        {
            cout<<real<<" "<<"+"<<" "<<imag<<"i"<<endl;
        }
        else 
        {
            cout<<real<<" "<<imag<<"i"<<endl;
        }
        
        
    }
    imaginary_number adder(imaginary_number c){   //and in this we have set the imaginary number as the return type 
                                                  // as we are returning an object for the same (important concept)
        imaginary_number d;
        d.setreal(c.getreal()+real);
        d.setimg(c.getimg()+imag);
        return d;       //here we have a object being returned 
    }
    imaginary_number subtarct(imaginary_number c){
        imaginary_number d;
        d.setreal(c.getreal()-real);
        d.setimg(c.getimg()-imag);
        return d;
        
    }
    imaginary_number multiply(imaginary_number c){
        imaginary_number d;
        d.setreal(c.getreal()*real);
        d.setimg(c.getimg()*imag);
        return d;
    }



};
int main()
{   imaginary_number A;
    A.setreal(10);
    A.setimg(12);
    imaginary_number B;
    B.setreal(21);
    B.setimg(4);
    imaginary_number C;
    C=A.adder(B);
    C.shownumber();
    imaginary_number D;   //here we have different obejcts all initaililzed and which are being returned from the function
    D=A.subtarct(B);
    D.shownumber();
    imaginary_number E;
    E=A.multiply(B);
    E.shownumber();



    
    return 0;
}
