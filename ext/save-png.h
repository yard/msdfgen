
#pragma once

#include "../core/Bitmap.h"

namespace msdfgen {

/// Saves the bitmap as a PNG file.
bool savePng(const Bitmap<float> &bitmap, const char *filename);
bool savePng(const Bitmap<FloatRGBA> &bitmap, const char *filename);

}
