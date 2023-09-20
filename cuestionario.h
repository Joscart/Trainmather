#ifndef CUESTIONARIO_H
#define CUESTIONARIO_H

#include "pregunta.h"

#include <QObject>
#include <QRandomGenerator>

class Cuestionario : public QObject
{
    Q_OBJECT
public:
    explicit Cuestionario(QObject *parent = nullptr);

    Pregunta *pregunta() const;

    void generarPregunta();

signals:

private:
    int randomIndex(int size);
    Pregunta *m_pregunta = nullptr;
    QStringList m_bancoPreguntas = {
        "Si por un %1 de %2 se recolecta %3",//Numerar,Persona,Numero
        "Por cada %1 se %2 un %3 % a su pago de %4 por repartir volantes",//Persona,Accion,Porcentaje,Numero
        "Dado caso de un %1 de %2 que el primero le falta el %3 de lo que tiene para llegar a %4",//Numerar,Persona,Multiplicador,Numero
        "Las edades de %1 y su %2",//Nombre,Familiar
        "De cuanto es la rebaja de un %1 de %2",//Numerar,Producto
    };
    QStringList m_numeradores = {
      "solo","par","trio","cuarteto","quinteto"
    };
    QStringList m_personas = {
      "Estudiante/s","Trabajador/es"
    };
    QStringList m_acciones = {
        "Descuenta","Agrega"
    };
    QStringList m_familiares = {
        "Padre","Madre","Tia","Tio","Primo","Prima"
    };
    QStringList m_productos = {
      "Tomate/s","Lampara/s","Automovil/es"
    };
    QStringList m_multiplicadores = {
        "doble","triple","cuadruple"
    };
    QStringList m_nombres = {
        "Juan","Maria"
    };
    QStringList m_OracionPreguntas1 = {

    };
    QStringList m_OracionPreguntas2 = {

    };
    QStringList m_OracionPreguntas3 = {

    };
    QStringList m_OracionPreguntas4 = {

    };
    QStringList m_OracionPreguntas5 = {

    };
};

#endif // CUESTIONARIO_H
