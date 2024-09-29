// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.2
// LVGL version: 8.3.11
// Project name: SquareLine_Project

#include "ui.h"

void ui_pancakesrep_screen_init(void)
{
    ui_pancakesrep = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_pancakesrep, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_pancakesrep, lv_color_hex(0x454444), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_pancakesrep, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_pancakesrep, lv_color_hex(0x6E6E6E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_pancakesrep, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_pancakesrep, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_pancakesrep, LV_BORDER_SIDE_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_pancake_rep = lv_imgbtn_create(ui_pancakesrep);
    lv_imgbtn_set_src(ui_pancake_rep, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_kitchen_whisk_icon_png, NULL);
    lv_imgbtn_set_src(ui_pancake_rep, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_kitchen_whisk_icon_png, NULL);
    lv_imgbtn_set_src(ui_pancake_rep, LV_IMGBTN_STATE_DISABLED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_pancake_rep, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_pancake_rep, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_pancake_rep, LV_IMGBTN_STATE_CHECKED_DISABLED, NULL, &ui__temporary_image, NULL);
    lv_obj_set_height(ui_pancake_rep, 72);
    lv_obj_set_width(ui_pancake_rep, LV_SIZE_CONTENT);   /// -137
    lv_obj_set_x(ui_pancake_rep, -340);
    lv_obj_set_y(ui_pancake_rep, -80);
    lv_obj_set_align(ui_pancake_rep, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_pancake_rep, lv_color_hex(0x6E6E6E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_pancake_rep, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_pancake_rep, lv_color_hex(0x0F00FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_pancake_rep, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_pancake_home = lv_imgbtn_create(ui_pancakesrep);
    lv_imgbtn_set_src(ui_pancake_home, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_home_icon_png, NULL);
    lv_imgbtn_set_src(ui_pancake_home, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_home_icon_png, NULL);
    lv_imgbtn_set_src(ui_pancake_home, LV_IMGBTN_STATE_DISABLED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_pancake_home, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_pancake_home, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_pancake_home, LV_IMGBTN_STATE_CHECKED_DISABLED, NULL, &ui__temporary_image, NULL);
    lv_obj_set_height(ui_pancake_home, 79);
    lv_obj_set_width(ui_pancake_home, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_x(ui_pancake_home, -347);
    lv_obj_set_y(ui_pancake_home, -191);
    lv_obj_set_align(ui_pancake_home, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_pancake_home, lv_color_hex(0x6E6E6E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_pancake_home, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_pancake_page = lv_imgbtn_create(ui_pancakesrep);
    lv_imgbtn_set_src(ui_pancake_page, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_pancake_icon_png, NULL);
    lv_imgbtn_set_src(ui_pancake_page, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_pancake_icon_png, NULL);
    lv_imgbtn_set_src(ui_pancake_page, LV_IMGBTN_STATE_DISABLED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_pancake_page, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_pancake_page, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_pancake_page, LV_IMGBTN_STATE_CHECKED_DISABLED, NULL, &ui__temporary_image, NULL);
    lv_obj_set_width(ui_pancake_page, 84);
    lv_obj_set_height(ui_pancake_page, 74);
    lv_obj_set_x(ui_pancake_page, -318);
    lv_obj_set_y(ui_pancake_page, 25);
    lv_obj_set_align(ui_pancake_page, LV_ALIGN_CENTER);
    lv_obj_set_style_radius(ui_pancake_page, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_pancake_page, lv_color_hex(0x007BFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_pancake_page, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_pancake_page, lv_color_hex(0x007BFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_pancake_page, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_pancake_page, 4, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_pancake_page, LV_BORDER_SIDE_FULL, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_pancake_page, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_pancake_page, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_pancake_page, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_pancake_page, 1, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel11 = lv_obj_create(ui_pancakesrep);
    lv_obj_set_width(ui_Panel11, 696);
    lv_obj_set_height(ui_Panel11, 482);
    lv_obj_set_x(ui_Panel11, 60);
    lv_obj_set_y(ui_Panel11, 10);
    lv_obj_set_align(ui_Panel11, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel11, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Panel11, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Panel11, lv_color_hex(0xECE7D6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel11, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Panel11, lv_color_hex(0x007BFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Panel11, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel11, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_Panel11, LV_BORDER_SIDE_TOP, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_pancakesflourlab = lv_label_create(ui_Panel11);
    lv_obj_set_width(ui_pancakesflourlab, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_pancakesflourlab, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_pancakesflourlab, -128);
    lv_obj_set_y(ui_pancakesflourlab, -150);
    lv_obj_set_align(ui_pancakesflourlab, LV_ALIGN_CENTER);
    lv_label_set_text(ui_pancakesflourlab, "FLOUR                 :");
    lv_obj_set_style_text_font(ui_pancakesflourlab, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_pancakesflourtext = lv_textarea_create(ui_Panel11);
    lv_obj_set_width(ui_pancakesflourtext, 212);
    lv_obj_set_height(ui_pancakesflourtext, 42);
    lv_obj_set_x(ui_pancakesflourtext, 82);
    lv_obj_set_y(ui_pancakesflourtext, -150);
    lv_obj_set_align(ui_pancakesflourtext, LV_ALIGN_CENTER);
    if("0,1,2,3,4,5,6,7,8,9,." == "") lv_textarea_set_accepted_chars(ui_pancakesflourtext, NULL);
    else lv_textarea_set_accepted_chars(ui_pancakesflourtext, "0,1,2,3,4,5,6,7,8,9,.");
    lv_textarea_set_max_length(ui_pancakesflourtext, 5);
    lv_textarea_set_text(ui_pancakesflourtext, "187.5");
    lv_textarea_set_placeholder_text(ui_pancakesflourtext, "Enter value in grams...");
    lv_obj_set_style_text_color(ui_pancakesflourtext, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_pancakesflourtext, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_pancakesflourtext, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_pancakesflourtext, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_pancakesflourtext, lv_color_hex(0x007BFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_pancakesflourtext, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_pancakesflourtext, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_pancakesflourtext, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_pancakesflourtext, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_pancakesflourtext, LV_BORDER_SIDE_FULL, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_pancakesflourtext, lv_color_hex(0x8C8C8C), LV_PART_MAIN | LV_STATE_EDITED);
    lv_obj_set_style_bg_opa(ui_pancakesflourtext, 255, LV_PART_MAIN | LV_STATE_EDITED);
    lv_obj_set_style_text_color(ui_pancakesflourtext, lv_color_hex(0x050505), LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui_pancakesflourtext, 255, LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui_pancakesflourtext, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(ui_pancakesflourtext, 255, LV_PART_MAIN | LV_STATE_FOCUSED);


    lv_obj_set_style_text_color(ui_pancakesflourtext, lv_color_hex(0xFFFFFF),
                                LV_PART_TEXTAREA_PLACEHOLDER | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_pancakesflourtext, 255, LV_PART_TEXTAREA_PLACEHOLDER | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_pancakesflourtext, lv_color_hex(0x000000),
                                LV_PART_TEXTAREA_PLACEHOLDER | LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui_pancakesflourtext, 255, LV_PART_TEXTAREA_PLACEHOLDER | LV_STATE_FOCUSED);

    ui_pancakessuglab2 = lv_label_create(ui_Panel11);
    lv_obj_set_width(ui_pancakessuglab2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_pancakessuglab2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_pancakessuglab2, -128);
    lv_obj_set_y(ui_pancakessuglab2, -50);
    lv_obj_set_align(ui_pancakessuglab2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_pancakessuglab2, "SUGAR                 :");
    lv_obj_set_style_text_font(ui_pancakessuglab2, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_pancakesBPlab2 = lv_label_create(ui_Panel11);
    lv_obj_set_width(ui_pancakesBPlab2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_pancakesBPlab2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_pancakesBPlab2, -155);
    lv_obj_set_y(ui_pancakesBPlab2, 50);
    lv_obj_set_align(ui_pancakesBPlab2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_pancakesBPlab2, "BAKING POWDER     :");
    lv_obj_set_style_text_font(ui_pancakesBPlab2, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_pancakessugtext = lv_textarea_create(ui_Panel11);
    lv_obj_set_width(ui_pancakessugtext, 212);
    lv_obj_set_height(ui_pancakessugtext, 42);
    lv_obj_set_x(ui_pancakessugtext, 82);
    lv_obj_set_y(ui_pancakessugtext, -50);
    lv_obj_set_align(ui_pancakessugtext, LV_ALIGN_CENTER);
    if("0,1,2,3,4,5,6,7,8,9,." == "") lv_textarea_set_accepted_chars(ui_pancakessugtext, NULL);
    else lv_textarea_set_accepted_chars(ui_pancakessugtext, "0,1,2,3,4,5,6,7,8,9,.");
    lv_textarea_set_max_length(ui_pancakessugtext, 5);
    lv_textarea_set_text(ui_pancakessugtext, "15");
    lv_textarea_set_placeholder_text(ui_pancakessugtext, "Enter value in grams...");
    lv_obj_set_style_text_color(ui_pancakessugtext, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_pancakessugtext, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_pancakessugtext, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_pancakessugtext, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_pancakessugtext, lv_color_hex(0x007BFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_pancakessugtext, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_pancakessugtext, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_pancakessugtext, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_pancakessugtext, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_pancakessugtext, LV_BORDER_SIDE_FULL, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_pancakessugtext, lv_color_hex(0x030303), LV_PART_MAIN | LV_STATE_EDITED);
    lv_obj_set_style_text_opa(ui_pancakessugtext, 255, LV_PART_MAIN | LV_STATE_EDITED);
    lv_obj_set_style_text_color(ui_pancakessugtext, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui_pancakessugtext, 255, LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui_pancakessugtext, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(ui_pancakessugtext, 255, LV_PART_MAIN | LV_STATE_FOCUSED);


    lv_obj_set_style_text_color(ui_pancakessugtext, lv_color_hex(0xFFFFFF),
                                LV_PART_TEXTAREA_PLACEHOLDER | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_pancakessugtext, 255, LV_PART_TEXTAREA_PLACEHOLDER | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_pancakessugtext, lv_color_hex(0x000000),
                                LV_PART_TEXTAREA_PLACEHOLDER | LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui_pancakessugtext, 255, LV_PART_TEXTAREA_PLACEHOLDER | LV_STATE_FOCUSED);

    ui_pancakesBPtext = lv_textarea_create(ui_Panel11);
    lv_obj_set_width(ui_pancakesBPtext, 212);
    lv_obj_set_height(ui_pancakesBPtext, 42);
    lv_obj_set_x(ui_pancakesBPtext, 83);
    lv_obj_set_y(ui_pancakesBPtext, 50);
    lv_obj_set_align(ui_pancakesBPtext, LV_ALIGN_CENTER);
    if("0,1,2,3,4,5,6,7,8,9,." == "") lv_textarea_set_accepted_chars(ui_pancakesBPtext, NULL);
    else lv_textarea_set_accepted_chars(ui_pancakesBPtext, "0,1,2,3,4,5,6,7,8,9,.");
    lv_textarea_set_max_length(ui_pancakesBPtext, 5);
    lv_textarea_set_text(ui_pancakesBPtext, "1.3");
    lv_textarea_set_placeholder_text(ui_pancakesBPtext, "Enter value in grams...");
    lv_obj_set_style_text_color(ui_pancakesBPtext, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_pancakesBPtext, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_pancakesBPtext, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_pancakesBPtext, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_pancakesBPtext, lv_color_hex(0x007BFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_pancakesBPtext, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_pancakesBPtext, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_pancakesBPtext, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_pancakesBPtext, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_pancakesBPtext, LV_BORDER_SIDE_FULL, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_pancakesBPtext, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui_pancakesBPtext, 255, LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui_pancakesBPtext, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(ui_pancakesBPtext, 255, LV_PART_MAIN | LV_STATE_FOCUSED);


    lv_obj_set_style_text_color(ui_pancakesBPtext, lv_color_hex(0xFFFFFF), LV_PART_TEXTAREA_PLACEHOLDER | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_pancakesBPtext, 255, LV_PART_TEXTAREA_PLACEHOLDER | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_pancakesBPtext, lv_color_hex(0x000000), LV_PART_TEXTAREA_PLACEHOLDER | LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui_pancakesBPtext, 255, LV_PART_TEXTAREA_PLACEHOLDER | LV_STATE_FOCUSED);

    ui_g_flour4 = lv_label_create(ui_Panel11);
    lv_obj_set_width(ui_g_flour4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_g_flour4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_g_flour4, 212);
    lv_obj_set_y(ui_g_flour4, -150);
    lv_obj_set_align(ui_g_flour4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_g_flour4, "g");

    ui_g_sug4 = lv_label_create(ui_Panel11);
    lv_obj_set_width(ui_g_sug4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_g_sug4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_g_sug4, 212);
    lv_obj_set_y(ui_g_sug4, -50);
    lv_obj_set_align(ui_g_sug4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_g_sug4, "g");

    ui_g_bp4 = lv_label_create(ui_Panel11);
    lv_obj_set_width(ui_g_bp4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_g_bp4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_g_bp4, 212);
    lv_obj_set_y(ui_g_bp4, 50);
    lv_obj_set_align(ui_g_bp4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_g_bp4, "g");

    ui_Panel12 = lv_obj_create(ui_Panel11);
    lv_obj_set_width(ui_Panel12, 134);
    lv_obj_set_height(ui_Panel12, 67);
    lv_obj_set_x(ui_Panel12, -309);
    lv_obj_set_y(ui_Panel12, -202);
    lv_obj_set_align(ui_Panel12, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel12, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Panel12, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Panel12, lv_color_hex(0x8C8C8C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel12, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Panel12, lv_color_hex(0x007BFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Panel12, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel12, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_Panel12, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_transform_angle(ui_Panel12, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label17 = lv_label_create(ui_Panel12);
    lv_obj_set_width(ui_Label17, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label17, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label17, 21);
    lv_obj_set_y(ui_Label17, -1);
    lv_obj_set_align(ui_Label17, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label17, "PANCAKES");
    lv_obj_set_style_text_color(ui_Label17, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label17, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label17, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_pancakesconfirm = lv_imgbtn_create(ui_pancakesrep);
    lv_imgbtn_set_src(ui_pancakesconfirm, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_confirm_icon_png, NULL);
    lv_imgbtn_set_src(ui_pancakesconfirm, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_confirm_icon_png, NULL);
    lv_imgbtn_set_src(ui_pancakesconfirm, LV_IMGBTN_STATE_DISABLED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_pancakesconfirm, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_pancakesconfirm, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_pancakesconfirm, LV_IMGBTN_STATE_CHECKED_DISABLED, NULL, &ui__temporary_image, NULL);
    lv_obj_set_height(ui_pancakesconfirm, 64);
    lv_obj_set_width(ui_pancakesconfirm, LV_SIZE_CONTENT);   /// -137
    lv_obj_set_x(ui_pancakesconfirm, -340);
    lv_obj_set_y(ui_pancakesconfirm, 150);
    lv_obj_set_align(ui_pancakesconfirm, LV_ALIGN_CENTER);
    lv_obj_set_style_radius(ui_pancakesconfirm, 40, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_pancakesconfirm, lv_color_hex(0x36FF00), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_pancakesconfirm, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_pancakesconfirm, lv_color_hex(0x0F00FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_pancakesconfirm, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_pancakeskeyboard = lv_keyboard_create(ui_pancakesrep);
    lv_keyboard_set_mode(ui_pancakeskeyboard, LV_KEYBOARD_MODE_NUMBER);
    lv_obj_set_width(ui_pancakeskeyboard, 673);
    lv_obj_set_height(ui_pancakeskeyboard, 228);
    lv_obj_set_x(ui_pancakeskeyboard, 55);
    lv_obj_set_y(ui_pancakeskeyboard, 97);
    lv_obj_set_align(ui_pancakeskeyboard, LV_ALIGN_BOTTOM_MID);
    lv_obj_add_flag(ui_pancakeskeyboard, LV_OBJ_FLAG_HIDDEN);     /// Flags
    lv_obj_set_style_radius(ui_pancakeskeyboard, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_pancakeskeyboard, lv_color_hex(0x5C5C5C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_pancakeskeyboard, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_radius(ui_pancakeskeyboard, 100, LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_pancakeskeyboard, lv_color_hex(0x007BFF), LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_pancakeskeyboard, 255, LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_pancakeskeyboard, lv_color_hex(0x000000), LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_pancakeskeyboard, 255, LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_pancakeskeyboard, 1, LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_pancakeskeyboard, LV_BORDER_SIDE_FULL, LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_pancakeskeyboard, lv_color_hex(0xFFFFFF), LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_pancakeskeyboard, 255, LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_pancakeskeyboard, &lv_font_montserrat_20, LV_PART_ITEMS | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_pancake_rep, ui_event_pancake_rep, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_pancake_home, ui_event_pancake_home, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_pancakesflourtext, ui_event_pancakesflourtext, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_pancakessugtext, ui_event_pancakessugtext, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_pancakesBPtext, ui_event_pancakesBPtext, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_pancakesconfirm, ui_event_pancakesconfirm, LV_EVENT_ALL, NULL);
    lv_keyboard_set_textarea(ui_pancakeskeyboard, ui_pancakesflourtext);
    lv_obj_add_event_cb(ui_pancakesrep, ui_event_pancakesrep, LV_EVENT_ALL, NULL);

}
