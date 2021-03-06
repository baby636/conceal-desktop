// Copyright (c) 2011-2017 The Cryptonote developers
// Copyright (c) 2018 The Circle Foundation & Conceal Devs
// Copyright (c) 2018-2019 Conceal Network & Conceal Devs
//  
// Copyright (c) 2018 The Circle Foundation & Conceal Devs
// Copyright (c) 2018-2019 Conceal Network & Conceal Devs
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "MainWindow.h"
#include "WelcomeFrame.h"
#include "ui_welcomeframe.h"

namespace WalletGui {

WelcomeFrame::WelcomeFrame(QWidget* _parent) : QFrame(_parent), m_ui(new Ui::WelcomeFrame) {
m_ui->setupUi(this);
m_ui->box1->show();
m_ui->box2->hide();
m_ui->box3->hide();
m_ui->box4->hide();
}

WelcomeFrame::~WelcomeFrame() {
}

void WelcomeFrame::createWallet() {
Q_EMIT createWalletClickedSignal();
}

void WelcomeFrame::openWallet() {
Q_EMIT openWalletClickedSignal();
}

void WelcomeFrame::importSeed() {
Q_EMIT importSeedClickedSignal();
}

void WelcomeFrame::importsecretkeys() {
Q_EMIT importsecretkeysClickedSignal();
}

void WelcomeFrame::importKey() {
Q_EMIT importKeyClickedSignal();
}

void WelcomeFrame::nextOne() {
  m_ui->box1->hide();
  m_ui->box2->show();
  m_ui->box3->hide();  
  m_ui->box4->hide();  
}

void WelcomeFrame::nextTwo() {
  m_ui->box1->hide();    
  m_ui->box2->hide();
  m_ui->box3->show();
  m_ui->box4->hide();
}


void WelcomeFrame::nextThree() {
  m_ui->box1->hide();    
  m_ui->box2->hide();
  m_ui->box3->hide();
  m_ui->box4->show();
}

}
