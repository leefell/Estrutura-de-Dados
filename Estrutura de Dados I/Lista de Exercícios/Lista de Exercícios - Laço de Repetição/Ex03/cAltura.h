/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cAltura.h
 * Author: leele
 *
 * Created on 18 de setembro de 2023, 13:37
 */

#ifndef CALTURA_H
#define CALTURA_H

class cAltura {
public:
    cAltura();
    cAltura(const cAltura& orig);
    virtual ~cAltura();
    
    void insert();
    float verificarMaior(float altura, float maior);
    float verificarMenor(float altura, float menor);
    void ver(float maior, float menor);
    
    
private:

};

#endif /* CALTURA_H */

