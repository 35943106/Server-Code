#include <Wire.h>
#include <SPI.h>
#include <WiFi.h>
#include <Preferences.h>  // Include the Preferences library for storing data

/**************************LVGL and UI************************/
#include <lvgl.h>
#include "ui.h"
/**************************LVGL and UI END************************/

/*******************************************************************************
   Config the display panel and touch panel in gfx_conf.h
 ******************************************************************************/
#include "gfx_conf.h"
//##
static lv_disp_draw_buf_t draw_buf;
static lv_color_t disp_draw_buf1[screenWidth * screenHeight / 8];
static lv_color_t disp_draw_buf2[screenWidth * screenHeight / 8];
static lv_disp_drv_t disp_drv;

/* Preferences object */
Preferences prefs;

const char* ssid = "Hello_Elecrow";
const char* password = "12345678";  // Set a password

IPAddress local_ip(192, 168, 4, 1);
IPAddress gateway(192, 168, 4, 1);
IPAddress subnet(255, 255, 255, 0);

WiFiServer server(22333);  // Declare the server object

/* Display flushing */
void my_disp_flush(lv_disp_drv_t* disp, const lv_area_t* area, lv_color_t* color_p) {
  uint32_t w = (area->x2 - area->x1 + 1);
  uint32_t h = (area->y2 - area->y1 + 1);

  tft.pushImageDMA(area->x1, area->y1, w, h, (lgfx::rgb565_t*)&color_p->full);

  lv_disp_flush_ready(disp);
}

void my_touchpad_read(lv_indev_drv_t* indev_driver, lv_indev_data_t* data) {
  uint16_t touchX, touchY;
  bool touched = tft.getTouch(&touchX, &touchY);
  if (!touched) {
    data->state = LV_INDEV_STATE_REL;
  } else {
    data->state = LV_INDEV_STATE_PR;
    data->point.x = touchX;
    data->point.y = touchY;
  }
}

