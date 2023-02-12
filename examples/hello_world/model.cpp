/* Copyright 2020 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

// Automatically created from a TensorFlow Lite flatbuffer using the command:
// xxd -i model.tflite > model.cc

// This is a standard TensorFlow Lite model file that has been converted into a
// C data array, so it can be easily compiled into a binary for devices that
// don't have a file system.

// See train/README.md for a full description of the creation process.

#include "model.h"

// Keep model aligned to 8 bytes to guarantee aligned 64-bit accesses.
// alignas(8) const unsigned char g_model[] = {
//     0x1c, 0x00, 0x00, 0x00, 0x54, 0x46, 0x4c, 0x33, 0x14, 0x00, 0x20, 0x00,
//     0x1c, 0x00, 0x18, 0x00, 0x14, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x00, 0x00,
//     0x08, 0x00, 0x04, 0x00, 0x14, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00,
//     0x98, 0x00, 0x00, 0x00, 0xc8, 0x00, 0x00, 0x00, 0x1c, 0x03, 0x00, 0x00,
//     0x2c, 0x03, 0x00, 0x00, 0x30, 0x09, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
//     0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x60, 0xf7, 0xff, 0xff,
//     0x10, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00,
//     0x44, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x73, 0x65, 0x72, 0x76,
//     0x65, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x73, 0x65, 0x72, 0x76,
//     0x69, 0x6e, 0x67, 0x5f, 0x64, 0x65, 0x66, 0x61, 0x75, 0x6c, 0x74, 0x00,
//     0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xbc, 0xff, 0xff, 0xff,
//     0x09, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00,
//     0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x34, 0x00, 0x01, 0x00, 0x00, 0x00,
//     0x04, 0x00, 0x00, 0x00, 0x76, 0xfd, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00,
//     0x0d, 0x00, 0x00, 0x00, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x32, 0x5f,
//     0x69, 0x6e, 0x70, 0x75, 0x74, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
//     0x0c, 0x00, 0x00, 0x00, 0x08, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x04, 0x00,
//     0x08, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
//     0x13, 0x00, 0x00, 0x00, 0x6d, 0x69, 0x6e, 0x5f, 0x72, 0x75, 0x6e, 0x74,
//     0x69, 0x6d, 0x65, 0x5f, 0x76, 0x65, 0x72, 0x73, 0x69, 0x6f, 0x6e, 0x00,
//     0x0c, 0x00, 0x00, 0x00, 0x50, 0x02, 0x00, 0x00, 0x48, 0x02, 0x00, 0x00,
//     0x34, 0x02, 0x00, 0x00, 0xdc, 0x01, 0x00, 0x00, 0x8c, 0x01, 0x00, 0x00,
//     0x6c, 0x01, 0x00, 0x00, 0x5c, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00,
//     0x34, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00,
//     0x04, 0x00, 0x00, 0x00, 0xfa, 0xfd, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00,
//     0x10, 0x00, 0x00, 0x00, 0x31, 0x2e, 0x35, 0x2e, 0x30, 0x00, 0x00, 0x00,
//     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0xfd, 0xff, 0xff,
//     0x88, 0xfd, 0xff, 0xff, 0x8c, 0xfd, 0xff, 0xff, 0x22, 0xfe, 0xff, 0xff,
//     0x04, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x21, 0xa5, 0x8b, 0xca,
//     0x5e, 0x1d, 0xce, 0x42, 0x9d, 0xce, 0x1f, 0xb0, 0xdf, 0x54, 0x2f, 0x81,
//     0x3e, 0xfe, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00,
//     0xee, 0xfc, 0x00, 0xec, 0x05, 0x17, 0xef, 0xec, 0xe6, 0xf8, 0x03, 0x01,
//     0x00, 0xfa, 0xf8, 0xf5, 0xdc, 0xeb, 0x27, 0x14, 0xf1, 0xde, 0xe2, 0xdb,
//     0xf0, 0xde, 0x31, 0x06, 0x02, 0xe6, 0xee, 0xf9, 0x00, 0x16, 0x07, 0xe0,
//     0xfe, 0xff, 0xe9, 0x06, 0xe7, 0xef, 0x81, 0x1b, 0x18, 0xea, 0xc9, 0x01,
//     0x0f, 0x00, 0xda, 0xf7, 0x0e, 0xec, 0x13, 0x1f, 0x04, 0x13, 0xb4, 0xe6,
//     0xfd, 0x06, 0xb9, 0xe0, 0x0d, 0xec, 0xf0, 0xde, 0xeb, 0xf7, 0x05, 0x26,
//     0x1a, 0xe4, 0x6f, 0x1a, 0xea, 0x1e, 0x35, 0xdf, 0x1a, 0xf3, 0xf1, 0x19,
//     0x0f, 0x03, 0x1b, 0xe1, 0xde, 0x13, 0xf6, 0x19, 0xff, 0xf6, 0x1b, 0x18,
//     0xf0, 0x1c, 0xda, 0x1b, 0x1b, 0x20, 0xe5, 0x1a, 0xf5, 0xff, 0x96, 0x0b,
//     0x00, 0x01, 0xcd, 0xde, 0x0d, 0xf6, 0x16, 0xe3, 0xed, 0xfc, 0x0e, 0xe9,
//     0xfa, 0xeb, 0x5c, 0xfc, 0x1d, 0x02, 0x5b, 0xe2, 0xe1, 0xf5, 0x15, 0xec,
//     0xf4, 0x00, 0x13, 0x05, 0xec, 0x0c, 0x1d, 0x14, 0x0e, 0xe7, 0x0b, 0xf4,
//     0x19, 0x00, 0xd7, 0x05, 0x27, 0x02, 0x15, 0xea, 0xea, 0x02, 0x9b, 0x00,
//     0x0c, 0xfa, 0xe8, 0xea, 0xfd, 0x00, 0x14, 0xfd, 0x0b, 0x02, 0xef, 0xee,
//     0x06, 0xee, 0x01, 0x0d, 0x06, 0xe6, 0xf7, 0x11, 0xf7, 0x09, 0xf8, 0xf1,
//     0x21, 0xff, 0x0e, 0xf3, 0xec, 0x12, 0x26, 0x1d, 0xf2, 0xe9, 0x28, 0x18,
//     0xe0, 0xfb, 0xf3, 0xf4, 0x05, 0x1d, 0x1d, 0xfb, 0xfd, 0x1e, 0xfc, 0x11,
//     0xe8, 0x07, 0x09, 0x03, 0x12, 0xf2, 0x36, 0xfb, 0xdc, 0x1c, 0xf9, 0xef,
//     0xf3, 0xe7, 0x6f, 0x0c, 0x1d, 0x00, 0x45, 0xfd, 0x0e, 0xf0, 0x0b, 0x19,
//     0x1a, 0xfa, 0xe0, 0x19, 0x1f, 0x13, 0x36, 0x1c, 0x12, 0xeb, 0x3b, 0x0c,
//     0xb4, 0xcb, 0xe6, 0x13, 0xfa, 0xeb, 0xf1, 0x06, 0x1c, 0xfa, 0x18, 0xe5,
//     0xeb, 0xcb, 0x0c, 0xf4, 0x4a, 0xff, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00,
//     0x10, 0x00, 0x00, 0x00, 0x75, 0x1c, 0x11, 0xe1, 0x0c, 0x81, 0xa5, 0x42,
//     0xfe, 0xd5, 0xd4, 0xb2, 0x61, 0x78, 0x19, 0xdf, 0x66, 0xff, 0xff, 0xff,
//     0x04, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
//     0x77, 0x0b, 0x00, 0x00, 0x53, 0xf6, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00,
//     0x77, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
//     0xd3, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
//     0x72, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2f, 0x07, 0x00, 0x00,
//     0x67, 0xf5, 0xff, 0xff, 0x34, 0xf0, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00,
//     0xb2, 0xff, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,
//     0x00, 0x00, 0x00, 0x00, 0xb5, 0x04, 0x00, 0x00, 0x78, 0x0a, 0x00, 0x00,
//     0x2d, 0x06, 0x00, 0x00, 0x71, 0xf8, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00,
//     0x9a, 0x0a, 0x00, 0x00, 0xfe, 0xf7, 0xff, 0xff, 0x0e, 0x05, 0x00, 0x00,
//     0xd4, 0x09, 0x00, 0x00, 0x47, 0xfe, 0xff, 0xff, 0xb6, 0x04, 0x00, 0x00,
//     0x00, 0x00, 0x00, 0x00, 0xac, 0xf7, 0xff, 0xff, 0x4b, 0xf9, 0xff, 0xff,
//     0x4a, 0x05, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x08, 0x00, 0x04, 0x00,
//     0x06, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
//     0x8c, 0xef, 0xff, 0xff, 0x84, 0xff, 0xff, 0xff, 0x88, 0xff, 0xff, 0xff,
//     0x0f, 0x00, 0x00, 0x00, 0x4d, 0x4c, 0x49, 0x52, 0x20, 0x43, 0x6f, 0x6e,
//     0x76, 0x65, 0x72, 0x74, 0x65, 0x64, 0x2e, 0x00, 0x01, 0x00, 0x00, 0x00,
//     0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x18, 0x00, 0x14, 0x00,
//     0x10, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x04, 0x00, 0x0e, 0x00, 0x00, 0x00,
//     0x14, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0xdc, 0x00, 0x00, 0x00,
//     0xe0, 0x00, 0x00, 0x00, 0xe4, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
//     0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
//     0x84, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
//     0x96, 0xff, 0xff, 0xff, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08,
//     0x10, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x04, 0x00, 0x04, 0x00,
//     0x04, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
//     0x03, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
//     0x01, 0x00, 0x00, 0x00, 0xca, 0xff, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00,
//     0x00, 0x00, 0x00, 0x08, 0x10, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00,
//     0xba, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00,
//     0x08, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00,
//     0x05, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00,
//     0x16, 0x00, 0x00, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x0b, 0x00, 0x04, 0x00,
//     0x0e, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08,
//     0x18, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00,
//     0x08, 0x00, 0x07, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
//     0x01, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
//     0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
//     0x01, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
//     0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x4c, 0x04, 0x00, 0x00,
//     0xd0, 0x03, 0x00, 0x00, 0x68, 0x03, 0x00, 0x00, 0x0c, 0x03, 0x00, 0x00,
//     0x98, 0x02, 0x00, 0x00, 0x24, 0x02, 0x00, 0x00, 0xb0, 0x01, 0x00, 0x00,
//     0x24, 0x01, 0x00, 0x00, 0x98, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
//     0xf0, 0xfb, 0xff, 0xff, 0x18, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00,
//     0x54, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09,
//     0x6c, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff,
//     0x01, 0x00, 0x00, 0x00, 0xdc, 0xfb, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00,
//     0x18, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00,
//     0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
//     0x01, 0x00, 0x00, 0x00, 0x4a, 0xce, 0x0a, 0x3c, 0x01, 0x00, 0x00, 0x00,
//     0x34, 0x84, 0x85, 0x3f, 0x01, 0x00, 0x00, 0x00, 0xc5, 0x02, 0x8f, 0xbf,
//     0x1e, 0x00, 0x00, 0x00, 0x53, 0x74, 0x61, 0x74, 0x65, 0x66, 0x75, 0x6c,
//     0x50, 0x61, 0x72, 0x74, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x65, 0x64, 0x43,
//     0x61, 0x6c, 0x6c, 0x3a, 0x30, 0x5f, 0x69, 0x6e, 0x74, 0x38, 0x00, 0x00,
//     0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
//     0x80, 0xfc, 0xff, 0xff, 0x18, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00,
//     0x54, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09,
//     0x64, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff,
//     0x10, 0x00, 0x00, 0x00, 0x6c, 0xfc, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00,
//     0x18, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00,
//     0x01, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
//     0x01, 0x00, 0x00, 0x00, 0x93, 0xd0, 0xc0, 0x3b, 0x01, 0x00, 0x00, 0x00,
//     0xc2, 0x0f, 0xc0, 0x3f, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
//     0x14, 0x00, 0x00, 0x00, 0x74, 0x66, 0x6c, 0x2e, 0x66, 0x75, 0x6c, 0x6c,
//     0x79, 0x5f, 0x63, 0x6f, 0x6e, 0x6e, 0x65, 0x63, 0x74, 0x65, 0x64, 0x31,
//     0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
//     0x10, 0x00, 0x00, 0x00, 0x08, 0xfd, 0xff, 0xff, 0x18, 0x00, 0x00, 0x00,
//     0x20, 0x00, 0x00, 0x00, 0x58, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
//     0x00, 0x00, 0x00, 0x09, 0x64, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
//     0xff, 0xff, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00, 0xf4, 0xfc, 0xff, 0xff,
//     0x10, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00,
//     0x24, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0xff,
//     0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
//     0xe0, 0xdb, 0x47, 0x3c, 0x01, 0x00, 0x00, 0x00, 0x04, 0x14, 0x47, 0x40,
//     0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00,
//     0x74, 0x66, 0x6c, 0x2e, 0x66, 0x75, 0x6c, 0x6c, 0x79, 0x5f, 0x63, 0x6f,
//     0x6e, 0x6e, 0x65, 0x63, 0x74, 0x65, 0x64, 0x00, 0x02, 0x00, 0x00, 0x00,
//     0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x02, 0xfe, 0xff, 0xff,
//     0x14, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00,
//     0x00, 0x00, 0x00, 0x09, 0x50, 0x00, 0x00, 0x00, 0x6c, 0xfd, 0xff, 0xff,
//     0x10, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00,
//     0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
//     0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xfb, 0x4b, 0x0b, 0x3c,
//     0x01, 0x00, 0x00, 0x00, 0x40, 0x84, 0x4b, 0x3f, 0x01, 0x00, 0x00, 0x00,
//     0x63, 0x35, 0x8a, 0xbf, 0x0d, 0x00, 0x00, 0x00, 0x73, 0x74, 0x64, 0x2e,
//     0x63, 0x6f, 0x6e, 0x73, 0x74, 0x61, 0x6e, 0x74, 0x32, 0x00, 0x00, 0x00,
//     0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
//     0x72, 0xfe, 0xff, 0xff, 0x14, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00,
//     0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x50, 0x00, 0x00, 0x00,
//     0xdc, 0xfd, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00,
//     0x1c, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
//     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
//     0x60, 0x01, 0x4f, 0x3c, 0x01, 0x00, 0x00, 0x00, 0x47, 0x6d, 0xb3, 0x3f,
//     0x01, 0x00, 0x00, 0x00, 0x5d, 0x63, 0xcd, 0xbf, 0x0d, 0x00, 0x00, 0x00,
//     0x73, 0x74, 0x64, 0x2e, 0x63, 0x6f, 0x6e, 0x73, 0x74, 0x61, 0x6e, 0x74,
//     0x31, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
//     0x10, 0x00, 0x00, 0x00, 0xe2, 0xfe, 0xff, 0xff, 0x14, 0x00, 0x00, 0x00,
//     0x48, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09,
//     0x50, 0x00, 0x00, 0x00, 0x4c, 0xfe, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00,
//     0x18, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00,
//     0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
//     0x01, 0x00, 0x00, 0x00, 0xd5, 0x6b, 0x8a, 0x3b, 0x01, 0x00, 0x00, 0x00,
//     0xab, 0x49, 0x01, 0x3f, 0x01, 0x00, 0x00, 0x00, 0xfd, 0x56, 0x09, 0xbf,
//     0x0c, 0x00, 0x00, 0x00, 0x73, 0x74, 0x64, 0x2e, 0x63, 0x6f, 0x6e, 0x73,
//     0x74, 0x61, 0x6e, 0x74, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
//     0x10, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x52, 0xff, 0xff, 0xff,
//     0x14, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
//     0x00, 0x00, 0x00, 0x02, 0x3c, 0x00, 0x00, 0x00, 0x44, 0xff, 0xff, 0xff,
//     0x08, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
//     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
//     0x01, 0x00, 0x00, 0x00, 0x28, 0xb3, 0xd9, 0x38, 0x0c, 0x00, 0x00, 0x00,
//     0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x32, 0x2f, 0x62, 0x69, 0x61, 0x73,
//     0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
//     0xaa, 0xff, 0xff, 0xff, 0x14, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,
//     0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x38, 0x00, 0x00, 0x00,
//     0x9c, 0xff, 0xff, 0xff, 0x08, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
//     0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
//     0x01, 0x00, 0x00, 0x00, 0xdd, 0x9b, 0x21, 0x39, 0x0c, 0x00, 0x00, 0x00,
//     0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x33, 0x2f, 0x62, 0x69, 0x61, 0x73,
//     0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
//     0x00, 0x00, 0x0e, 0x00, 0x18, 0x00, 0x14, 0x00, 0x13, 0x00, 0x0c, 0x00,
//     0x08, 0x00, 0x04, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00,
//     0x40, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02,
//     0x48, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00,
//     0x08, 0x00, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
//     0x14, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
//     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
//     0xf4, 0xd4, 0x51, 0x38, 0x0c, 0x00, 0x00, 0x00, 0x64, 0x65, 0x6e, 0x73,
//     0x65, 0x5f, 0x34, 0x2f, 0x62, 0x69, 0x61, 0x73, 0x00, 0x00, 0x00, 0x00,
//     0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x14, 0x00, 0x1c, 0x00,
//     0x18, 0x00, 0x17, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x00, 0x00,
//     0x00, 0x00, 0x04, 0x00, 0x14, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00,
//     0x2c, 0x00, 0x00, 0x00, 0x64, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
//     0x00, 0x00, 0x00, 0x09, 0x84, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
//     0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x14, 0x00,
//     0x10, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x00,
//     0x10, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00,
//     0x24, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0xff,
//     0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
//     0x5d, 0x4f, 0xc9, 0x3c, 0x01, 0x00, 0x00, 0x00, 0x0e, 0x86, 0xc8, 0x40,
//     0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00,
//     0x73, 0x65, 0x72, 0x76, 0x69, 0x6e, 0x67, 0x5f, 0x64, 0x65, 0x66, 0x61,
//     0x75, 0x6c, 0x74, 0x5f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x32, 0x5f,
//     0x69, 0x6e, 0x70, 0x75, 0x74, 0x3a, 0x30, 0x5f, 0x69, 0x6e, 0x74, 0x38,
//     0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
//     0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,
//     0x24, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xd8, 0xff, 0xff, 0xff,
//     0x06, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06,
//     0x0c, 0x00, 0x0c, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00,
//     0x0c, 0x00, 0x00, 0x00, 0x72, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x72,
//     0x0c, 0x00, 0x10, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x08, 0x00, 0x04, 0x00,
//     0x0c, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
//     0x00, 0x00, 0x00, 0x09};
// const int g_model_len = 2488;

alignas(8) const unsigned char g_model[] = {
  0x1c, 0x00, 0x00, 0x00, 0x54, 0x46, 0x4c, 0x33, 0x14, 0x00, 0x20, 0x00,
  0x1c, 0x00, 0x18, 0x00, 0x14, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x04, 0x00, 0x14, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00,
  0x9c, 0x00, 0x00, 0x00, 0xf4, 0x00, 0x00, 0x00, 0x0c, 0x07, 0x00, 0x00,
  0x1c, 0x07, 0x00, 0x00, 0xdc, 0x0a, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00,
  0x10, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x04, 0x00, 0x0a, 0x00, 0x00, 0x00,
  0x0c, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00,
  0x0f, 0x00, 0x00, 0x00, 0x73, 0x65, 0x72, 0x76, 0x69, 0x6e, 0x67, 0x5f,
  0x64, 0x65, 0x66, 0x61, 0x75, 0x6c, 0x74, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x8c, 0xff, 0xff, 0xff, 0x09, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x31, 0x31, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x7e, 0xf9, 0xff, 0xff,
  0x04, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x6f, 0x6e, 0x6e, 0x78,
  0x5f, 0x74, 0x66, 0x5f, 0x5f, 0x74, 0x66, 0x5f, 0x47, 0x65, 0x6d, 0x6d,
  0x5f, 0x30, 0x5f, 0x66, 0x62, 0x32, 0x61, 0x37, 0x36, 0x34, 0x36, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0xdc, 0xff, 0xff, 0xff, 0x0c, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x13, 0x00, 0x00, 0x00, 0x43, 0x4f, 0x4e, 0x56, 0x45, 0x52, 0x53, 0x49,
  0x4f, 0x4e, 0x5f, 0x4d, 0x45, 0x54, 0x41, 0x44, 0x41, 0x54, 0x41, 0x00,
  0x08, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x04, 0x00, 0x08, 0x00, 0x00, 0x00,
  0x0b, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00,
  0x6d, 0x69, 0x6e, 0x5f, 0x72, 0x75, 0x6e, 0x74, 0x69, 0x6d, 0x65, 0x5f,
  0x76, 0x65, 0x72, 0x73, 0x69, 0x6f, 0x6e, 0x00, 0x0d, 0x00, 0x00, 0x00,
  0x14, 0x06, 0x00, 0x00, 0x0c, 0x06, 0x00, 0x00, 0xf8, 0x05, 0x00, 0x00,
  0xa0, 0x05, 0x00, 0x00, 0x50, 0x05, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00,
  0xf0, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, 0x98, 0x00, 0x00, 0x00,
  0x90, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x3a, 0xfa, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00,
  0x54, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x08, 0x00, 0x0e, 0x00,
  0x08, 0x00, 0x04, 0x00, 0x08, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x08, 0x00, 0x04, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x04, 0x00,
  0x0a, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x32, 0x2e, 0x31, 0x31,
  0x2e, 0x30, 0x00, 0x00, 0x9a, 0xfa, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x31, 0x2e, 0x35, 0x2e, 0x30, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0xf7, 0xff, 0xff,
  0x0c, 0xf7, 0xff, 0xff, 0x10, 0xf7, 0xff, 0xff, 0xc2, 0xfa, 0xff, 0xff,
  0x04, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x68, 0xb5, 0x38, 0x3f,
  0x00, 0xf0, 0x65, 0xbe, 0x40, 0x38, 0x15, 0x3b, 0xf8, 0x61, 0x22, 0x3c,
  0x7e, 0x62, 0x47, 0x3e, 0x6a, 0x94, 0xe6, 0x3a, 0xf8, 0x4a, 0x52, 0xbb,
  0xe4, 0x61, 0xea, 0x3e, 0xe2, 0x26, 0x26, 0x3f, 0xf0, 0xef, 0x43, 0x3d,
  0xd8, 0xcc, 0x0c, 0xbf, 0x15, 0x92, 0x9d, 0xbb, 0x61, 0x75, 0x93, 0x3a,
  0x68, 0xbb, 0xc7, 0xbe, 0x74, 0x92, 0xd1, 0xbd, 0xe5, 0x03, 0x97, 0xbd,
  0x0e, 0xfb, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00,
  0xc8, 0x4c, 0xbd, 0xbd, 0x7e, 0xc1, 0x1c, 0x3e, 0xf1, 0x9e, 0xf2, 0x3e,
  0xfb, 0xfb, 0x88, 0xbe, 0x7e, 0xdb, 0x02, 0xbe, 0x9b, 0xbd, 0x9c, 0xbe,
  0xb5, 0x5a, 0x52, 0x3d, 0x39, 0x61, 0x34, 0xbc, 0x4a, 0x7b, 0x52, 0x3e,
  0x3e, 0x3f, 0x33, 0xbf, 0xf1, 0x16, 0x05, 0x3f, 0xc2, 0x35, 0x7f, 0x3e,
  0x4a, 0x36, 0x00, 0x3e, 0xc1, 0x9a, 0x3c, 0xbe, 0xe1, 0x2a, 0xe2, 0x3d,
  0x32, 0x7a, 0x4c, 0x3e, 0x18, 0x27, 0x2f, 0xbd, 0x64, 0x35, 0x6f, 0xbe,
  0xb4, 0xb6, 0x7c, 0x3e, 0x38, 0x59, 0xd0, 0xbd, 0x20, 0xe4, 0x90, 0xbc,
  0xc2, 0x4f, 0x6a, 0x3e, 0x9a, 0x75, 0x31, 0xbe, 0x10, 0x1e, 0x35, 0xbe,
  0x28, 0x85, 0x26, 0x3d, 0x00, 0x11, 0x09, 0xbd, 0xb8, 0xde, 0x6b, 0x3d,
  0x64, 0xb5, 0x56, 0xbe, 0xc0, 0xfe, 0xf4, 0x3b, 0x8c, 0xb7, 0xe3, 0xbd,
  0x28, 0xb4, 0xfb, 0xbd, 0x2e, 0x67, 0x6a, 0xbe, 0x64, 0xbc, 0x07, 0x3e,
  0x96, 0xe5, 0x40, 0xbc, 0x70, 0x67, 0xb0, 0xbe, 0xb5, 0x51, 0x0b, 0x3d,
  0x0c, 0x6e, 0x9a, 0x3d, 0xe3, 0xd0, 0x51, 0xbe, 0xed, 0x89, 0x62, 0x3d,
  0x86, 0xf1, 0x12, 0xbd, 0x92, 0xaa, 0x76, 0x3e, 0xb2, 0x48, 0x48, 0xbc,
  0xbe, 0x3d, 0x55, 0xbe, 0xa6, 0xae, 0x69, 0x3e, 0x70, 0xbd, 0x9e, 0x3c,
  0x5e, 0x25, 0xf6, 0xbc, 0x62, 0x32, 0x95, 0x3d, 0xd5, 0xaf, 0x84, 0x3e,
  0x98, 0x8f, 0x47, 0xbe, 0x0f, 0xdf, 0x2b, 0x3e, 0xb3, 0x7a, 0x82, 0xbe,
  0x7a, 0xa8, 0x07, 0xbd, 0x2c, 0xe2, 0x32, 0xbe, 0xd1, 0x3d, 0x74, 0xbe,
  0xc6, 0x0c, 0x95, 0xbd, 0x14, 0x7c, 0x9e, 0xbd, 0x70, 0xc4, 0x21, 0xbd,
  0xe4, 0x06, 0x79, 0xbd, 0x18, 0xfd, 0x37, 0x3e, 0x2c, 0xbd, 0x14, 0x3e,
  0x6c, 0x39, 0x0f, 0x3e, 0xf0, 0x94, 0x26, 0x3d, 0x61, 0x7d, 0xf2, 0x3d,
  0xe7, 0x81, 0x8e, 0xbd, 0x50, 0xd7, 0xa2, 0x3c, 0x78, 0xbc, 0x52, 0x3d,
  0xf2, 0x43, 0x5f, 0xbe, 0xfa, 0x38, 0x4e, 0xbe, 0x70, 0x16, 0xfb, 0x3c,
  0xf4, 0x51, 0xc8, 0xbd, 0x40, 0x52, 0x96, 0xbb, 0x40, 0xf7, 0x6a, 0xbd,
  0x10, 0x66, 0x1f, 0x3d, 0xbe, 0x8e, 0x26, 0x3e, 0xf8, 0xcc, 0xa9, 0xbd,
  0x34, 0x05, 0x4d, 0x3e, 0xb8, 0x20, 0x4a, 0x3e, 0xc2, 0x7a, 0x44, 0xbe,
  0x9e, 0xb0, 0x45, 0xbe, 0x88, 0x1f, 0x4f, 0xbe, 0x0e, 0x4b, 0x0c, 0xbe,
  0x19, 0x34, 0x0a, 0xbe, 0xaa, 0xf3, 0x33, 0xbd, 0x0c, 0x0c, 0xd4, 0xbd,
  0xf8, 0x57, 0x01, 0xbe, 0x96, 0x28, 0x57, 0xbf, 0x0c, 0x88, 0xd2, 0xbd,
  0x40, 0x43, 0x53, 0x3e, 0x10, 0xc3, 0xbd, 0xbd, 0x00, 0x98, 0x44, 0xbe,
  0xa2, 0xab, 0x9a, 0x3d, 0x60, 0x97, 0x6c, 0xbc, 0x00, 0xfc, 0x43, 0x3e,
  0xde, 0xe4, 0x0a, 0x3e, 0x12, 0xd1, 0x43, 0x3e, 0x9d, 0xd8, 0x65, 0xbe,
  0xb2, 0x92, 0x24, 0x3e, 0xf6, 0xb3, 0x10, 0x3e, 0x0e, 0x33, 0x37, 0xbe,
  0x94, 0x60, 0x2a, 0x3e, 0x9a, 0xe8, 0x3f, 0x3e, 0x35, 0x45, 0x97, 0xbd,
  0x8c, 0x2c, 0x28, 0x3d, 0xbe, 0x90, 0x07, 0xbe, 0x70, 0x47, 0x5f, 0xbe,
  0x3e, 0xeb, 0xb7, 0xbc, 0xaa, 0x50, 0xbd, 0x3c, 0xa4, 0x4f, 0x27, 0xbe,
  0xe0, 0x51, 0xf8, 0x3d, 0xd1, 0xeb, 0x8f, 0xbe, 0xf1, 0x37, 0x3e, 0x3e,
  0x30, 0xf8, 0x23, 0x3e, 0x74, 0x65, 0x8b, 0x3d, 0x6c, 0xb4, 0x4c, 0xbe,
  0xd9, 0x86, 0x04, 0xbe, 0x6b, 0x4d, 0xaf, 0x3e, 0xf0, 0x38, 0x8b, 0x3d,
  0xa0, 0xae, 0xe0, 0xbe, 0xd1, 0xf5, 0x87, 0xbe, 0x8b, 0x20, 0x8c, 0xbe,
  0x00, 0x58, 0x66, 0xbd, 0x53, 0x29, 0xc5, 0x3e, 0xb2, 0xee, 0x4e, 0xbf,
  0xc4, 0x6e, 0x4e, 0x3e, 0x08, 0x76, 0x06, 0xbe, 0x5e, 0x77, 0x4b, 0x3e,
  0x0b, 0xae, 0x06, 0xbf, 0xf3, 0x72, 0xcc, 0xbe, 0xfc, 0x84, 0x2e, 0x3e,
  0x83, 0x5e, 0xe5, 0x3c, 0xc1, 0x32, 0x22, 0xbf, 0xb7, 0x30, 0xc7, 0x3e,
  0x9c, 0x38, 0xe8, 0xbd, 0xdc, 0x23, 0xc7, 0xbe, 0xc9, 0x87, 0xed, 0xbe,
  0x26, 0x00, 0x8a, 0xbe, 0x48, 0x99, 0x3a, 0xbd, 0x3f, 0x44, 0xda, 0x3e,
  0x4e, 0xd6, 0xfd, 0xbe, 0x32, 0x35, 0x6b, 0x3e, 0x98, 0x6f, 0x5f, 0xbd,
  0x4c, 0x01, 0xc2, 0x3e, 0x49, 0x0f, 0x3f, 0xbd, 0x35, 0x7c, 0x3c, 0xbe,
  0x30, 0xa0, 0x70, 0x3d, 0x04, 0x28, 0x54, 0x3e, 0x24, 0x73, 0x27, 0xbe,
  0xd4, 0x78, 0x25, 0xbe, 0xda, 0x95, 0x7a, 0x3e, 0xd4, 0xb2, 0x4d, 0x3e,
  0x24, 0xd2, 0x0e, 0xbe, 0xf6, 0x0b, 0x1a, 0x3e, 0xa0, 0x00, 0x03, 0xbd,
  0xde, 0x65, 0x7c, 0xbe, 0x90, 0xdf, 0x99, 0x3c, 0x94, 0x6c, 0xa5, 0x3d,
  0x78, 0x94, 0x99, 0xbd, 0xc8, 0x1d, 0xb2, 0x3d, 0xe4, 0xe7, 0x5a, 0xbe,
  0x7e, 0x69, 0x31, 0x3e, 0xb0, 0x3f, 0x5a, 0x3e, 0x3b, 0x50, 0x5e, 0xbe,
  0x8c, 0xa9, 0x07, 0xbe, 0x34, 0xac, 0x6b, 0xbe, 0x6e, 0x3a, 0x39, 0xbe,
  0x02, 0x1f, 0x51, 0x3f, 0x54, 0x49, 0x9a, 0x3d, 0x01, 0x54, 0x93, 0xbe,
  0x34, 0x16, 0x3d, 0xbe, 0x0c, 0x90, 0xf4, 0x3b, 0x73, 0xf1, 0xa2, 0x3c,
  0x06, 0x7f, 0x68, 0xbe, 0xac, 0xec, 0xa2, 0x3d, 0x2c, 0x99, 0x60, 0xbe,
  0x62, 0x80, 0xac, 0x3c, 0xeb, 0x30, 0x47, 0x3d, 0xa6, 0x59, 0x6b, 0x3e,
  0xa0, 0xfe, 0x35, 0xbe, 0xa3, 0x5d, 0xd1, 0x3d, 0xf0, 0x90, 0xde, 0x3d,
  0x7c, 0xbf, 0x71, 0xbe, 0xf2, 0xd3, 0x95, 0xbf, 0x8d, 0xf6, 0xde, 0xbc,
  0x75, 0xdd, 0xd6, 0x3c, 0x48, 0x5e, 0xfe, 0xbd, 0x3a, 0xd6, 0x2b, 0xbd,
  0x36, 0xe9, 0x9c, 0xbd, 0x54, 0x97, 0x81, 0x3d, 0xbe, 0x8f, 0x09, 0xbe,
  0xd6, 0x10, 0x74, 0x3d, 0x28, 0xbb, 0xad, 0x3d, 0xe5, 0x13, 0x90, 0xbe,
  0x00, 0xb8, 0x1e, 0x3b, 0xb5, 0xf1, 0x9f, 0xbd, 0x33, 0x20, 0x51, 0xbd,
  0x6c, 0x57, 0xb6, 0x3d, 0xa0, 0x26, 0x96, 0x3d, 0x66, 0x6e, 0xfd, 0xbd,
  0x58, 0x74, 0x9a, 0x3d, 0x63, 0x13, 0x25, 0xbe, 0x9c, 0xab, 0x94, 0xbd,
  0xe6, 0x20, 0x06, 0xbe, 0xd8, 0xe0, 0x80, 0xbe, 0xa0, 0xdb, 0xde, 0x3c,
  0x92, 0xb0, 0x2d, 0xbe, 0xbd, 0x80, 0xe3, 0xbd, 0x86, 0x92, 0x0a, 0xbe,
  0xc5, 0xd3, 0x89, 0x3d, 0x38, 0xe2, 0x57, 0xbe, 0x9c, 0x2f, 0xed, 0x3d,
  0x92, 0x7a, 0x01, 0xbe, 0x29, 0xad, 0xd9, 0x3e, 0xd6, 0x2a, 0x63, 0xbe,
  0xb0, 0xd8, 0x25, 0x3e, 0x34, 0xe0, 0xa6, 0x3e, 0xfd, 0x13, 0x95, 0xbd,
  0xec, 0x2b, 0x6e, 0x3e, 0x6a, 0x7b, 0xdc, 0x3e, 0x54, 0x40, 0x03, 0xbf,
  0xba, 0x5a, 0x1e, 0x3e, 0x94, 0xb6, 0x05, 0x3e, 0x48, 0x5a, 0x61, 0x3e,
  0x64, 0x87, 0x58, 0xbe, 0x80, 0x82, 0xf6, 0x3c, 0x10, 0x4d, 0x6e, 0xbd,
  0x25, 0xd9, 0x15, 0xbe, 0xe6, 0xe9, 0x82, 0x3c, 0xf7, 0x40, 0x3d, 0x3d,
  0x60, 0x2f, 0xa3, 0x3c, 0xfc, 0x08, 0x10, 0xbe, 0x04, 0xf7, 0xfa, 0xbd,
  0x79, 0x39, 0x85, 0x3d, 0xb2, 0x77, 0x60, 0xbe, 0xa6, 0x55, 0x71, 0xbd,
  0xa2, 0x25, 0xd1, 0xbc, 0xa4, 0x71, 0xcf, 0xbd, 0x78, 0x53, 0xba, 0x3d,
  0x74, 0x0f, 0x7e, 0xbb, 0x88, 0x45, 0x1f, 0x3e, 0xa4, 0xcf, 0x2c, 0xbd,
  0x4a, 0x92, 0x21, 0xbe, 0x30, 0xbd, 0x97, 0x3e, 0xf4, 0x7e, 0xc7, 0x3e,
  0x6e, 0x82, 0xea, 0xbc, 0xf6, 0xba, 0x28, 0xbe, 0x00, 0xeb, 0x4d, 0xbf,
  0xe8, 0xdc, 0x3b, 0xbd, 0xa2, 0xfe, 0x0b, 0x3e, 0xdc, 0x27, 0xfd, 0x3d,
  0x3b, 0x87, 0x80, 0xbe, 0x11, 0xe0, 0xf7, 0xbf, 0x86, 0x0b, 0x38, 0xbe,
  0x70, 0x2b, 0x57, 0x3e, 0x2a, 0xea, 0x85, 0x3e, 0x22, 0xd0, 0x90, 0xc0,
  0xe7, 0x9c, 0xd1, 0x3e, 0x1a, 0xff, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00,
  0x40, 0x00, 0x00, 0x00, 0xd0, 0x5b, 0x85, 0x3d, 0x77, 0xb4, 0x56, 0xbd,
  0x49, 0x5b, 0x45, 0x3f, 0x41, 0xb9, 0x0a, 0x3e, 0xc2, 0xb1, 0x04, 0xbf,
  0xbc, 0x4e, 0x30, 0xbf, 0x9e, 0xd9, 0xc8, 0xbe, 0x0f, 0x4d, 0x93, 0x3e,
  0x72, 0xc7, 0x5b, 0xbf, 0xec, 0x47, 0xc9, 0xbc, 0x81, 0x70, 0x5d, 0x3f,
  0x20, 0x1f, 0x78, 0x3d, 0xbe, 0x3a, 0x1a, 0xbf, 0xe5, 0x84, 0x30, 0x3d,
  0x70, 0xc3, 0x90, 0x3e, 0xf5, 0xc1, 0xaa, 0x3e, 0x66, 0xff, 0xff, 0xff,
  0x04, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x0c, 0x21, 0x2d, 0xbf,
  0x89, 0x2e, 0x5b, 0xb9, 0x3b, 0x3b, 0x97, 0xbf, 0x9d, 0x0c, 0xd6, 0x3f,
  0x2c, 0xef, 0xd8, 0xbe, 0xad, 0x52, 0xa6, 0x3f, 0x53, 0x90, 0x60, 0x3e,
  0x7c, 0xd6, 0xba, 0xbe, 0x18, 0x09, 0x1d, 0xbe, 0x97, 0x02, 0xcd, 0x3f,
  0xdb, 0xf1, 0x00, 0xc0, 0xe0, 0x4c, 0x71, 0xbf, 0x44, 0xb6, 0xc4, 0xbe,
  0xc0, 0x5a, 0x92, 0x3f, 0x91, 0x2e, 0x3d, 0xbf, 0x9c, 0xa9, 0xd8, 0xbe,
  0xb2, 0xff, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,
  0xb0, 0x96, 0x90, 0xbf, 0xce, 0x87, 0x78, 0xbe, 0xd6, 0xf2, 0x97, 0x3c,
  0x4f, 0x46, 0x17, 0xbd, 0x56, 0xfa, 0x7a, 0x3e, 0x27, 0xa7, 0x6c, 0xbd,
  0x8d, 0xc1, 0x57, 0x3d, 0x4e, 0xa7, 0x05, 0x3f, 0x29, 0x90, 0x6b, 0x3f,
  0x7a, 0x09, 0x7e, 0xbe, 0xb4, 0x00, 0x26, 0x3e, 0x85, 0x64, 0x90, 0xbe,
  0x7d, 0x00, 0x40, 0x3e, 0xab, 0x1c, 0xfd, 0x3e, 0x36, 0x53, 0x77, 0xbe,
  0xb8, 0x0f, 0x1f, 0xbd, 0x00, 0x00, 0x06, 0x00, 0x08, 0x00, 0x04, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0xb8, 0x53, 0x28, 0xbf, 0x68, 0xfc, 0xff, 0xff, 0x6c, 0xfc, 0xff, 0xff,
  0x0f, 0x00, 0x00, 0x00, 0x4d, 0x4c, 0x49, 0x52, 0x20, 0x43, 0x6f, 0x6e,
  0x76, 0x65, 0x72, 0x74, 0x65, 0x64, 0x2e, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x18, 0x00, 0x14, 0x00,
  0x10, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x04, 0x00, 0x0e, 0x00, 0x00, 0x00,
  0x14, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0xd8, 0x00, 0x00, 0x00,
  0xdc, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x80, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x9a, 0xff, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08,
  0x0c, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0xe4, 0xfc, 0xff, 0xff,
  0x01, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0xca, 0xff, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08,
  0x10, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0xba, 0xff, 0xff, 0xff,
  0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x16, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x0c, 0x00, 0x0b, 0x00, 0x04, 0x00, 0x0e, 0x00, 0x00, 0x00,
  0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x18, 0x00, 0x00, 0x00,
  0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x08, 0x00, 0x07, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00,
  0x07, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x09, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x0a, 0x00, 0x00, 0x00, 0x54, 0x02, 0x00, 0x00, 0x08, 0x02, 0x00, 0x00,
  0xd4, 0x01, 0x00, 0x00, 0xa0, 0x01, 0x00, 0x00, 0x68, 0x01, 0x00, 0x00,
  0x2c, 0x01, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00,
  0x48, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xea, 0xfd, 0xff, 0xff,
  0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x0a, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0xd4, 0xfd, 0xff, 0xff,
  0x11, 0x00, 0x00, 0x00, 0x50, 0x61, 0x72, 0x74, 0x69, 0x74, 0x69, 0x6f,
  0x6e, 0x65, 0x64, 0x43, 0x61, 0x6c, 0x6c, 0x3a, 0x30, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x2a, 0xfe, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00,
  0x14, 0xfe, 0xff, 0xff, 0x25, 0x00, 0x00, 0x00, 0x4d, 0x61, 0x74, 0x4d,
  0x75, 0x6c, 0x5f, 0x31, 0x3b, 0x6f, 0x6e, 0x6e, 0x78, 0x5f, 0x74, 0x66,
  0x5f, 0x70, 0x72, 0x65, 0x66, 0x69, 0x78, 0x5f, 0x2f, 0x52, 0x65, 0x6c,
  0x75, 0x5f, 0x31, 0x3b, 0x61, 0x64, 0x64, 0x5f, 0x31, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x7e, 0xfe, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00,
  0x68, 0xfe, 0xff, 0xff, 0x1f, 0x00, 0x00, 0x00, 0x4d, 0x61, 0x74, 0x4d,
  0x75, 0x6c, 0x3b, 0x6f, 0x6e, 0x6e, 0x78, 0x5f, 0x74, 0x66, 0x5f, 0x70,
  0x72, 0x65, 0x66, 0x69, 0x78, 0x5f, 0x2f, 0x52, 0x65, 0x6c, 0x75, 0x3b,
  0x61, 0x64, 0x64, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0xca, 0xfe, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01,
  0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00,
  0x18, 0x00, 0x00, 0x00, 0xb4, 0xfe, 0xff, 0xff, 0x08, 0x00, 0x00, 0x00,
  0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x5f, 0x32, 0x00, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x02, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00,
  0xec, 0xfe, 0xff, 0xff, 0x08, 0x00, 0x00, 0x00, 0x4d, 0x61, 0x74, 0x4d,
  0x75, 0x6c, 0x5f, 0x31, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x3a, 0xff, 0xff, 0xff,
  0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x05, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x24, 0xff, 0xff, 0xff,
  0x06, 0x00, 0x00, 0x00, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x6e, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00,
  0x58, 0xff, 0xff, 0xff, 0x07, 0x00, 0x00, 0x00, 0x43, 0x6f, 0x6e, 0x73,
  0x74, 0x5f, 0x34, 0x00, 0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x9e, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00,
  0x88, 0xff, 0xff, 0xff, 0x07, 0x00, 0x00, 0x00, 0x43, 0x6f, 0x6e, 0x73,
  0x74, 0x5f, 0x32, 0x00, 0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0xce, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00,
  0xb8, 0xff, 0xff, 0xff, 0x05, 0x00, 0x00, 0x00, 0x43, 0x6f, 0x6e, 0x73,
  0x74, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x16, 0x00, 0x18, 0x00, 0x14, 0x00, 0x00, 0x00, 0x10, 0x00,
  0x0c, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00,
  0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x14, 0x00, 0x00, 0x00,
  0x14, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00, 0x2d, 0x00, 0x00, 0x00,
  0x73, 0x65, 0x72, 0x76, 0x69, 0x6e, 0x67, 0x5f, 0x64, 0x65, 0x66, 0x61,
  0x75, 0x6c, 0x74, 0x5f, 0x6f, 0x6e, 0x6e, 0x78, 0x5f, 0x74, 0x66, 0x5f,
  0x5f, 0x74, 0x66, 0x5f, 0x47, 0x65, 0x6d, 0x6d, 0x5f, 0x30, 0x5f, 0x66,
  0x62, 0x32, 0x61, 0x37, 0x36, 0x34, 0x36, 0x3a, 0x30, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x0c, 0x00,
  0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x00,
  0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09
};
const int g_model_len = 2864;