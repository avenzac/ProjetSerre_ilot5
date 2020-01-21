/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   VuePrincipale.h
 * Author: snir2g2
 *
 * Created on 8 janvier 2020, 17:36
 */

#ifndef _VUEPRINCIPALE_H
#define _VUEPRINCIPALE_H

#include "ui_VuePrincipale.h"
#include "../VueMeteoTester/VueMeteo.h"
#include "../VueSerreTesteur/VueSerre.h"


class VuePrincipale : public QWidget {
    Q_OBJECT
public:
    VuePrincipale();
    ~VuePrincipale();
    void mettreAJour();
    
private:
    Ui::VuePrincipale widget;
    VueMeteo* laMeteo;
    VueSerre* laSerre;
    
};

#endif /* _VUEPRINCIPALE_H */
