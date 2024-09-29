SET(SOURCES ui_Home.c
    ui_recipe.c
    ui_cakerep.c
    ui_muffrep.c
    ui_cookrep.c
    ui_brownrep.c
    ui_pancakesrep.c
    ui_breadrep.c
    ui_cupcakesrep.c
    ui_custom1rep.c
    ui_custom2rep.c
    ui_custom3rep.c
    ui.c
    ui_comp_hook.c
    ui_helpers.c
    ui_events.c
    ui_img_home_icon_png.c
    ui_img_kitchen_whisk_icon_png.c
    ui_img_book_label_png.c
    ui_img_cake_icon_png.c
    ui_img_confirm_icon_png.c
    ui_img_muffin_icon_png.c
    ui_img_cookie_half_icon_png.c
    ui_img_chocolate_bar_icon_png.c
    ui_img_pancake_icon_png.c
    ui_img_bread_icon_png.c
    ui_img_cupcake_icon_png.c
    ui_img_add_circle_png.c
    ui_temporary_image.c)

add_library(ui ${SOURCES})
