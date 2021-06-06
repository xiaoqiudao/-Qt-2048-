#include "widget2048.h"
#include "ui_widget2048.h"

Widget2048::Widget2048(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget2048)
{
    ui->setupUi(this);
}

Widget2048::~Widget2048()
{
    delete ui;
}
