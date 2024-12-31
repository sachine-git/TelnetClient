#ifndef CLIENT_H
#define CLIENT_H

#include <QWidget>

namespace Ui {
class Client;
}

class Client : public QWidget
{
Q_OBJECT

public:
explicit Client(QWidget *parent = nullptr);
~Client();

private:
Ui::Client *ui;
quint8 var8;
};

#endif // CLIENT_H
