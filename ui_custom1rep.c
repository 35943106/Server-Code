// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.2
// LVGL version: 8.3.11
// Project name: SquareLine_Project

#include "ui.h"

void ui_custom1rep_screen_init(void)
{
    ui_custom1rep = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_custom1rep, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_custom1rep, lv_color_hex(0x454444), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_custom1rep, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_custom1rep, lv_color_hex(0x6E6E6E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_custom1rep, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_custom1rep, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_custom1rep, LV_BORDER_SIDE_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_cus1_recipe = lv_imgbtn_create(ui_custom1rep);
    lv_imgbtn_set_src(ui_cus1_recipe, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_kitchen_whisk_icon_png, NULL);
    lv_imgbtn_set_src(ui_cus1_recipe, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_kitchen_whisk_icon_png, NULL);
    lv_imgbtn_set_src(ui_cus1_recipe, LV_IMGBTN_STATE_DISABLED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_cus1_recipe, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_cus1_recipe, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_cus1_recipe, LV_IMGBTN_STATE_CHECKED_DISABLED, NULL, &ui__temporary_image, NULL);
    lv_obj_set_height(ui_cus1_recipe, 72);
    lv_obj_set_width(ui_cus1_recipe, LV_SIZE_CONTENT);   /// -137
    lv_obj_set_x(ui_cus1_recipe, -340);
    lv_obj_set_y(ui_cus1_recipe, -80);
    lv_obj_set_align(ui_cus1_recipe, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_cus1_recipe, lv_color_hex(0x6E6E6E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_cus1_recipe, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_cus1_recipe, lv_color_hex(0x0F00FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_cus1_recipe, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_cus1_home = lv_imgbtn_create(ui_custom1rep);
    lv_imgbtn_set_src(ui_cus1_home, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_home_icon_png, NULL);
    lv_imgbtn_set_src(ui_cus1_home, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_home_icon_png, NULL);
    lv_imgbtn_set_src(ui_cus1_home, LV_IMGBTN_STATE_DISABLED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_cus1_home, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_cus1_home, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_cus1_home, LV_IMGBTN_STATE_CHECKED_DISABLED, NULL, &ui__temporary_image, NULL);
    lv_obj_set_height(ui_cus1_home, 79);
    lv_obj_set_width(ui_cus1_home, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_x(ui_cus1_home, -347);
    lv_obj_set_y(ui_cus1_home, -191);
    lv_obj_set_align(ui_cus1_home, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_cus1_home, lv_color_hex(0x6E6E6E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_cus1_home, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_cus1_page = lv_imgbtn_create(ui_custom1rep);
    lv_imgbtn_set_src(ui_cus1_page, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_add_circle_png, NULL);
    lv_imgbtn_set_src(ui_cus1_page, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_add_circle_png, NULL);
    lv_imgbtn_set_src(ui_cus1_page, LV_IMGBTN_STATE_DISABLED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_cus1_page, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_cus1_page, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_cus1_page, LV_IMGBTN_STATE_CHECKED_DISABLED, NULL, &ui__temporary_image, NULL);
    lv_obj_set_width(ui_cus1_page, 80);
    lv_obj_set_height(ui_cus1_page, 73);
    lv_obj_set_x(ui_cus1_page, -318);
    lv_obj_set_y(ui_cus1_page, 25);
    lv_obj_set_align(ui_cus1_page, LV_ALIGN_CENTER);
    lv_obj_set_style_radius(ui_cus1_page, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_cus1_page, lv_color_hex(0xFF00FE), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_cus1_page, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_cus1_page, lv_color_hex(0xFF00FE), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_cus1_page, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_cus1_page, 4, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_cus1_page, LV_BORDER_SIDE_FULL, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_cus1_page, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_cus1_page, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_cus1_page, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_cus1_page, 1, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_cus1panel = lv_obj_create(ui_custom1rep);
    lv_obj_set_width(ui_cus1panel, 696);
    lv_obj_set_height(ui_cus1panel, 482);
    lv_obj_set_x(ui_cus1panel, 59);
    lv_obj_set_y(ui_cus1panel, 10);
    lv_obj_set_align(ui_cus1panel, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_cus1panel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_cus1panel, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_cus1panel, lv_color_hex(0xECE7D6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_cus1panel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_cus1panel, lv_color_hex(0xFF00FE), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_cus1panel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_cus1panel, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_cus1panel, LV_BORDER_SIDE_TOP, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_cus1flourlab = lv_label_create(ui_cus1panel);
    lv_obj_set_width(ui_cus1flourlab, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_cus1flourlab, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_cus1flourlab, -128);
    lv_obj_set_y(ui_cus1flourlab, -100);
    lv_obj_set_align(ui_cus1flourlab, LV_ALIGN_CENTER);
    lv_label_set_text(ui_cus1flourlab, "FLOUR                 :");
    lv_obj_set_style_text_font(ui_cus1flourlab, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_cus1flourtext = lv_textarea_create(ui_cus1panel);
    lv_obj_set_width(ui_cus1flourtext, 212);
    lv_obj_set_height(ui_cus1flourtext, 42);
    lv_obj_set_x(ui_cus1flourtext, 82);
    lv_obj_set_y(ui_cus1flourtext, -100);
    lv_obj_set_align(ui_cus1flourtext, LV_ALIGN_CENTER);
    if("0,1,2,3,4,5,6,7,8,9,." == "") lv_textarea_set_accepted_chars(ui_cus1flourtext, NULL);
    else lv_textarea_set_accepted_chars(ui_cus1flourtext, "0,1,2,3,4,5,6,7,8,9,.");
    lv_textarea_set_max_length(ui_cus1flourtext, 5);
    lv_textarea_set_text(ui_cus1flourtext, "375");
    lv_textarea_set_placeholder_text(ui_cus1flourtext, "Enter value in grams...");
    lv_obj_set_style_text_color(ui_cus1flourtext, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_cus1flourtext, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_cus1flourtext, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_cus1flourtext, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_cus1flourtext, lv_color_hex(0xFF66FE), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_cus1flourtext, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_cus1flourtext, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_cus1flourtext, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_cus1flourtext, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_cus1flourtext, LV_BORDER_SIDE_FULL, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_cus1flourtext, lv_color_hex(0x8C8C8C), LV_PART_MAIN | LV_STATE_EDITED);
    lv_obj_set_style_bg_opa(ui_cus1flourtext, 255, LV_PART_MAIN | LV_STATE_EDITED);
    lv_obj_set_style_text_color(ui_cus1flourtext, lv_color_hex(0x050505), LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui_cus1flourtext, 255, LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui_cus1flourtext, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(ui_cus1flourtext, 255, LV_PART_MAIN | LV_STATE_FOCUSED);


    lv_obj_set_style_text_color(ui_cus1flourtext, lv_color_hex(0x000000), LV_PART_TEXTAREA_PLACEHOLDER | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_cus1flourtext, 255, LV_PART_TEXTAREA_PLACEHOLDER | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_cus1flourtext, lv_color_hex(0x050505), LV_PART_TEXTAREA_PLACEHOLDER | LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui_cus1flourtext, 255, LV_PART_TEXTAREA_PLACEHOLDER | LV_STATE_FOCUSED);

    ui_cus1suglab = lv_label_create(ui_cus1panel);
    lv_obj_set_width(ui_cus1suglab, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_cus1suglab, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_cus1suglab, -128);
    lv_obj_set_y(ui_cus1suglab, 0);
    lv_obj_set_align(ui_cus1suglab, LV_ALIGN_CENTER);
    lv_label_set_text(ui_cus1suglab, "SUGAR                 :");
    lv_obj_set_style_text_font(ui_cus1suglab, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_cus1BPlab = lv_label_create(ui_cus1panel);
    lv_obj_set_width(ui_cus1BPlab, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_cus1BPlab, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_cus1BPlab, -155);
    lv_obj_set_y(ui_cus1BPlab, 100);
    lv_obj_set_align(ui_cus1BPlab, LV_ALIGN_CENTER);
    lv_label_set_text(ui_cus1BPlab, "BAKING POWDER     :");
    lv_obj_set_style_text_font(ui_cus1BPlab, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_cus1CPlab = lv_label_create(ui_cus1panel);
    lv_obj_set_width(ui_cus1CPlab, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_cus1CPlab, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_cus1CPlab, -155);
    lv_obj_set_y(ui_cus1CPlab, 200);
    lv_obj_set_align(ui_cus1CPlab, LV_ALIGN_CENTER);
    lv_label_set_text(ui_cus1CPlab, "COCOA POWDER     :");
    lv_obj_set_style_text_font(ui_cus1CPlab, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_g_flour_cus1 = lv_label_create(ui_cus1panel);
    lv_obj_set_width(ui_g_flour_cus1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_g_flour_cus1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_g_flour_cus1, 212);
    lv_obj_set_y(ui_g_flour_cus1, -100);
    lv_obj_set_align(ui_g_flour_cus1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_g_flour_cus1, "g");

    ui_g_sug_cus1 = lv_label_create(ui_cus1panel);
    lv_obj_set_width(ui_g_sug_cus1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_g_sug_cus1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_g_sug_cus1, 212);
    lv_obj_set_y(ui_g_sug_cus1, 0);
    lv_obj_set_align(ui_g_sug_cus1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_g_sug_cus1, "g");

    ui_g_bp_cus1 = lv_label_create(ui_cus1panel);
    lv_obj_set_width(ui_g_bp_cus1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_g_bp_cus1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_g_bp_cus1, 212);
    lv_obj_set_y(ui_g_bp_cus1, 100);
    lv_obj_set_align(ui_g_bp_cus1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_g_bp_cus1, "g");

    ui_g_cp_cus1 = lv_label_create(ui_cus1panel);
    lv_obj_set_width(ui_g_cp_cus1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_g_cp_cus1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_g_cp_cus1, 212);
    lv_obj_set_y(ui_g_cp_cus1, 200);
    lv_obj_set_align(ui_g_cp_cus1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_g_cp_cus1, "g");

    ui_cus1nametext = lv_textarea_create(ui_cus1panel);
    lv_obj_set_width(ui_cus1nametext, 212);
    lv_obj_set_height(ui_cus1nametext, 42);
    lv_obj_set_x(ui_cus1nametext, 82);
    lv_obj_set_y(ui_cus1nametext, -200);
    lv_obj_set_align(ui_cus1nametext, LV_ALIGN_CENTER);
    lv_textarea_set_max_length(ui_cus1nametext, 10);
    lv_textarea_set_placeholder_text(ui_cus1nametext, "Enter name of recipe...");
    lv_obj_set_style_text_color(ui_cus1nametext, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_cus1nametext, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_cus1nametext, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_cus1nametext, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_cus1nametext, lv_color_hex(0xFF66FE), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_cus1nametext, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_cus1nametext, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_cus1nametext, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_cus1nametext, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_cus1nametext, LV_BORDER_SIDE_FULL, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_cus1nametext, lv_color_hex(0x8C8C8C), LV_PART_MAIN | LV_STATE_EDITED);
    lv_obj_set_style_bg_opa(ui_cus1nametext, 255, LV_PART_MAIN | LV_STATE_EDITED);
    lv_obj_set_style_text_color(ui_cus1nametext, lv_color_hex(0x050505), LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui_cus1nametext, 255, LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui_cus1nametext, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(ui_cus1nametext, 255, LV_PART_MAIN | LV_STATE_FOCUSED);


    lv_obj_set_style_text_color(ui_cus1nametext, lv_color_hex(0x000000), LV_PART_TEXTAREA_PLACEHOLDER | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_cus1nametext, 255, LV_PART_TEXTAREA_PLACEHOLDER | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_cus1nametext, lv_color_hex(0x050505), LV_PART_TEXTAREA_PLACEHOLDER | LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui_cus1nametext, 255, LV_PART_TEXTAREA_PLACEHOLDER | LV_STATE_FOCUSED);

    ui_cus1namelab = lv_label_create(ui_cus1panel);
    lv_obj_set_width(ui_cus1namelab, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_cus1namelab, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_cus1namelab, -128);
    lv_obj_set_y(ui_cus1namelab, -200);
    lv_obj_set_align(ui_cus1namelab, LV_ALIGN_CENTER);
    lv_label_set_text(ui_cus1namelab, "NAME                 :");
    lv_obj_set_style_text_font(ui_cus1namelab, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_cus1sugtext = lv_textarea_create(ui_cus1panel);
    lv_obj_set_width(ui_cus1sugtext, 212);
    lv_obj_set_height(ui_cus1sugtext, 42);
    lv_obj_set_x(ui_cus1sugtext, 82);
    lv_obj_set_y(ui_cus1sugtext, 0);
    lv_obj_set_align(ui_cus1sugtext, LV_ALIGN_CENTER);
    if("0,1,2,3,4,5,6,7,8,9,." == "") lv_textarea_set_accepted_chars(ui_cus1sugtext, NULL);
    else lv_textarea_set_accepted_chars(ui_cus1sugtext, "0,1,2,3,4,5,6,7,8,9,.");
    lv_textarea_set_max_length(ui_cus1sugtext, 5);
    lv_textarea_set_text(ui_cus1sugtext, "375");
    lv_textarea_set_placeholder_text(ui_cus1sugtext, "Enter value in grams...");
    lv_obj_set_style_text_color(ui_cus1sugtext, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_cus1sugtext, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_cus1sugtext, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_cus1sugtext, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_cus1sugtext, lv_color_hex(0xFF66FE), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_cus1sugtext, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_cus1sugtext, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_cus1sugtext, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_cus1sugtext, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_cus1sugtext, LV_BORDER_SIDE_FULL, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_cus1sugtext, lv_color_hex(0x8C8C8C), LV_PART_MAIN | LV_STATE_EDITED);
    lv_obj_set_style_bg_opa(ui_cus1sugtext, 255, LV_PART_MAIN | LV_STATE_EDITED);
    lv_obj_set_style_text_color(ui_cus1sugtext, lv_color_hex(0x050505), LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui_cus1sugtext, 255, LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui_cus1sugtext, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(ui_cus1sugtext, 255, LV_PART_MAIN | LV_STATE_FOCUSED);


    lv_obj_set_style_text_color(ui_cus1sugtext, lv_color_hex(0x000000), LV_PART_TEXTAREA_PLACEHOLDER | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_cus1sugtext, 255, LV_PART_TEXTAREA_PLACEHOLDER | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_cus1sugtext, lv_color_hex(0x050505), LV_PART_TEXTAREA_PLACEHOLDER | LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui_cus1sugtext, 255, LV_PART_TEXTAREA_PLACEHOLDER | LV_STATE_FOCUSED);

    ui_cus1BPtext = lv_textarea_create(ui_cus1panel);
    lv_obj_set_width(ui_cus1BPtext, 212);
    lv_obj_set_height(ui_cus1BPtext, 42);
    lv_obj_set_x(ui_cus1BPtext, 82);
    lv_obj_set_y(ui_cus1BPtext, 100);
    lv_obj_set_align(ui_cus1BPtext, LV_ALIGN_CENTER);
    if("0,1,2,3,4,5,6,7,8,9,." == "") lv_textarea_set_accepted_chars(ui_cus1BPtext, NULL);
    else lv_textarea_set_accepted_chars(ui_cus1BPtext, "0,1,2,3,4,5,6,7,8,9,.");
    lv_textarea_set_max_length(ui_cus1BPtext, 5);
    lv_textarea_set_text(ui_cus1BPtext, "375");
    lv_textarea_set_placeholder_text(ui_cus1BPtext, "Enter value in grams...");
    lv_obj_set_style_text_color(ui_cus1BPtext, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_cus1BPtext, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_cus1BPtext, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_cus1BPtext, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_cus1BPtext, lv_color_hex(0xFF66FE), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_cus1BPtext, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_cus1BPtext, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_cus1BPtext, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_cus1BPtext, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_cus1BPtext, LV_BORDER_SIDE_FULL, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_cus1BPtext, lv_color_hex(0x8C8C8C), LV_PART_MAIN | LV_STATE_EDITED);
    lv_obj_set_style_bg_opa(ui_cus1BPtext, 255, LV_PART_MAIN | LV_STATE_EDITED);
    lv_obj_set_style_text_color(ui_cus1BPtext, lv_color_hex(0x050505), LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui_cus1BPtext, 255, LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui_cus1BPtext, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(ui_cus1BPtext, 255, LV_PART_MAIN | LV_STATE_FOCUSED);


    lv_obj_set_style_text_color(ui_cus1BPtext, lv_color_hex(0x000000), LV_PART_TEXTAREA_PLACEHOLDER | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_cus1BPtext, 255, LV_PART_TEXTAREA_PLACEHOLDER | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_cus1BPtext, lv_color_hex(0x050505), LV_PART_TEXTAREA_PLACEHOLDER | LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui_cus1BPtext, 255, LV_PART_TEXTAREA_PLACEHOLDER | LV_STATE_FOCUSED);

    ui_cus1CPtext = lv_textarea_create(ui_cus1panel);
    lv_obj_set_width(ui_cus1CPtext, 212);
    lv_obj_set_height(ui_cus1CPtext, 42);
    lv_obj_set_x(ui_cus1CPtext, 82);
    lv_obj_set_y(ui_cus1CPtext, 200);
    lv_obj_set_align(ui_cus1CPtext, LV_ALIGN_CENTER);
    if("0,1,2,3,4,5,6,7,8,9,." == "") lv_textarea_set_accepted_chars(ui_cus1CPtext, NULL);
    else lv_textarea_set_accepted_chars(ui_cus1CPtext, "0,1,2,3,4,5,6,7,8,9,.");
    lv_textarea_set_max_length(ui_cus1CPtext, 5);
    lv_textarea_set_text(ui_cus1CPtext, "375");
    lv_textarea_set_placeholder_text(ui_cus1CPtext, "Enter value in grams...");
    lv_obj_set_style_text_color(ui_cus1CPtext, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_cus1CPtext, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_cus1CPtext, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_cus1CPtext, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_cus1CPtext, lv_color_hex(0xFF66FE), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_cus1CPtext, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_cus1CPtext, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_cus1CPtext, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_cus1CPtext, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_cus1CPtext, LV_BORDER_SIDE_FULL, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_cus1CPtext, lv_color_hex(0x8C8C8C), LV_PART_MAIN | LV_STATE_EDITED);
    lv_obj_set_style_bg_opa(ui_cus1CPtext, 255, LV_PART_MAIN | LV_STATE_EDITED);
    lv_obj_set_style_text_color(ui_cus1CPtext, lv_color_hex(0x050505), LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui_cus1CPtext, 255, LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui_cus1CPtext, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(ui_cus1CPtext, 255, LV_PART_MAIN | LV_STATE_FOCUSED);


    lv_obj_set_style_text_color(ui_cus1CPtext, lv_color_hex(0x000000), LV_PART_TEXTAREA_PLACEHOLDER | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_cus1CPtext, 255, LV_PART_TEXTAREA_PLACEHOLDER | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_cus1CPtext, lv_color_hex(0x050505), LV_PART_TEXTAREA_PLACEHOLDER | LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui_cus1CPtext, 255, LV_PART_TEXTAREA_PLACEHOLDER | LV_STATE_FOCUSED);

    ui_cus1confirm = lv_imgbtn_create(ui_custom1rep);
    lv_imgbtn_set_src(ui_cus1confirm, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_confirm_icon_png, NULL);
    lv_imgbtn_set_src(ui_cus1confirm, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_confirm_icon_png, NULL);
    lv_imgbtn_set_src(ui_cus1confirm, LV_IMGBTN_STATE_DISABLED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_cus1confirm, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_cus1confirm, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_cus1confirm, LV_IMGBTN_STATE_CHECKED_DISABLED, NULL, &ui__temporary_image, NULL);
    lv_obj_set_height(ui_cus1confirm, 64);
    lv_obj_set_width(ui_cus1confirm, LV_SIZE_CONTENT);   /// -137
    lv_obj_set_x(ui_cus1confirm, -340);
    lv_obj_set_y(ui_cus1confirm, 150);
    lv_obj_set_align(ui_cus1confirm, LV_ALIGN_CENTER);
    lv_obj_set_style_radius(ui_cus1confirm, 40, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_cus1confirm, lv_color_hex(0x36FF00), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_cus1confirm, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_cus1confirm, lv_color_hex(0x0F00FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_cus1confirm, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_cus1keyboard_num = lv_keyboard_create(ui_custom1rep);
    lv_keyboard_set_mode(ui_cus1keyboard_num, LV_KEYBOARD_MODE_NUMBER);
    lv_obj_set_width(ui_cus1keyboard_num, 673);
    lv_obj_set_height(ui_cus1keyboard_num, 221);
    lv_obj_set_x(ui_cus1keyboard_num, 55);
    lv_obj_set_y(ui_cus1keyboard_num, 97);
    lv_obj_set_align(ui_cus1keyboard_num, LV_ALIGN_BOTTOM_MID);
    lv_obj_add_flag(ui_cus1keyboard_num, LV_OBJ_FLAG_HIDDEN);     /// Flags
    lv_obj_set_style_radius(ui_cus1keyboard_num, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_cus1keyboard_num, lv_color_hex(0x5C5C5C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_cus1keyboard_num, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_radius(ui_cus1keyboard_num, 100, LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_cus1keyboard_num, lv_color_hex(0xFF66FE), LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_cus1keyboard_num, 255, LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_cus1keyboard_num, lv_color_hex(0x000000), LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_cus1keyboard_num, 255, LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_cus1keyboard_num, 1, LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_cus1keyboard_num, LV_BORDER_SIDE_FULL, LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_cus1keyboard_num, &lv_font_montserrat_20, LV_PART_ITEMS | LV_STATE_DEFAULT);

    ui_cus1keyboard_let = lv_keyboard_create(ui_custom1rep);
    lv_obj_set_width(ui_cus1keyboard_let, 673);
    lv_obj_set_height(ui_cus1keyboard_let, 221);
    lv_obj_set_x(ui_cus1keyboard_let, 55);
    lv_obj_set_y(ui_cus1keyboard_let, 97);
    lv_obj_set_align(ui_cus1keyboard_let, LV_ALIGN_BOTTOM_MID);
    lv_obj_add_flag(ui_cus1keyboard_let, LV_OBJ_FLAG_HIDDEN);     /// Flags
    lv_obj_set_style_radius(ui_cus1keyboard_let, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_cus1keyboard_let, lv_color_hex(0x5C5C5C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_cus1keyboard_let, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_radius(ui_cus1keyboard_let, 100, LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_cus1keyboard_let, lv_color_hex(0xFF66FE), LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_cus1keyboard_let, 255, LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_cus1keyboard_let, lv_color_hex(0x000000), LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_cus1keyboard_let, 255, LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_cus1keyboard_let, 1, LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_cus1keyboard_let, LV_BORDER_SIDE_FULL, LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_cus1keyboard_let, &lv_font_montserrat_20, LV_PART_ITEMS | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_cus1_recipe, ui_event_cus1_recipe, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_cus1_home, ui_event_cus1_home, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_cus1flourtext, ui_event_cus1flourtext, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_cus1nametext, ui_event_cus1nametext, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_cus1sugtext, ui_event_cus1sugtext, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_cus1BPtext, ui_event_cus1BPtext, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_cus1CPtext, ui_event_cus1CPtext, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_cus1confirm, ui_event_cus1confirm, LV_EVENT_ALL, NULL);
    lv_keyboard_set_textarea(ui_cus1keyboard_num, ui_cus1flourtext);
    lv_keyboard_set_textarea(ui_cus1keyboard_let, ui_cus1flourtext);
    lv_obj_add_event_cb(ui_custom1rep, ui_event_custom1rep, LV_EVENT_ALL, NULL);

}
