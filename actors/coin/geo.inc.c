
const GeoLayout yellow_coin_geo[] = {
GEO_SHADOW(SHADOW_CIRCLE_4_VERTS, 0xB4, 80),
        GEO_OPEN_NODE(),
            GEO_ASM(0, geo_rotate_coin),
            GEO_ROTATION_NODE(0x00, 0, 0, 0),
            GEO_OPEN_NODE(),
                GEO_DISPLAY_LIST(LAYER_OPAQUE, coin_000_displaylist_mesh),
            GEO_CLOSE_NODE(),
        GEO_CLOSE_NODE(),
    GEO_END(),
};

const GeoLayout yellow_coin_no_shadow_geo[] = {
GEO_SHADOW(SHADOW_CIRCLE_4_VERTS, 0xB4, 80),
        GEO_OPEN_NODE(),
            GEO_ASM(0, geo_rotate_coin),
            GEO_ROTATION_NODE(0x00, 0, 0, 0),
            GEO_OPEN_NODE(),
                GEO_DISPLAY_LIST(LAYER_OPAQUE, coin_000_displaylist_mesh),
            GEO_CLOSE_NODE(),
        GEO_CLOSE_NODE(),
    GEO_END(),
};

const GeoLayout red_coin_geo[] = {
GEO_SHADOW(SHADOW_CIRCLE_4_VERTS, 0xB4, 80),
        GEO_OPEN_NODE(),
            GEO_ASM(0, geo_rotate_coin),
            GEO_ROTATION_NODE(0x00, 0, 0, 0),
            GEO_OPEN_NODE(),
                GEO_DISPLAY_LIST(LAYER_OPAQUE, coin_002_displaylist_mesh),
            GEO_CLOSE_NODE(),
        GEO_CLOSE_NODE(),
    GEO_END(),
};

const GeoLayout red_coin_no_shadow_geo[] = {
GEO_SHADOW(SHADOW_CIRCLE_4_VERTS, 0xB4, 80),
        GEO_OPEN_NODE(),
            GEO_ASM(0, geo_rotate_coin),
            GEO_ROTATION_NODE(0x00, 0, 0, 0),
            GEO_OPEN_NODE(),
                GEO_DISPLAY_LIST(LAYER_OPAQUE, coin_002_displaylist_mesh),
            GEO_CLOSE_NODE(),
        GEO_CLOSE_NODE(),
    GEO_END(),
};

const GeoLayout blue_coin_geo[] = {
GEO_SHADOW(SHADOW_CIRCLE_4_VERTS, 0xB4, 80),
        GEO_OPEN_NODE(),
            GEO_ASM(0, geo_rotate_coin),
            GEO_ROTATION_NODE(0x00, 0, 0, 0),
            GEO_OPEN_NODE(),
                GEO_DISPLAY_LIST(LAYER_OPAQUE, coin_001_displaylist_mesh),
            GEO_CLOSE_NODE(),
        GEO_CLOSE_NODE(),
    GEO_END(),
};

const GeoLayout blue_coin_no_shadow_geo[] = {
GEO_SHADOW(SHADOW_CIRCLE_4_VERTS, 0xB4, 80),
        GEO_OPEN_NODE(),
            GEO_ASM(0, geo_rotate_coin),
            GEO_ROTATION_NODE(0x00, 0, 0, 0),
            GEO_OPEN_NODE(),
                GEO_DISPLAY_LIST(LAYER_OPAQUE, coin_001_displaylist_mesh),
            GEO_CLOSE_NODE(),
        GEO_CLOSE_NODE(),
    GEO_END(),
};