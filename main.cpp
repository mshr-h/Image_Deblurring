#include "include/image.h"
#include "include/image_qt.h"

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("./Image_Deblurring in.png out.png\n");
        return 0;
    }

    auto in = QImage_to_img_rgb(new QImage(argv[1]));

    img_rgb_destruct(in);

    return 0;
}
