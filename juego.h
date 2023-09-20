#ifndef JUEGO_H
#define JUEGO_H

#include "cuestionario.h"
#include "pregunta.h"

#include <QWidget>
#include <QTime>
#include <QRadioButton>

namespace Ui {
class Juego;
}

class Juego : public QWidget
{
    Q_OBJECT

public:
    explicit Juego(QWidget *parent = nullptr);
    ~Juego();

    enum class Dificultad{
        FACIL,
        MEDIO,
        DIFICIL
    };

    Dificultad tipo(){
        return m_tipo;
    }
    void setTipo(Dificultad newTipo);

private slots:
    void on_btnContinuar_clicked();

    void on_btnSigPregunta_clicked();

    void on_rdRespuesta_1_toggled(bool checked);

    void on_rdRespuesta_2_toggled(bool checked);

    void on_rdRespuesta_3_toggled(bool checked);

    void on_rdRespuesta_4_toggled(bool checked);

signals:
    void finJuego();

private:
    Ui::Juego *ui;
    void delay(int mSecs);
    void conteo(int secs);
    void mostrarPregunta();
    int numPregunta = -1;
    Cuestionario m_preguntas;
    Dificultad m_tipo;
    QList<QRadioButton*> m_respuestas;
};

#endif // JUEGO_H
