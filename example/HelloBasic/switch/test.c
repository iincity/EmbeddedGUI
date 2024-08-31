﻿#include "egui.h"
#include <stdlib.h>
#include "uicode.h"

// views in root
static egui_view_switch_t switch_1;

static char button_str[20] = "Click me!";
static void switch_checked_cb(egui_view_t *self, int is_checked)
{
    EGUI_LOG_INF("Switch checked: %d\n", is_checked);
}

void test_init_ui(void)
{
    // Init all views
    // switch_1
    egui_view_switch_init((egui_view_t *)&switch_1);
    egui_view_set_position((egui_view_t *)&switch_1, 0, 0);
    egui_view_set_size((egui_view_t *)&switch_1, 80, 40);
    egui_view_switch_set_on_checked_listener((egui_view_t *)&switch_1, switch_checked_cb);

    // Add To Root
    egui_core_add_user_root_view((egui_view_t *)&switch_1);

    // Layout childrens of root view
    egui_core_layout_childs_user_root_view(EGUI_LAYOUT_VERTICAL, EGUI_ALIGN_CENTER);
}