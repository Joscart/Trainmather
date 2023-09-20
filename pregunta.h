#ifndef PREGUNTA_H
#define PREGUNTA_H

#include <QObject>

class Pregunta : public QObject
{
    Q_OBJECT
public:
    explicit Pregunta(QObject *parent = nullptr);

    const QString &respuestaCorrecta() const;
    void setRespuestaCorrecta(const QString &newRespuestaCorrecta);

    const QStringList &respuestas() const;

    bool setRespuestas(const QStringList &newRespuestas);

    void setPreguntar(const QString &newPregunta);

    const QString &preguntar() const;

signals:

private:
    QString m_preguntar;
    QStringList m_respuestas;

    QString m_respuestaCorrecta;

    const int RESPUESTASMAX = 4;
};

#endif // PREGUNTA_H
