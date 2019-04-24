#ifndef TESTOBJ_H
#define TESTOBJ_H

#include <QObject>

class testobj : public QObject
{
    Q_OBJECT
public:
    explicit testobj(QObject *parent = 0);
    void testsend();

signals:
    void sig_test();

public slots:
    void slot_test();
};

#endif // TESTOBJ_H
