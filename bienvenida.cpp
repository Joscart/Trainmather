#include "bienvenida.h"
#include "ui_bienvenida.h"

Bienvenida::Bienvenida(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Bienvenida)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
}

Bienvenida::~Bienvenida()
{
    delete ui;
}

