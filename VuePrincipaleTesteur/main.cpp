/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: snir2g2
 *
 * Created on 19 décembre 2019, 16:27
 */

#include <QApplication>

#include "VuePrincipale.h"

int main(int argc, char *argv[]) {
   
    QApplication app(argc, argv);
    VuePrincipale* vuePrincipale = new VuePrincipale();
    vuePrincipale->show();
    

    // create and show your widgets here

    return app.exec();
}
