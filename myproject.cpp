#include "myproject.h"

#include <QDebug>
MyProject::MyProject(QObject *parent) : QObject(parent)
{
  qDebug() << "debug test";
}
