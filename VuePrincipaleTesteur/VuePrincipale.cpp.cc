/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   VuePrincipale.cpp
 * Author: snir2g2
 *
 * Created on 21 janvier 2020, 16:17
 */
#include "VuePrincipale.h"

VuePrincipale::VuePrincipale() {
    widget.setupUi(this);
    laVueMeteo = new VueMeteo();
    laVueSerre = new VueSerre();
    widget.meteo.addWidget(laVueMeteo);
    widget.serre.addWidget(laVueSerre);
}

VuePrincipale::~VuePrincipale() {
}