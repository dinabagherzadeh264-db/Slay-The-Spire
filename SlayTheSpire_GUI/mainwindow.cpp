#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
#include <QPushButton>
#include "../card.h"
#include "../AttackCard.h"
#include "../CurseCard.h"
#include "../SkillCard.h"
#include "../PowerCard.h"
#include "../StatusCard.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_cardButton_1_clicked() { ui->cardButton_1->hide(); }
void MainWindow::on_cardButton_2_clicked() { ui->cardButton_2->hide(); }
void MainWindow::on_cardButton_3_clicked() { ui->cardButton_3->hide(); }
void MainWindow::on_cardButton_4_clicked() { ui->cardButton_4->hide(); }
void MainWindow::on_cardButton_5_clicked() { ui->cardButton_5->hide(); }

void MainWindow::on_EndTurnButton_clicked()
{
    ui->cardButton_1->show();
    ui->cardButton_2->show();
    ui->cardButton_3->show();
    ui->cardButton_4->show();
    ui->cardButton_5->show();
}

void MainWindow::updateHandUI() {
    QPushButton* buttons[] = { ui->cardButton_1, ui->cardButton_2, ui->cardButton_3, ui->cardButton_4, ui->cardButton_5 };

    for (int i = 0; i < 5; ++i) {
        if (i < playerHand.size() && playerHand[i] != nullptr) {
            buttons[i]->show();
            buttons[i]->setEnabled(playerHand[i]->isPlayable());
            buttons[i]->setText("");

            QString cardName = QString::fromStdString(playerHand[i]->getName());
            QString imgPath = ":/images/" + cardName + ".png";

            QIcon cardIcon(imgPath);
            buttons[i]->setIcon(cardIcon);
            buttons[i]->setIconSize(buttons[i]->size());
        } else {
            buttons[i]->hide();
        }
    }
}

Card* createCardByName(const std::string& name) {
    if (name == "Bash")            return new BashCard();
    if (name == "Blood for Blood") return new Blood_for_BloodCard();
    if (name == "Clash")           return new ClashCard();
    if (name == "Feed")            return new FeedCard();
    if (name == "Immolate")        return new ImmolateCard();
    if (name == "PerfectedStrike") return new PerfectedStrike();
    if (name == "Reaper")          return new ReaperCard();
    if (name == "Strike")          return new AttackCard(CardType::Attack, "Strike", "Deal 6 damage", 1, 6);
    if (name == "Bludgeon")        return new AttackCard(CardType::Attack, "Bludgeon", "Deal 32 damage", 3, 32);
    if (name == "TwinStrike")      return new TwinStrikeCard();
    if (name == "Whirlwind")       return new WhirlwindCard();
    if (name == "Barricade")       return new BarricadeCard();
    if (name == "Bloodletting")    return new BloodlettingCard();
    if (name == "Brutality")       return new BrutalityCard();
    if (name == "Burn")            return new BurnCard();
    if (name == "CurseOfTheBell")  return new CurseOfBellCard();
    if (name == "DualWield")       return new DualWieldCard();
    if (name == "Daze")            return new DazeCard();
    if (name == "Defend")          return new DefendCard();
    if (name == "DemonForm")       return new DemonFormCard();
    if (name == "Disarm")          return new DisarmCard();
    if (name == "Entrench")        return new EntrenchCard();
    if (name == "Exhume")          return new ExhumeCard();
    if (name == "FeelNoPain")      return new FeelNoPainCard();
    if (name == "Impervious")      return new ImperviousCard();
    if (name == "Inflame")         return new InflameCard();
    if (name == "JAX")             return new JAXCard();
    if (name == "LimitBreak")      return new LimitBreakCard();
    if (name == "Metallicize")     return new MetallicizeCard();
    if (name == "Offering")        return new OfferingCard();
    if (name == "Regret")          return new RegretCard();
    if (name == "ShrugItOff")       return new ShrugItOffCard();
    if (name == "Slime")           return new SlimeCard();
    if (name == "Wound")           return new WoundCard();
    return nullptr;
}