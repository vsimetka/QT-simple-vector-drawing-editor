/**
 * PGR 2013 project
 * Application's main window
 *
 * @author  xskota05 Klara Vankova
 *          xsimet00 Vojtech Simetka
 * @date    2013/11/26
 * @version 1
 * @file    mainwindow.cpp
 */
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "changeslog.h"

openglwidget * MainWindow::opw = NULL;

/**
 * @brief MainWindow constructor
 * @param parent Reference to parent component
 */
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    // Set's up user interface from an xml file
    ui->setupUi(this);

    MainWindow::opw = ui->widget;
}

/**
 * @brief MainWindow destructor
 */
MainWindow::~MainWindow()
{
    // Deletes user interface
    delete ui;
}

void MainWindow::undo()
{
    // Redo
    ChangesLog::sharedInstance()->undoStep();
}
