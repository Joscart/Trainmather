#include "bienvenida.h"
#include "ui_bienvenida.h"

Bienvenida::Bienvenida(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Bienvenida)
{
    ui->setupUi(this);
}

Bienvenida::~Bienvenida()
{
    delete ui;
}