// void handleAcknowledgment(const String& ack) {
  // Serial.println("Acknowledgment received: " + ack);

  // // Only process the first complete message
  // if (ack.startsWith("GO")) {
  //   Serial.println("Acknowledgment indicates GO");
  //   lv_scr_load(ui_recipe);  // Load the next screen

  // } else if (ack.startsWith("NO GO all")) {
  //   Serial.println("Acknowledgment indicates NO GO all");
  //   // Display message box for "NO GO all"
  //   static const char* btns[] = { "", NULL };
  //   lv_obj_t* msgbox = lv_msgbox_create(NULL, "Error", "Not Enough Ingredient In all Containers", btns, true);
  //   lv_obj_set_size(msgbox, 300, 150);  // Adjust width and height to fit your screen size
  //   lv_obj_set_style_text_font(msgbox, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);
  //   lv_obj_center(msgbox);

  // } else if (ack.startsWith("NO GO flour")) {
  //   Serial.println("Acknowledgment indicates NO GO flour");
  //   // Display message box for "NO GO flour"
  //   static const char* btns[] = { "", NULL };
  //   lv_obj_t* msgbox = lv_msgbox_create(NULL, "Error", "Not Enough Ingredient In FLOUR Container", btns, true);
  //   lv_obj_set_size(msgbox, 300, 150);
  //   lv_obj_set_style_text_font(msgbox, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);
  //   lv_obj_center(msgbox);

  // } else if (ack.startsWith("NO GO sugar")) {
  //   Serial.println("Acknowledgment indicates NO GO sugar");
  //   // Display message box for "NO GO sugar"
  //   static const char* btns[] = { "", NULL };
  //   lv_obj_t* msgbox = lv_msgbox_create(NULL, "Error", "Not Enough Ingredient In SUGAR Container", btns, true);
  //   lv_obj_set_size(msgbox, 300, 150);
  //   lv_obj_set_style_text_font(msgbox, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);
  //   lv_obj_center(msgbox);

  // } else if (ack.startsWith("NO GO BP")) {
  //   Serial.println("Acknowledgment indicates NO GO BP");
  //   // Display message box for "NO GO BP"
  //   static const char* btns[] = { "", NULL };
  //   lv_obj_t* msgbox = lv_msgbox_create(NULL, "Error", "Not Enough Ingredient In Baking Powder Container", btns, true);
  //   lv_obj_set_size(msgbox, 300, 150);
  //   lv_obj_set_style_text_font(msgbox, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);
  //   lv_obj_center(msgbox);

  // } else if (ack.startsWith("NO GO CP")) {
  //   Serial.println("Acknowledgment indicates NO GO CP");
  //   // Display message box for "NO GO CP"
  //   static const char* btns[] = { "", NULL };
  //   lv_obj_t* msgbox = lv_msgbox_create(NULL, "Error", "Not Enough Ingredient In Cocoa Powder Container", btns, true);
  //   lv_obj_set_size(msgbox, 300, 150);
  //   lv_obj_set_style_text_font(msgbox, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);
  //   lv_obj_center(msgbox);

  // } else if (ack.startsWith("NO GO flour and CP")) {
  //   Serial.println("Acknowledgment indicates NO GO flour and CP");
  //   // Display message box for "NO GO flour and CP"
  //   static const char* btns[] = { "", NULL };
  //   lv_obj_t* msgbox = lv_msgbox_create(NULL, "Error", "Not Enough Ingredient In FLOUR and Cocoa Powder Containers", btns, true);
  //   lv_obj_set_size(msgbox, 300, 150);
  //   lv_obj_set_style_text_font(msgbox, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);
  //   lv_obj_center(msgbox);

  // } else if (ack.startsWith("NO GO sugar and BP")) {
  //   Serial.println("Acknowledgment indicates NO GO sugar and BP");
  //   // Display message box for "NO GO sugar and BP"
  //   static const char* btns[] = { "", NULL };
  //   lv_obj_t* msgbox = lv_msgbox_create(NULL, "Error", "Not Enough Ingredient In SUGAR and Baking Powder Containers", btns, true);
  //   lv_obj_set_size(msgbox, 300, 150);
  //   lv_obj_set_style_text_font(msgbox, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);
  //   lv_obj_center(msgbox);

  // } else if (ack.startsWith("NO GO flour and BP")) {
  //   Serial.println("Acknowledgment indicates NO GO flour and BP");
  //   // Display message box for "NO GO flour and BP"
  //   static const char* btns[] = { "", NULL };
  //   lv_obj_t* msgbox = lv_msgbox_create(NULL, "Error", "Not Enough Ingredient In FLOUR and Baking Powder Containers", btns, true);
  //   lv_obj_set_size(msgbox, 300, 150);
  //   lv_obj_set_style_text_font(msgbox, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);
  //   lv_obj_center(msgbox);

  // } else if (ack.startsWith("NO GO sugar and CP")) {
  //   Serial.println("Acknowledgment indicates NO GO sugar and CP");
  //   // Display message box for "NO GO sugar and CP"
  //   static const char* btns[] = { "", NULL };
  //   lv_obj_t* msgbox = lv_msgbox_create(NULL, "Error", "Not Enough Ingredient In SUGAR and Cocoa Powder Containers", btns, true);
  //   lv_obj_set_size(msgbox, 300, 150);
  //   lv_obj_set_style_text_font(msgbox, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);
  //   lv_obj_center(msgbox);

  // } else if (ack.startsWith("NO GO BP and CP")) {
  //   Serial.println("Acknowledgment indicates NO GO BP and CP");
  //   // Display message box for "NO GO BP and CP"
  //   static const char* btns[] = { "", NULL };
  //   lv_obj_t* msgbox = lv_msgbox_create(NULL, "Error", "Not Enough Ingredient In Baking Powder and Cocoa Powder Containers", btns, true);
  //   lv_obj_set_size(msgbox, 300, 150);
  //   lv_obj_set_style_text_font(msgbox, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);
  //   lv_obj_center(msgbox);
  // }
// }


