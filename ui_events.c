// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.2
// LVGL version: 8.3.11
// Project name: SquareLine_Project

#include "ui.h"
int Cake_Init = 0;
int Muffin_Init = 0;
int Cookies_Init = 0;
int Brownies_Init = 0;
int Pancakes_Init = 0;
int Bread_Init = 0;
int Cupcakes_Init = 0;
int Cus1_recipe_Init = 0;
int Cus2_recipe_Init = 0;
int Cus3_recipe_Init = 0;
int cake_confirm = 0;
int muffin_confirm = 0;
int cookie_confirm = 0;
int brownie_confirm = 0;
int pancake_confirm = 0;
int bread_confirm = 0;
int cupcake_confirm = 0;
int cus1_confirm = 0;
int cus2_confirm = 0;
int cus3_confirm = 0;

void getreadycake(lv_event_t* e) {
  Cake_Init = 1;
}
void getreadymuff(lv_event_t* e) {
  Muffin_Init = 1;
}

void getreadycook(lv_event_t* e) {
  Cookies_Init = 1;
}

void getreadybrown(lv_event_t* e) {
  Brownies_Init = 1;
}

void getreadypan(lv_event_t* e) {
  Pancakes_Init = 1;
}

void getreadybread(lv_event_t* e) {
  Bread_Init = 1;
}

void getreadycup(lv_event_t* e) {
  Cupcakes_Init = 1;
}

void getreadycus1(lv_event_t* e) {
  Cus1_recipe_Init = 1;
}

void getreadycus2(lv_event_t* e) {
  Cus2_recipe_Init = 1;
}

void getreadycus3(lv_event_t* e) {
  Cus3_recipe_Init = 1;
}

void cakedone(lv_event_t* e) {
  cake_confirm = 1;
}

void muffdone(lv_event_t* e) {
  muffin_confirm = 1;
}

void cookdone(lv_event_t* e) {
  cookie_confirm = 1;
}

void browndone(lv_event_t* e) {
  brownie_confirm = 1;
}

void pancakedone(lv_event_t* e) {
  pancake_confirm = 1;
}

void breaddone(lv_event_t* e) {
  bread_confirm = 1;
}

void cupcakedone(lv_event_t* e) {
  cupcake_confirm = 1;
}

void cus1done(lv_event_t* e) {
  cus1_confirm = 1;
}

void cus2done(lv_event_t* e) {
  cus2_confirm = 1;
}

void cus3done(lv_event_t* e) {
  cus3_confirm = 1;
}
