#include "cuestionario.h"

Cuestionario::Cuestionario(QObject *parent)
    : QObject{parent}
{
    generarPregunta();
}

Pregunta *Cuestionario::pregunta() const
{
    return m_pregunta;
}

void Cuestionario::generarPregunta()
{
    m_pregunta = new Pregunta;
    m_pregunta->setPreguntar("Inserte Pregunta random aqui");
    QStringList aux;
    aux << "respuesta1" << "respuesta2" << "respuesta3" << "respuesta4";
    m_pregunta->setRespuestas(aux);
    m_pregunta->setRespuestaCorrecta("respuesta3");
}

int Cuestionario::randomIndex(int size)
{
    return QRandomGenerator::global()->bounded(0,size);
}
