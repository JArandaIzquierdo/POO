/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Mudulo.h
 * Author: javierarandaizquierdo
 *
 * Created on 28 de febrero de 2019, 13:19
 */

#ifndef MUDULO_H
#define MUDULO_H

#include "Temazo.h"
#include "Garito.h"
#include "Fecha.h"

namespace Modulo {
    
    void showTemazo (Temazo temazo);
    void showGarito (Garito garito);
    void showFecha (Fecha& fecha);
    void modifyGarito (Garito &garito);
    
}
#endif /* MUDULO_H */
