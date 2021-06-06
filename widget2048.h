#ifndef WIDGET2048_H
#define WIDGET2048_H

#include <QWidget>

namespace Ui {
class Widget2048;
}

class Widget2048 : public QWidget
{
    Q_OBJECT
    
public:
    explicit Widget2048(QWidget *parent = 0);
    ~Widget2048();
    
private:
    Ui::Widget2048 *ui;
};

#endif // WIDGET2048_H
