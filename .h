#ifndef __DISPLAY7_H__
#define __DISPLAY7_H__

//.:・°☆.。.:・°☆.。.:・°☆.。.:・°☆*:.・°☆.。.:・°☆.。.:・°☆.。.:・°☆*:.
//Librerias
#include <Arduino.h>
#include <stdint.h>

//.:・°☆.。.:・°☆.。.:・°☆.。.:・°☆*:.・°☆.。.:・°☆.。.:・°☆.。.:・°☆*:.
//Definicion de pines
#define dA 26
#define dB 25
#define dC 19
#define dD 18
#define dE 4
#define dF 32
#define dG 33
#define dP 5

//.:・°☆.。.:・°☆.。.:・°☆.。.:・°☆*:.・°☆.。.:・°☆.。.:・°☆.。.:・°☆*:.
//Prototipos de funciones
//Funcion configuración  display 7 segmentos
void configDisplay7(void);

//Desplegar número en display 7 segmentos
void desplegarNumero(uint8_t numero);

//Desplegar punto (1 enciende)
void desplegarPunto(uint8_t punto);

#endif // __DISPLAY7_H__
