#ifndef CONFIG_H
#define CONFIG_H


//Clase config
class Config
{
    //atributos publicos
    public:

        //Constructor config
        Config(int filasTablero, int columnasTablero, int minasTablero, bool modoDesarrolladorTablero, int vidasTablero);

        //Obtenemos filas del tablero
        int getfilasTablero();

        //se da las filas del tablero
        int setfilasTablero(int filasTablero);

        //Obtenemos las columnas del tablero
        int getcolumnasTablero();

        //se da las columnas del tablero
        int setcolumnasTablero(int columnasTablero);

        //Obtenemos las minas del tablero
        int getminasTablero();

        //se da las minas del tablero
        int setminasTablero(int minasTablero);

        //Obtenemos el desarrollador del tablero
        bool getmodoDesarrolladorTablero();

        //se da el modo desarrollador del tablero
        bool setmodoDesarrolladorTablero(bool modoDesarrolladorTablero);

        //Obtenemos las vidas
        int getvidasTablero();

        //se da las vidas del tablero
        int setvidasTablero(int vidasTablero);

        //mostrar el menu de la configuracion
        void menuConfiguracion();


    //atributos protegidos
    protected:


    //atributos privados
    private:

        int filasTablero;
        int columnasTablero;
        int minasTablero;
        bool modoDesarrolladorTablero;
        int vidasTablero;
};

#endif
