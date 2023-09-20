#include "juego.h"
#include "ui_juego.h"

Juego::Juego(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Juego)
{
    ui->setupUi(this);
    m_respuestas.append(ui->rdRespuesta_1);
    m_respuestas.append(ui->rdRespuesta_2);
    m_respuestas.append(ui->rdRespuesta_3);
    m_respuestas.append(ui->rdRespuesta_4);
    ui->WFases->setCurrentIndex(0);
}

Juego::~Juego()
{
    delete ui;
}

void Juego::delay(int mSecs)
{
    QTime dieTime= QTime::currentTime().addMSecs(mSecs);
    while (QTime::currentTime() < dieTime)
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}

void Juego::conteo(int secs)
{
    while(secs>0){
        ui->lblConteo->setText(QString::number(secs));
        delay(1000);
        secs--;
    }
    ui->WFases->setCurrentIndex(2);
    mostrarPregunta();
}

void Juego::mostrarPregunta()
{
    ui->lblPregunta->setText(m_preguntas.pregunta()->preguntar());
    for(int i=0;i<(m_preguntas.pregunta()->respuestas().size());i++){
        m_respuestas.at(i)->setText(m_preguntas.pregunta()->respuestas().at(i));
    }
    numPregunta++;
    ui->lblNumPregunta->setText(QString("Pregunta N# %1").arg(numPregunta));
    for(int i=0;i<(m_respuestas.size());i++){//resetea la seleccion anterior
        m_respuestas.at(i)->setCheckable(false);
        m_respuestas.at(i)->setCheckable(true);
    }
    ui->btnSigPregunta->setDisabled(true);
}

void Juego::setTipo(Dificultad newTipo)
{
    m_tipo = newTipo;
    numPregunta = 0;
    m_preguntas.generarPregunta();
    ui->WFases->setCurrentIndex(0);
}

void Juego::on_btnContinuar_clicked()
{
    ui->WFases->setCurrentIndex(1);
    conteo(3);
}


void Juego::on_btnSigPregunta_clicked()
{
    switch (tipo()) {
    case Dificultad::FACIL:
        if(numPregunta>=20){
            ui->WFases->setCurrentIndex(3);
            return;
        }
        break;
    case Dificultad::MEDIO:
        if(numPregunta>=40){
            ui->WFases->setCurrentIndex(3);
            return;
        }
        break;
    case Dificultad::DIFICIL:
        if(numPregunta>=60){
            ui->WFases->setCurrentIndex(3);
            return;
        }
        break;
    default:
        return;
    }
    m_preguntas.generarPregunta();
    mostrarPregunta();
}


void Juego::on_rdRespuesta_1_toggled(bool checked)
{
    if(checked){
        delay(10);
        ui->btnSigPregunta->setDisabled(false);
    }else{
        ui->btnSigPregunta->setDisabled(true);
    }
}


void Juego::on_rdRespuesta_2_toggled(bool checked)
{
    if(checked){
        delay(10);
        ui->btnSigPregunta->setDisabled(false);
    }else{
        ui->btnSigPregunta->setDisabled(true);
    }
}


void Juego::on_rdRespuesta_3_toggled(bool checked)
{
    if(checked){
        delay(10);
        ui->btnSigPregunta->setDisabled(false);
    }else{
        ui->btnSigPregunta->setDisabled(true);
    }
}


void Juego::on_rdRespuesta_4_toggled(bool checked)
{
    if(checked){
        delay(10);
        ui->btnSigPregunta->setDisabled(false);
    }else{
        ui->btnSigPregunta->setDisabled(true);
    }
}

