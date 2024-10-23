#include <cairo.h>

int main() {
    cairo_surface_t *surface;
    cairo_t *cr;

    surface = cairo_image_surface_create(CAIRO_FORMAT_ARGB32, 240, 80);
    cr = cairo_create(surface);

    cairo_set_source_rgb(cr, 0, 0, 0);
    cairo_paint(cr);
    cairo_set_source_rgb(cr, 1, 1, 1);
    cairo_select_font_face(cr, "Sans", CAIRO_FONT_SLANT_NORMAL, CAIRO_FONT_WEIGHT_NORMAL);
    cairo_set_font_size(cr, 40);
    cairo_move_to(cr, 10, 50);
    cairo_show_text(cr, "Hello, Cairo!");

    cairo_destroy(cr);
    cairo_surface_write_to_png(surface, "output.png");
    cairo_surface_destroy(surface);

    return 0;
}
