#ifndef HORA_H_INCLUDED
#define HORA_H_INCLUDED
#include <iostream>
using namespace std;

class Hora{
private:
    int hh;
    int mm;
public:
    Hora();
    Hora(int,int);
    int getHora();
    int getMinutos();
    void setHora(int);
    void setMinutos(int);
    Hora operator+(Hora);
    Hora operator>=(Hora);
    Hora operator<=(Hora);
    Hora operator==(Hora);
};
Hora::Hora(){
hh=0;
mm=0;
}
Hora::Hora(int hour, int mins){
hh=hour;
mm=mins;
}
 Hora::getHora(){
return hh;
}
int Hora::getMinutos(){
return mm;
}
void Hora::setHora(int hour){
hh=hour;
}
void Hora::setMinutos(int mins){
mm=mins;
}
Hora Hora::operator+(Hora h){
    int Hour=0;
    if(Hora<24){
        Hour=hh+h.hh;
    }
    int Min=0;
    if(Min<=59){
        Min=mm+h.mm;
    }
}
bool Hora::operator>=(Hora h){
 if(h.hh>=hh&&h.mm>=mm){
    return false;
 }
}
bool Hora::operator<=(Hora h){
if(h.hh<=hh&&h.mm<=mm){
    return true;
}
}
#endif // HORA_H_INCLUDED
