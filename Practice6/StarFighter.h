/** 
 * @file StarFighter.h
 * @author Casipro Gramo
 *
 * @date Fecha estelar 20160309
 */

#ifndef STARFIGHTER_H
#define STARFIGHTER_H

#include <string>
#include <Pieza.h>

/**
 * @brief
 */
class StarFighter
{
   private:
      static int _numStarFighters; ///< Número de objetos de esta clase instanciados
      int _idSF=0; ///< Identificador único de la nave
      std::string _marca; ///< Marca de la nave (parece que las VW contaminan más)
      std::string _modelo; ///< Modelo de la nava
      int _numPlazas = 1; ///< Número de plazas de la nave
      Pieza *_piezas[MAX_PIEZAS];
      int _numeroPiezas=0;

   public:
      static const int MAX_PIEZAS = 50; 
      
      StarFighter ();
      StarFighter ( std::string marca, std::string modelo );
      StarFighter ( const StarFighter& orig );
      virtual ~StarFighter ( );
      StarFighter& setNumPlazas ( int numPlazas );
      int getNumPlazas ( ) const;
      StarFighter& setModelo ( std::string modelo );
      std::string getModelo ( ) const;
      StarFighter& setMarca ( std::string marca );
      std::string getMarca ( ) const;
      int getIdSF ( ) const;
      std::string toCSV () const;
      StarFighter& operator= ( const StarFighter& otro );
      void fromCSV ( std::string& datos );
      
      //Añadir pieza
      void addPieza(string nombre, int peso, string descripcion);
      
      //Eliminar pieza
      void removePieza(string nombre);
};

#endif /* STARFIGHTER_H */
