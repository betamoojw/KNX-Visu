// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.2
// LVGL version: 8.3.6
// Project name: Visu

#include "../ui.h"

void ui_Screen1_screen_init(void)
{
ui_Screen1 = lv_obj_create(NULL);
lv_obj_clear_flag( ui_Screen1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Colorwheel1 = lv_colorwheel_create(ui_Screen1,true);
lv_obj_set_width( ui_Colorwheel1, 200);
lv_obj_set_height( ui_Colorwheel1, 200);
lv_obj_set_align( ui_Colorwheel1, LV_ALIGN_CENTER );
lv_obj_set_style_arc_width(ui_Colorwheel1, 20, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label2 = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_Label2, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label2, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_Label2, LV_ALIGN_CENTER );

}