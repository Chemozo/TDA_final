/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Chemoso
 *
 * Created on 28 November 2016, 6:05 PM
 */

#include <stdio.h>
#include <stdlib.h>

#define VALOR 1000
/*
 * 
 */
int calculaPlan();
int calculaAnalisis();
int calculaDiseno();
int calculaImplementacion();
int calculaDepuracion();




int main(int argc, char** argv) {
    float plan, ana, dis, imp, dep;
    plan = calculaPlan();
    ana = calculaAnalisis();
    dis = calculaDiseno();
    imp = calculaImplementacion();
    dep = calculaDepuracion();
    printf("%.2f, %.2f, %.2f, %.2f, %.2f",plan,ana,dis,imp,dep);
    
    return (EXIT_SUCCESS);
}

int calculaPlan()
{
    return(VALOR*.15);
}
int calculaAnalisis()
{
    return(VALOR*.10);
}
int calculaDiseno()
{
    return(VALOR*.20);
}
int calculaImplementacion()
{
    return(VALOR*.30);
}
int calculaDepuracion()
{
    return(VALOR*.25);
}