#include "player.h"
#include <QGraphicsScene>
#include <QObject>
#include <QGraphicsItem>
#include <QDebug>

Player::Player(QGraphicsItem * parent): QGraphicsRectItem(parent)
{

}

void Player::keyPressEvent(QKeyEvent *event)
{
    //mensagem informando que o correu uso de teclado
    //qDebug() << "Key press detected.";
    if(event->key()==Qt::Key_Left)
    {
        //limiteparanãosairdatela
        if(pos().x()>0)
            setPos(x()-10,y());
    }
    else if(event->key()==Qt::Key_Right)
    {
        //limiteparanãosairdatela
        if(pos().x()+100<800)
            setPos(x()+10,y());
    }
    else if(event->key()==Qt::Key_Up)
    {
        setPos(x(),y()-10);
    }
    else if(event->key()==Qt::Key_Down){
        setPos(x(),y()+10);
    }

}
