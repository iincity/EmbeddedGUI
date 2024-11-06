

#include "image/egui_image_std.h"
#include "app_egui_resource_generate.h"

// clang-format off



/**
 * Image File : star.png
 * Format : gray8
 * Alpha Type : 8
 * Re-sized : False
 * Rotation : 0.0
 * options: -i star.png -n star -f gray8 -a 8 -s 0 -ext 1 -s 0
 */





static const egui_image_std_info_t egui_res_image_star_gray8_8_bin_info = {
    .data_buf = (void *)EGUI_EXT_RES_ID_EGUI_RES_IMAGE_STAR_GRAY8_8_DATA,
    .alpha_buf = (void *)EGUI_EXT_RES_ID_EGUI_RES_IMAGE_STAR_GRAY8_8_ALPHA,
    .data_type = EGUI_IMAGE_DATA_TYPE_GRAY8,
    .alpha_type = EGUI_IMAGE_ALPHA_TYPE_8,
    .res_type = EGUI_RESOURCE_TYPE_EXTERNAL,
    .width = 100,
    .height = 100,
};

extern const egui_image_std_t egui_res_image_star_gray8_8_bin;
EGUI_IMAGE_SUB_DEFINE_CONST(egui_image_std_t, egui_res_image_star_gray8_8_bin, &egui_res_image_star_gray8_8_bin_info);




// clang-format on

