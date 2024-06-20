#include "utils.h"

void changeIcons(lv_obj_t ***icon, int len, const lv_img_dsc_t *iconImage)
{
    for (int i = 0; i < len; i++)
    {
        lv_img_set_src(*icon[i], iconImage);
    }
}