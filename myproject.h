#ifndef MYPROJECT_H
#define MYPROJECT_H

#include <QObject>

class MyProject : public QObject
{
  Q_OBJECT
public:
  explicit MyProject(QObject *parent = nullptr);

signals:

public slots:
};

#endif // MYPROJECT_H