void setup() {
  Serial.begin(9600);

  // Display Prepare
  tft.begin();
  tft.fillScreen(TFT_BLACK);
  tft.setTextSize(2);
  delay(200);

  lv_init();

  delay(100);

  lv_disp_draw_buf_init(&draw_buf, disp_draw_buf1, disp_draw_buf2, screenWidth * screenHeight / 8);
  lv_disp_drv_init(&disp_drv);
  disp_drv.hor_res = screenWidth;
  disp_drv.ver_res = screenHeight;
  disp_drv.flush_cb = my_disp_flush;
  disp_drv.full_refresh = 1;
  disp_drv.draw_buf = &draw_buf;
  lv_disp_drv_register(&disp_drv);

  static lv_indev_drv_t indev_drv;
  lv_indev_drv_init(&indev_drv);
  indev_drv.type = LV_INDEV_TYPE_POINTER;
  indev_drv.read_cb = my_touchpad_read;
  lv_indev_drv_register(&indev_drv);

  tft.fillScreen(TFT_BLACK);

  ui_init();

  // Set to Access Point mode
  WiFi.mode(WIFI_AP);

  // Configure Access Point parameters
  WiFi.softAPConfig(local_ip, gateway, subnet);
  WiFi.softAP(ssid, password);

  // Print Access Point information
  Serial.print("AP IP address: ");
  Serial.println(WiFi.softAPIP());

  server.begin();  // Start the server listening on port 22333

  // Initialize Preferences
  // prefs.begin("recipeData", false);  // Open Preferences with namespace "recipeData"


  /****************************Retrieve saved data if available**************************************/

  // cake
  // if (prefs.isKey("cakeflour")) {
  //   lv_textarea_set_text(ui_cakeflourtext, prefs.getString("cakesugar").c_str());
  // }
  // if (prefs.isKey("cakesugar")) {
  //   lv_textarea_set_text(ui_cakesugtext, prefs.getString("cakesugar").c_str());
  // }
  // if (prefs.isKey("cakeBP")) {
  //   lv_textarea_set_text(ui_cakeBPtext, prefs.getString("cakeBP").c_str());
  // }
  // if (prefs.isKey("cakeCP")) {
  //   lv_textarea_set_text(ui_cakeCPtext, prefs.getString("cakeCP").c_str());
  // }

  // //muffin
  // if (prefs.isKey("muffinflour")) {
  //   lv_textarea_set_text(ui_muffflourtext1, prefs.getString("muffinflour").c_str());
  // }
  // if (prefs.isKey("muffinsugar")) {
  //   lv_textarea_set_text(ui_muffsugtext1, prefs.getString("muffinsugar").c_str());
  // }
  // if (prefs.isKey("muffinBP")) {
  //   lv_textarea_set_text(ui_muffBPtext1, prefs.getString("muffinBP").c_str());
  // }
  // if (prefs.isKey("muffinCP")) {
  //   lv_textarea_set_text(ui_muffCPtext1, prefs.getString("muffinCP").c_str());
  // }

  // //cookie
  // if (prefs.isKey("cookieflour")) {
  //   lv_textarea_set_text(ui_cookflourtext, prefs.getString("cookieflour").c_str());
  // }
  // if (prefs.isKey("cookiesugar")) {
  //   lv_textarea_set_text(ui_cooksugtext, prefs.getString("cookiesugar").c_str());
  // }
  // if (prefs.isKey("cookieBP")) {
  //   lv_textarea_set_text(ui_cookBPtext, prefs.getString("cookieBP").c_str());
  // }
  // if (prefs.isKey("cookieCP")) {
  //   lv_textarea_set_text(ui_cookCPtext, prefs.getString("cookieCP").c_str());
  // }

  // //brownie
  // if (prefs.isKey("brownieflour")) {
  //   lv_textarea_set_text(ui_brownflourtext1, prefs.getString("brownieflour").c_str());
  // }
  // if (prefs.isKey("browniesugar")) {
  //   lv_textarea_set_text(ui_brownsugtext1, prefs.getString("browniesugar").c_str());
  // }
  // if (prefs.isKey("brownieBP")) {
  //   lv_textarea_set_text(ui_brownBPtext1, prefs.getString("brownieBP").c_str());
  // }
  // if (prefs.isKey("brownieCP")) {
  //   lv_textarea_set_text(ui_brownCPtext1, prefs.getString("brownieCP").c_str());
  // }

  // //pancake
  // if (prefs.isKey("pancakeflour")) {
  //   lv_textarea_set_text(ui_pancakesflourtext, prefs.getString("pancakeflour").c_str());
  // }
  // if (prefs.isKey("pancakesugar")) {
  //   lv_textarea_set_text(ui_pancakessugtext, prefs.getString("pancakesugar").c_str());
  // }
  // if (prefs.isKey("pancakeBP")) {
  //   lv_textarea_set_text(ui_pancakesBPtext, prefs.getString("pancakeBP").c_str());
  // }

  // // bread
  // if (prefs.isKey("breadflour")) {
  //   lv_textarea_set_text(ui_breadflourtext, prefs.getString("breadflour").c_str());
  // }
  // if (prefs.isKey("breadsugar")) {
  //   lv_textarea_set_text(ui_breadsugtext, prefs.getString("breadsugar").c_str());
  // }
  // if (prefs.isKey("breadBP")) {
  //   lv_textarea_set_text(ui_breadBPtext, prefs.getString("breadBP").c_str());
  // }

  // //cupcake
  // if (prefs.isKey("cupcakeflour")) {
  //   lv_textarea_set_text(ui_cupflourtext, prefs.getString("cupcakeflour").c_str());
  // }
  // if (prefs.isKey("cupcakesugar")) {
  //   lv_textarea_set_text(ui_cupsugtext, prefs.getString("cupcakesugar").c_str());
  // }
  // if (prefs.isKey("cupcakeBP")) {
  //   lv_textarea_set_text(ui_cupBPtext, prefs.getString("cupcakeBP").c_str());
  // }
  // if (prefs.isKey("cupcakeCP")) {
  //   lv_textarea_set_text(ui_cupCPtext, prefs.getString("cupcakeCP").c_str());
  // }

  // // cus1
  // if (prefs.isKey("cus1name")) {
  //   String cus1_name = prefs.getString("cus1name");            // Retrieve the name
  //   lv_textarea_set_text(ui_cus1nametext, cus1_name.c_str());  // Set TextArea with the saved name
  //   lv_label_set_text(ui_Label8, cus1_name.c_str());           // Set Label with the saved name
  // }
  // if (prefs.isKey("cus1flour")) {
  //   lv_textarea_set_text(ui_cus1flourtext, prefs.getString("cus1flour").c_str());
  // }
  // if (prefs.isKey("cus1sugar")) {
  //   lv_textarea_set_text(ui_cus1sugtext, prefs.getString("cus1sugar").c_str());
  // }
  // if (prefs.isKey("cus1BP")) {
  //   lv_textarea_set_text(ui_cus1BPtext, prefs.getString("cus1BP").c_str());
  // }
  // if (prefs.isKey("cus1CP")) {
  //   lv_textarea_set_text(ui_cus1CPtext, prefs.getString("cus1CP").c_str());
  // }

  // // cus2
  // if (prefs.isKey("cus2name")) {
  //   String cus2_name = prefs.getString("cus2name");            // Retrieve the name
  //   lv_textarea_set_text(ui_cus2nametext, cus2_name.c_str());  // Set TextArea with the saved name
  //   lv_label_set_text(ui_Label9, cus2_name.c_str());           // Set Label with the saved name
  // }
  // if (prefs.isKey("cus2flour")) {
  //   lv_textarea_set_text(ui_cus2flourtext, prefs.getString("cus2flour").c_str());
  // }
  // if (prefs.isKey("cus2sugar")) {
  //   lv_textarea_set_text(ui_cus2sugtext, prefs.getString("cus2sugar").c_str());
  // }
  // if (prefs.isKey("cus2BP")) {
  //   lv_textarea_set_text(ui_cus2BPtext, prefs.getString("cus2BP").c_str());
  // }
  // if (prefs.isKey("cus2CP")) {
  //   lv_textarea_set_text(ui_cus2CPtext, prefs.getString("cus2CP").c_str());
  // }

  // //cus3
  // if (prefs.isKey("cus3name")) {
  //   String cus3_name = prefs.getString("cus3name");            // Retrieve the name
  //   lv_textarea_set_text(ui_cus3nametext, cus3_name.c_str());  // Set TextArea with the saved name
  //   lv_label_set_text(ui_add3, cus3_name.c_str());             // Set Label with the saved name
  // }
  // if (prefs.isKey("cus3flour")) {
  //   lv_textarea_set_text(ui_cus3flourtext, prefs.getString("cus3flour").c_str());
  // }
  // if (prefs.isKey("cus3sugar")) {
  //   lv_textarea_set_text(ui_cus3sugtext, prefs.getString("cus3sugar").c_str());
  // }
  // if (prefs.isKey("cus3BP")) {
  //   lv_textarea_set_text(ui_cus3BPtext, prefs.getString("cus3BP").c_str());
  // }
  // if (prefs.isKey("cus3CP")) {
  //   lv_textarea_set_text(ui_cus3CPtext, prefs.getString("cus3CP").c_str());
  // }
}

