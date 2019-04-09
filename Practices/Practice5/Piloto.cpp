/** 
 * @file Piloto.cpp
 * @author Yoyapro Gramo
 * 
 * @date Fecha estelar 20160309
 */

#include <stdexcept>
#include <sstream>

#include "Piloto.h"

using std::string;

int Piloto::_numPilotos = 0;

Piloto::Piloto ( ): Piloto ( "" )
{ 
    _numPilotos++;
    _idP = _numPilotos;
}

Piloto::Piloto ( string nombre ): _nombre (nombre)
{
   _numPilotos++;
   _idP = _numPilotos;
}

Piloto::Piloto ( const Piloto& orig ): _nombre(orig._nombre),
                                       _nacionalidad(orig._nacionalidad),
                                       _numMisiones(orig._numMisiones),
                                       _fechaUltimaMision(orig._fechaUltimaMision),
                                       _incidenciasUltimaMision(orig._incidenciasUltimaMision)
{
   _numPilotos++;
   _idP = _numPilotos;
}

Piloto::~Piloto ( )
{ }

/**
 * @todo Aquí hay que añadir la comprobación del parámetro y lanzar la excepción
 *       correspondiente. El número de misiones no puede ser <= 0
 */
Piloto& Piloto::setNumMisiones ( int numMisiones )
{
    if(numMisiones == 0){
        throw std::invalid_argument ("[Piloto::setNumMisiones]:"
                                     "El numero de moisiones no puedes ser menor que 0");
    }
    this->_numMisiones = numMisiones;
    
    return (*this);
}

int Piloto::getNumMisiones ( ) const
{
   return _numMisiones;
}

Piloto& Piloto::setNacionalidad ( string nacionalidad )
{
   this->_nacionalidad = nacionalidad;
   
   return (*this);
}

string Piloto::getNacionalidad ( ) const
{
   return _nacionalidad;
}

Piloto& Piloto::setNombre ( string nombre )
{
   this->_nombre = nombre;
   
   return (*this);
}

string Piloto::getNombre ( ) const
{
   return _nombre;
}

int Piloto::getIdP ( ) const
{
   return _idP;
}

/**
 * @todo Si el número de misiones del piloto es 0, no puede tener incidencias;
 *       haz esta comprobación y lanza la excepción correspondiente
 */
Piloto& Piloto::setIncidenciasUltimaMision ( string incidenciasUltimaMision )
{
    if(_numMisiones == 0){
        throw std::invalid_argument("[Piloto::setIncidenciasUltimaMision]:"
                "El numero de misiones tiene que ser mayor que 0 para tener"
                "alguna incidencia");
    }
    this->_incidenciasUltimaMision = incidenciasUltimaMision;
    
    return (*this);
}

string Piloto::getIncidenciasUltimaMision ( ) const
{
    
    return _incidenciasUltimaMision;
}

/**
 * @todo Si el número de misiones del piloto es 0, no puede tener fecha de
 *       última misión; haz esta comprobación y lanza la excepción
 *       correspondiente
 */
Piloto& Piloto::setFechaUltimaMision ( long fechaUltimaMision )
{
    if(_numMisiones == 0){
        throw std::invalid_argument ("[Piloto::setFechaUltimaMision: ]"
                "El numero de misiones tiene que ser mayor que 0 para tener una "
                "fecha de ultima mision");
    }
    this->_fechaUltimaMision = fechaUltimaMision;
    
    return (*this);
}

/**
 * @todo Si el número de misiones del piloto es 0, no puede tener fecha de
 *       última misión; haz esta comprobación y lanza la excepción
 *       correspondiente
 */
long Piloto::getFechaUltimaMision ( ) const
{
   return _fechaUltimaMision;
}

Piloto& Piloto::setNave (StarFighter *nave){
   _nave = nave;
   return (*this);
}

StarFighter* Piloto::getNave() const {
    return this->_nave;
}

Piloto& Piloto::setAuxiliar(Droide *auxiliar) {
    _auxiliar = auxiliar;
    
    return (*this);
}

Droide* Piloto::getAuxiliar() const {
    return _auxiliar;
}




string Piloto::toCSV () const
{
   std::stringstream aux;

   aux << _nombre << " ; "
       << _nacionalidad << " ; "
       << _numMisiones << " ; "
       << _fechaUltimaMision << " ; "
       << _incidenciasUltimaMision;

   return ( aux.str () );
}

Piloto& Piloto::operator = ( const Piloto& otro )
{
   if ( this != &otro )
   {
      _nombre = otro._nombre;
      _nacionalidad = otro._nacionalidad;
      _numMisiones = otro._numMisiones;
      _fechaUltimaMision = otro._fechaUltimaMision;
      _incidenciasUltimaMision = otro._incidenciasUltimaMision;
   }
   
   return ( *this );
}

Informe* Piloto::generarInforme() {
    Informe *nuevoInforme;
    nuevoInforme->setIdPiloto(_idP);
    
    std::stringstream ss;
    string resultado;
    
    ss <<   _nave->getIdSF() << "; "<< 
            _auxiliar->getIdD() << "; "<<
            _incidenciasUltimaMision;
    
    resultado = ss.str();
    
    nuevoInforme->setDatosInforme(resultado);
    
    return nuevoInforme;
}

void Piloto::fromCSV(string inputStr) {
    
    std::stringstream ss;
    ss.str(inputStr);
    
    getline(ss,_nombre,';');
    getline(ss,_nacionalidad,';');
    
    ss >> _numMisiones;
    ss.ignore(1);
    
    ss >> _fechaUltimaMision;
    ss.ignore(1);
    
    getline(ss,_incidenciasUltimaMision);
  
            
}

