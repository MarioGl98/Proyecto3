#ifndef RESERVA_H_INCLUDED
#define RESERVA_H_INCLUDED
#include <iostream>
using namespace std;
class Reserva{
public:
Reserva();
Reserva(string,int, Hora, int);
Hora calculaHoraFinReservacion();
string getClaveServicio();
void setClaveServicio(string);
int getIDCliente();
void setIdCliente();
Hora getHoraInicio();
void setHoraInicio(Hora);
int getDuracion();
void setDuracion();
private:
string claveServicio;
int idCliente;
Hora horaInicia;
int duracion;
};
Reserva::Reserva(){
claveServicio="S/C";
idCliente=0;
Hora(0,0);
duracion=0;
}

Reserva::Reserva(string cveServ,int idC, Hora hrI,int dur){
claveServicio=cveServ;
idCliente=idC;
horaInicia=hrI;
duracion=dur;
}
Hora Reserva::calculaHoraFinReservacion(){
return horaInicia+duracion;
}
string Reserva::getClaveServicio(){
return claveServicio;
}
void Reserva::setClaveServicio(string cveServ){
claveServicio=cveServ;
}
int Reserva::getIdCliente(){
return claveServicio;
}
void Reserva::setIdCliente(int idC){
idCliente=idC;
}
int Reserva::getDuracion(){
return duracion;
}
void Reserva::setDuracion(int dur){
duracion=dur;
}


#endif // RESERVA_H_INCLUDED
