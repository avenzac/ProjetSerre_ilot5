/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newForm.h
 * Author: snir2g2
 *
 * Created on 19 décembre 2019, 16:03
 */

#ifndef _NEWFORM_H
#define _NEWFORM_H

#include "ui_newForm.h"

class newForm : public QDialog {
    Q_OBJECT
public:
    newForm();
    virtual ~newForm();
private:
    Ui::newForm widget;
};

#endif /* _NEWFORM_H */
