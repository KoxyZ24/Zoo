#ifndef STATSPAGE_H
#define STATSPAGE_H

#include <QMainWindow>

namespace Ui {
class statsPage;
}

class statsPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit statsPage(QWidget *parent = nullptr);
    ~statsPage();

signals:
    void validateName(QString);

private slots:
    void on_btn_validateZooName_clicked();

private:
    Ui::statsPage *ui;
};

#endif // STATSPAGE_H
