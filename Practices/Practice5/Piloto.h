/** 
 * @file Piloto.h
 * @author Yoyapro Gramo
 *
 * @date Fecha estelar 20160309
 */

#ifndef PILOTO_H
#define PILOTO_H

#include <string>
#include "StarFighter.h"
#include "Droide.h"
#include "Informe.h"

/**
 * @brief
 */
class Piloto
{
   private:
      static int _numPilotos; ///< Número de objetos Piloto que han sido instanciados
      int _idP = 0;                       ///< Identificador único del Piloto
      std::string _nombre;                ///< Nombre del Piloto
      std::string _nacionalidad;          ///< Nacionalidad del Piloto
      int _numMisiones = 0;        ///< Número de misiones en que ha participado
      long _fechaUltimaMision = 0;        ///< Fecha estelar de su última misión
      std::string _incidenciasUltimaMision; ///< Incidencias reportadas por el piloto en su última misión.
      StarFighter *_nave;
      Droide *_auxiliar;
      
   public:
      Piloto ( );
      Piloto ( std::string nombre );
      Piloto ( const Piloto& orig );
      virtual ~Piloto ( );
      
      //Setter
      void setNumMisiones ( int numMisiones );
      void setNacionalidad ( std::string nacionalidad );
      void setNombre ( std::string nombre );
      void setIncidenciasUltimaMision ( std::string incidenciasUltimaMision );
      void setFechaUltimaMision ( long fechaUltimaMision );
      void setNave (StarFighter *nave);
      void setAuxiliar (Droide *auxiliar);
      
      //Getter
      int getNumMisiones ( ) const;
      std::string getNacionalidad ( ) const;
      std::string getNombre ( ) const;
      int getIdP ( ) const;
      std::string getIncidenciasUltimaMision ( ) const;
      long getFechaUltimaMision ( ) const;
      StarFighter* getNave () const;
      Droide* getAuxiliar () const;      
     
      //Methods
      std::string toCSV () const;
      Piloto& operator= ( const Piloto& otro );
      Informe *generarInforme();
      void  fromCSV(string csv);
      
};

#endif /* PILOTO_H */

