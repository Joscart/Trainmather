#include "pregunta.h"

Pregunta::Pregunta(QObject *parent)
    : QObject{parent}
{

}

const QString &Pregunta::respuestaCorrecta() const
{
    return m_respuestaCorrecta;
}

void Pregunta::setRespuestaCorrecta(const QString &newRespuestaCorrecta)
{
    m_respuestaCorrecta = newRespuestaCorrecta;
}

const QStringList &Pregunta::respuestas() const
{
    return m_respuestas;
}

bool Pregunta::setRespuestas(const QStringList &newRespuestas)
{
    if(newRespuestas.size()>RESPUESTASMAX)
        return false;

    m_respuestas = newRespuestas;
    return true;
}

void Pregunta::setPreguntar(const QString &newPregunta)
{
    m_preguntar = newPregunta;
}

const QString &Pregunta::preguntar() const
{
    return m_preguntar;
}
