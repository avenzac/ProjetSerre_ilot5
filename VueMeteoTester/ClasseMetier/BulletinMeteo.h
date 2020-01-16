/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BulletinMeteo.h
 * Author: snir2g2
 *
 * Created on 9 janvier 2020, 16:34
 */

#ifndef BULLETINMETEO_H
#define BULLETINMETEO_H

class BulletinMeteo {
protected: 
    int temperature; 
    int VitesseVent; 
    bool alerteVent; 
public:
    BulletinMeteo();
    BulletinMeteo(const BulletinMeteo& orig);
    virtual ~BulletinMeteo();
    int getTemperature(); 
    int getVitesseVent(); 
    int setVitesseVent(); 
    int setTemperature(); 
    int setAlerteVent(bool alerte);
private:
    

};

#endif /* BULLETINMETEO_H */