void loop() {
  WiFiClient client = server.available();  // Try to establish a client object
  if (client)                              // If a client is available
  {
    Serial.println("[Client connected]");
    while (client.connected())  // If the client is still connected
    {
      lv_timer_handler();
      delay(5);

      String dataToSend;

      if (Cake_Init == 1) {
        client.write("get ready Cake");
        Cake_Init = 0;
      } 
      // else if (Muffin_Init == 1) {
      //   client.write("get ready Muffins");
      //   Muffin_Init = 0;
      // } else if (Cookies_Init == 1) {
      //   client.write("get ready Cookies");
      //   Cookies_Init = 0;
      // } else if (Brownies_Init == 1) {
      //   client.write("get ready Brownies");
      //   Brownies_Init = 0;
      // } else if (Pancakes_Init == 1) {
      //   client.write("get ready Pancakes");
      //   Pancakes_Init = 0;
      // } else if (Bread_Init == 1) {
      //   client.write("get ready Bread");
      //   Bread_Init = 0;
      // } else if (Cupcakes_Init == 1) {
      //   client.write("get ready Cupcakes");
      //   Cupcakes_Init = 0;
      // } else if (Cus1_recipe_Init == 1) {
      //   client.write("get ready Cus1");
      //   Cus1_recipe_Init = 0;
      // } else if (Cus2_recipe_Init == 1) {
      //   client.write("get ready Cus2");
      //   Cus2_recipe_Init = 0;
      // } else if (Cus3_recipe_Init == 1) {
      //   client.write("get ready Cus3");
      //   Cus3_recipe_Init = 0;
      // }

      if (cake_confirm == 1) {
        const char* cake_name = "CAKE";
        const char* cake_flour_num = lv_textarea_get_text(ui_cakeflourtext);
        const char* cake_sugar_num = lv_textarea_get_text(ui_cakesugtext);
        const char* cake_BP_num = lv_textarea_get_text(ui_cakeBPtext);
        const char* cake_CP_num = lv_textarea_get_text(ui_cakeCPtext);

        // Save the data to Preferences
        // prefs.putString("cakename", cake_name);
        // prefs.putString("cakeflour", cake_flour_num);
        // prefs.putString("cakesugar", cake_sugar_num);
        // prefs.putString("cakeBP", cake_BP_num);
        // prefs.putString("cakeCP", cake_CP_num);

        dataToSend = String("name:") + cake_name + ",flour:" + cake_flour_num + ",sugar:" + cake_sugar_num + ",BP:" + cake_BP_num + ",CP:" + cake_CP_num;

        client.write(dataToSend.c_str(), dataToSend.length());

        while (client.available() == 0) {
          delay(10);
        }
        // String ack = client.readString();
        // if (ack == "ACK") {
        //   Serial.println("Acknowledgment received from client");
        // } else if (ack == "NO GO") {
        // }
        // String ack = client.readString();
        // handleAcknowledgment(ack);
        cake_confirm = 0;

      } 
      // else if (muffin_confirm == 1) {
      //   const char* muffin_name = "MUFFINS";
      //   const char* muffin_flour_num = lv_textarea_get_text(ui_muffflourtext1);
      //   const char* muffin_sugar_num = lv_textarea_get_text(ui_muffsugtext1);
      //   const char* muffin_BP_num = lv_textarea_get_text(ui_muffBPtext1);
      //   const char* muffin_CP_num = lv_textarea_get_text(ui_muffCPtext1);

      //   // Save the data to Preferences
      //   prefs.putString("muffinname", muffin_name);
      //   prefs.putString("muffinflour", muffin_flour_num);
      //   prefs.putString("muffinsugar", muffin_sugar_num);
      //   prefs.putString("muffinBP", muffin_BP_num);
      //   prefs.putString("muffinCP", muffin_CP_num);

      //   dataToSend = String("name:") + muffin_name + ",flour:" + muffin_flour_num + ",sugar:" + muffin_sugar_num + ",BP:" + muffin_BP_num + ",CP:" + muffin_CP_num;

      //   client.write(dataToSend.c_str(), dataToSend.length());

      //   while (client.available() == 0) {
      //     delay(10);
      //   }
      //   String ack = client.readString();
      //   handleAcknowledgment(ack);

      //   muffin_confirm = 0;
      // } else if (cookie_confirm == 1) {
      //   const char* cook_name = "COOKIE";
      //   const char* cook_flour_num = lv_textarea_get_text(ui_cookflourtext);
      //   const char* cook_sugar_num = lv_textarea_get_text(ui_cooksugtext);
      //   const char* cook_BP_num = lv_textarea_get_text(ui_cookBPtext);
      //   const char* cook_CP_num = lv_textarea_get_text(ui_cookCPtext);

      //   // Save the data to Preferences
      //   prefs.putString("cookiename", cook_name);
      //   prefs.putString("cookieflour", cook_flour_num);
      //   prefs.putString("cookiesugar", cook_sugar_num);
      //   prefs.putString("cookieBP", cook_BP_num);
      //   prefs.putString("cookieCP", cook_CP_num);

      //   dataToSend = String("name:") + cook_name + ",flour:" + cook_flour_num + ",sugar:" + cook_sugar_num + ",BP:" + cook_BP_num + ",CP:" + cook_CP_num;

      //   client.write(dataToSend.c_str(), dataToSend.length());

      //   while (client.available() == 0) {
      //     delay(10);
      //   }
      //   String ack = client.readString();
      //   handleAcknowledgment(ack);

      //   cookie_confirm = 0;
      // } else if (brownie_confirm == 1) {
      //   const char* brownie_name = "BROWNIE";
      //   const char* brownie_flour_num = lv_textarea_get_text(ui_brownflourtext1);
      //   const char* brownie_sugar_num = lv_textarea_get_text(ui_brownsugtext1);
      //   const char* brownie_BP_num = lv_textarea_get_text(ui_brownBPtext1);
      //   const char* brownie_CP_num = lv_textarea_get_text(ui_brownCPtext1);

      //   // Save the data to Preferences
      //   prefs.putString("browniename", brownie_name);
      //   prefs.putString("brownieflour", brownie_flour_num);
      //   prefs.putString("browniesugar", brownie_sugar_num);
      //   prefs.putString("brownieBP", brownie_BP_num);
      //   prefs.putString("brownieCP", brownie_CP_num);

      //   dataToSend = String("name:") + brownie_name + ",flour:" + brownie_flour_num + ",sugar:" + brownie_sugar_num + ",BP:" + brownie_BP_num + ",CP:" + brownie_CP_num;

      //   client.write(dataToSend.c_str(), dataToSend.length());

      //   while (client.available() == 0) {
      //     delay(10);
      //   }
      //   String ack = client.readString();
      //   handleAcknowledgment(ack);

      //   brownie_confirm = 0;
      // } else if (pancake_confirm == 1) {
      //   const char* pancake_name = "PANCAKES";
      //   const char* pancake_flour_num = lv_textarea_get_text(ui_pancakesflourtext);
      //   const char* pancake_sugar_num = lv_textarea_get_text(ui_pancakessugtext);
      //   const char* pancake_BP_num = lv_textarea_get_text(ui_pancakesBPtext);
      //   const char* pancake_CP_num = 0;

      //   // Save the data to Preferences
      //   prefs.putString("pancakename", pancake_name);
      //   prefs.putString("pancakeflour", pancake_flour_num);
      //   prefs.putString("pancakesugar", pancake_sugar_num);
      //   prefs.putString("pancakeBP", pancake_BP_num);
      //   prefs.putString("pancakeCP", pancake_CP_num);


      //   dataToSend = String("name:") + pancake_name + ",flour:" + pancake_flour_num + ",sugar:" + pancake_sugar_num + ",BP:" + pancake_BP_num + ",CP:" + pancake_CP_num;

      //   client.write(dataToSend.c_str(), dataToSend.length());

      //   while (client.available() == 0) {
      //     delay(10);
      //   }
      //   String ack = client.readString();
      //   handleAcknowledgment(ack);

      //   pancake_confirm = 0;
      // } else if (bread_confirm == 1) {
      //   const char* bread_name = "BREAD";
      //   const char* bread_flour_num = lv_textarea_get_text(ui_breadflourtext);
      //   const char* bread_sugar_num = lv_textarea_get_text(ui_breadsugtext);
      //   const char* bread_BP_num = lv_textarea_get_text(ui_breadBPtext);
      //   const char* bread_CP_num = 0;

      //   // Save the data to Preferences
      //   prefs.putString("breadname", bread_name);
      //   prefs.putString("breadflour", bread_flour_num);
      //   prefs.putString("breadsugar", bread_sugar_num);
      //   prefs.putString("breadBP", bread_BP_num);
      //   prefs.putString("breadCP", bread_CP_num);

      //   dataToSend = String("name:") + bread_name + ",flour:" + bread_flour_num + ",sugar:" + bread_sugar_num + ",BP:" + bread_BP_num + ",CP:" + bread_CP_num;

      //   client.write(dataToSend.c_str(), dataToSend.length());

      //   while (client.available() == 0) {
      //     delay(10);
      //   }
      //   String ack = client.readString();
      //   handleAcknowledgment(ack);

      //   bread_confirm = 0;
      // } else if (cupcake_confirm == 1) {
      //   const char* cupcake_name = "CUPCAKES";
      //   const char* cupcake_flour_num = lv_textarea_get_text(ui_cupflourtext);
      //   const char* cupcake_sugar_num = lv_textarea_get_text(ui_cupsugtext);
      //   const char* cupcake_BP_num = lv_textarea_get_text(ui_cupBPtext);
      //   const char* cupcake_CP_num = lv_textarea_get_text(ui_cupCPtext);

      //   // Save the data to Preferences
      //   prefs.putString("cupcakename", cupcake_name);
      //   prefs.putString("cupcakeflour", cupcake_flour_num);
      //   prefs.putString("cupcakesugar", cupcake_sugar_num);
      //   prefs.putString("cupcakeBP", cupcake_BP_num);
      //   prefs.putString("cupcakeCP", cupcake_CP_num);

      //   dataToSend = String("name:") + cupcake_name + ",flour:" + cupcake_flour_num + ",sugar:" + cupcake_sugar_num + ",BP:" + cupcake_BP_num + ",CP:" + cupcake_CP_num;

      //   client.write(dataToSend.c_str(), dataToSend.length());

      //   while (client.available() == 0) {
      //     delay(10);
      //   }
      //   String ack = client.readString();
      //   handleAcknowledgment(ack);

      //   cupcake_confirm = 0;
      // } else if (cus1_confirm == 1) {
      //   const char* cus1_name = lv_textarea_get_text(ui_cus1nametext);
      //   const char* cus1_flour_num = lv_textarea_get_text(ui_cus1flourtext);
      //   const char* cus1_sugar_num = lv_textarea_get_text(ui_cus1sugtext);
      //   const char* cus1_BP_num = lv_textarea_get_text(ui_cus1BPtext);
      //   const char* cus1_CP_num = lv_textarea_get_text(ui_cus1CPtext);

      //   // Save the data to Preferences
      //   prefs.putString("cus1name", cus1_name);
      //   prefs.putString("cus1flour", cus1_flour_num);
      //   prefs.putString("cus1sugar", cus1_sugar_num);
      //   prefs.putString("cus1BP", cus1_BP_num);
      //   prefs.putString("cus1CP", cus1_CP_num);

      //   dataToSend = String("name:") + cus1_name + ",flour:" + cus1_flour_num + ",sugar:" + cus1_sugar_num + ",BP:" + cus1_BP_num + ",CP:" + cus1_CP_num;
      //   Serial.println(dataToSend);

      //   client.write(dataToSend.c_str(), dataToSend.length());

      //   while (client.available() == 0) {
      //     delay(10);
      //   }
      //   String ack = client.readString();
      //   handleAcknowledgment(ack);

      //   lv_label_set_text(ui_Label8, cus1_name);
      //   // lv_scr_load(ui_recipe);
      //   cus1_confirm = 0;
      // } else if (cus2_confirm == 1) {
      //   const char* cus2_name = lv_textarea_get_text(ui_cus2nametext);
      //   const char* cus2_flour_num = lv_textarea_get_text(ui_cus2flourtext);
      //   const char* cus2_sugar_num = lv_textarea_get_text(ui_cus2sugtext);
      //   const char* cus2_BP_num = lv_textarea_get_text(ui_cus2BPtext);
      //   const char* cus2_CP_num = lv_textarea_get_text(ui_cus2CPtext);

      //   // Save the data to Preferences
      //   prefs.putString("cus2name", cus2_name);
      //   prefs.putString("cus2flour", cus2_flour_num);
      //   prefs.putString("cus2sugar", cus2_sugar_num);
      //   prefs.putString("cus2BP", cus2_BP_num);
      //   prefs.putString("cus2CP", cus2_CP_num);

      //   dataToSend = String("name:") + cus2_name + ",flour:" + cus2_flour_num + ",sugar:" + cus2_sugar_num + ",BP:" + cus2_BP_num + ",CP:" + cus2_CP_num;
      //   Serial.println(dataToSend);

      //   client.write(dataToSend.c_str(), dataToSend.length());

      //   while (client.available() == 0) {
      //     delay(10);
      //   }
      //   String ack = client.readString();
      //   handleAcknowledgment(ack);

      //   lv_label_set_text(ui_Label9, cus2_name);
      //   // lv_scr_load(ui_recipe);
      //   cus2_confirm = 0;
      // } else if (cus3_confirm == 1) {
      //   const char* cus3_name = lv_textarea_get_text(ui_cus3nametext);
      //   const char* cus3_flour_num = lv_textarea_get_text(ui_cus3flourtext);
      //   const char* cus3_sugar_num = lv_textarea_get_text(ui_cus3sugtext);
      //   const char* cus3_BP_num = lv_textarea_get_text(ui_cus3BPtext);
      //   const char* cus3_CP_num = lv_textarea_get_text(ui_cus3CPtext);

      //   // Save the data to Preferences
      //   prefs.putString("cus3name", cus3_name);
      //   prefs.putString("cus3flour", cus3_flour_num);
      //   prefs.putString("cus3sugar", cus3_sugar_num);
      //   prefs.putString("cus3BP", cus3_BP_num);
      //   prefs.putString("cus3CP", cus3_CP_num);

      //   dataToSend = String("name:") + cus3_name + ",flour:" + cus3_flour_num + ",sugar:" + cus3_sugar_num + ",BP:" + cus3_BP_num + ",CP:" + cus3_CP_num;
      //   Serial.println(dataToSend);

      //   client.write(dataToSend.c_str(), dataToSend.length());

      //   while (client.available() == 0) {
      //     delay(10);
      //   }
      //   String ack = client.readString();
      //   handleAcknowledgment(ack);

      //   lv_label_set_text(ui_add3, cus3_name);
      //   // lv_scr_load(ui_recipe);
      //   cus3_confirm = 0;
      // }
    }
    client.stop();
    Serial.println("[Client disconnected]");
  }

  lv_timer_handler();
  delay(5);
}
