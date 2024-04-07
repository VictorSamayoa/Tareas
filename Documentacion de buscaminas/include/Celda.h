//creacion del los archivos encabezado y definicion de estos
#ifndef CELDA_H
#define CELDA_H

//Clase Celda
class Celda
{
       //Creacion de los atributos publico
    public:
        //Constructor de celda
        Celda();


        //Constructor de la clase celda
        Celda(int coordenadaX, int coordenadaY, bool estadoMina);


        //cordenada X
        int setCoordenadaX(int coordenadaX);


        //Obtener cordenadas X
        int getCoordenadaX();


        //cordenada Y
        int setCoordenadaY(int coordenadaY);

        //Obtenemos una cordenadaY
        int getCoordenadaY();


        //se agrega mina en la celda
        bool setMina(bool estadoMina);


        //Obtenemos la mina
        bool getMina();


        //se manda que se descubra la mina
        bool setMinaDescubierta(bool minaDescubierta);


        //Obtenemos la mina descubierta
        bool getMinaDescubierta();


        //Funcion para imprimir la informacion de la celda
        void imprimirCelda();


    //atributos protegidos
    protected:

    //atributos privados
    private:
        int coordenadaX, coordenadaY;
        bool mina, minaDescubierta;
};

#endif // finalisa la creacion de celda.h
