#include "menu.h"
#include "ui_menu.h"

Menu::Menu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Menu)
{
    ui->setupUi(this);
    ui->WMenus->setCurrentIndex(0);
    connect(ui->menuJuego,SIGNAL(finJuego()),this,SLOT(restart()));
}

Menu::~Menu()
{
    delete ui;
}

void Menu::on_btnIniciar_clicked()
{
    ui->WMenus->setCurrentIndex(1);
}


void Menu::on_btnAjustes_clicked()
{
    ui->WMenus->setCurrentIndex(2);
}


void Menu::on_btnAcercaDe_clicked()
{
    ui->WMenus->setCurrentIndex(3);
}


void Menu::on_btnAtras_clicked()
{
    ui->WMenus->setCurrentIndex(0);
}


void Menu::on_btnAtras_2_clicked()
{
    ui->WMenus->setCurrentIndex(0);
}


void Menu::on_btnAtras_3_clicked()
{
    ui->WMenus->setCurrentIndex(0);
}


void Menu::on_btnFacil_clicked()
{
    ui->WMenus->setCurrentIndex(4);
    ui->menuJuego->setTipo(Juego::Dificultad::FACIL);
}


void Menu::on_btnMedio_clicked()
{
    ui->WMenus->setCurrentIndex(4);
    ui->menuJuego->setTipo(Juego::Dificultad::MEDIO);
}


void Menu::on_btnDificil_clicked()
{
    ui->WMenus->setCurrentIndex(4);
    ui->menuJuego->setTipo(Juego::Dificultad::DIFICIL);
}

void Menu::restart()
{
    ui->WMenus->setCurrentIndex(0);
}

