#ifndef ABOUT_H
#define ABOUT_H

#include <QWidget>

namespace Ui {
class about;
}

class about : public QWidget
{
    Q_OBJECT
    
public:
    explicit about(QWidget *parent = 0);
    ~about();
    
private slots:
    void on_point_clicked();

private:
    Ui::about *ui;
};

#endif // ABOUT_H
