# Proyecto3


#ifndef SERVICIO_H_
#define SERVICIO_H_


class servicio
 {
 public servicio();
 servicio(string, int, char)

 int calcCosto();

 void Muestra();

 virtual void clave();
 virtual void tiempoMax();
 virtual void tipo();

 protected:

 string sClave;
 int sTiempoMax;
 char sTipo;

};

servicio::servicio(string sClav,int sTiempMax,char sTip)
{
  sClave= sClav;
  sTiempoMax= sTiempMax;
  sTipo= sTip;
}

int servicio::calcCosto()
{
  double calCost= sTiempoMax;
}


void servicio::muestra()
{
  cout<<"El Costo total es: "<< <<" y Tiempo que usted tiene es: "<< 
}

#endif
