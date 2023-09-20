#ifndef MENU_H
#define MENU_H

#include <QMainWindow>

namespace Ui {
class Menu;
}

class Menu : public QMainWindow
{
    Q_OBJECT

public:
    explicit Menu(QWidget *parent = nullptr);
    ~Menu();

private slots:
    void on_btnIniciar_clicked();

    void on_btnAjustes_clicked();

    void on_btnAcercaDe_clicked();

    void on_btnAtras_clicked();

    void on_btnAtras_2_clicked();

    void on_btnAtras_3_clicked();

    void on_btnFacil_clicked();

    void on_btnMedio_clicked();

    void on_btnDificil_clicked();

    void restart();

private:
    Ui::Menu *ui;
};

#endif // MENU_H
