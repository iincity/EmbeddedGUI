#ifndef _EGUI_VIEW_LABEL_H_
#define _EGUI_VIEW_LABEL_H_

#include "egui_view.h"
#include "core/egui_theme.h"
#include "font/egui_font.h"

/* Set up for C function definitions, even when using C++ */
#ifdef __cplusplus
extern "C" {
#endif

typedef struct egui_view_label egui_view_label_t;
struct egui_view_label
{
    egui_view_t base;

    uint8_t align_type;
    egui_alpha_t alpha;
    egui_color_t color;

    egui_font_t *font;
    const char *text;
};

#define EGUI_VIEW_API_DEFINE_BASE_LABEL(_name, _dispatch_touch_event, _on_touch_event, _on_intercept_touch_event, _compute_scroll, _calculate_layout,          \
                                        _request_layout, _draw, _on_attach_to_window, _on_draw, _on_detach_from_window)                                        \
    EGUI_VIEW_API_DEFINE(_name, _dispatch_touch_event, _on_touch_event, _on_intercept_touch_event, _compute_scroll, _calculate_layout, _request_layout, _draw, \
                         _on_attach_to_window, _on_draw == NULL ? egui_view_label_on_draw : _on_draw, _on_detach_from_window)

void egui_view_label_on_draw(egui_view_t *self);
void egui_view_label_set_font_with_std_height(egui_view_t *self, egui_font_t *font);
void egui_view_label_set_font(egui_view_t *self, egui_font_t *font);
void egui_view_label_set_font_color(egui_view_t *self, egui_color_t color, egui_alpha_t alpha);
void egui_view_label_set_align_type(egui_view_t *self, uint8_t align_type);
void egui_view_label_set_text(egui_view_t *self, const char *text);
int egui_view_label_get_str_size(egui_view_t *self, const void *string, egui_dim_t *width, egui_dim_t *height);
int egui_view_label_get_str_size_with_padding(egui_view_t *self, const void *string, egui_dim_t *width, egui_dim_t *height);
void egui_view_label_init(egui_view_t *self);

/* Ends C function definitions when using C++ */
#ifdef __cplusplus
}
#endif

#endif /* _EGUI_VIEW_LABEL_H_ */
