#ifndef _EGUI_VIEW_TEST_PERFORMANCE_H_
#define _EGUI_VIEW_TEST_PERFORMANCE_H_

#include "widget/egui_view.h"

/* Set up for C function definitions, even when using C++ */
#ifdef __cplusplus
extern "C" {
#endif

enum
{
    EGUI_VIEW_TEST_PERFORMANCE_TYPE_LINE = 0x0,
    EGUI_VIEW_TEST_PERFORMANCE_TYPE_IMAGE_565,
    EGUI_VIEW_TEST_PERFORMANCE_TYPE_IMAGE_565_8,
    EGUI_VIEW_TEST_PERFORMANCE_TYPE_IMAGE_RESIZE_565,
    EGUI_VIEW_TEST_PERFORMANCE_TYPE_IMAGE_RESIZE_565_8,
    EGUI_VIEW_TEST_PERFORMANCE_TYPE_TEXT,
    EGUI_VIEW_TEST_PERFORMANCE_TYPE_TEXT_RECT,
    EGUI_VIEW_TEST_PERFORMANCE_TYPE_RECTANGLE,
    EGUI_VIEW_TEST_PERFORMANCE_TYPE_CIRCLE,
    EGUI_VIEW_TEST_PERFORMANCE_TYPE_ARC,
    EGUI_VIEW_TEST_PERFORMANCE_TYPE_ROUND_RECTANGLE,
    EGUI_VIEW_TEST_PERFORMANCE_TYPE_ROUND_RECTANGLE_CORNERS,
    EGUI_VIEW_TEST_PERFORMANCE_TYPE_RECTANGLE_FILL,
    EGUI_VIEW_TEST_PERFORMANCE_TYPE_CIRCLE_FILL,
    EGUI_VIEW_TEST_PERFORMANCE_TYPE_ARC_FILL,
    EGUI_VIEW_TEST_PERFORMANCE_TYPE_ROUND_RECTANGLE_FILL,
    EGUI_VIEW_TEST_PERFORMANCE_TYPE_ROUND_RECTANGLE_CORNERS_FILL,

    EGUI_VIEW_TEST_PERFORMANCE_TYPE_MAX,
};

typedef struct egui_view_test_performance egui_view_test_performance_t;
struct egui_view_test_performance
{
    egui_view_t base;

    int test_mode;
};

void egui_view_test_performance_init(egui_view_t *self);

/* Ends C function definitions when using C++ */
#ifdef __cplusplus
}
#endif

#endif /* _EGUI_VIEW_TEST_PERFORMANCE_H_ */