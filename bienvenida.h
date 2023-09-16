#ifndef BIENVENIDA_H
#define BIENVENIDA_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Bienvenida; }
QT_END_NAMESPACE

class Bienvenida : public QWidget
{
    Q_OBJECT

public:
    Bienvenida(QWidget *parent = nullptr);
    ~Bienvenida();

private:
    Ui::Bienvenida *ui;
};
#endif // BIENVENIDA_H
