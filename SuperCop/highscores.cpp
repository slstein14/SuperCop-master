//Alex Portolese and Sam Stein
//This file contains the coding to make the High Scores window run and update properly.
#include "highscores.h"
#include "ui_highscores.h"

HighScores::HighScores(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HighScores)
{
    ui->setupUi(this);
}//Runs High Score Window

HighScores::~HighScores()
{
    delete ui;
}//clears potential memory leaks

void HighScores::on_reset_clicked()
{
    ui->Score1->setText("0");
    ui->Score2->setText("0");
    ui->Score3->setText("0");
    ui->Score4->setText("0");
    ui->Score5->setText("0");
}//Resets the High Scores

