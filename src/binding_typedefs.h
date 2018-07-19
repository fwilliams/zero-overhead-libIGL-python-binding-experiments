#ifndef BINDING_TYPEDEFS_H
#define BINDING_TYPEDEFS_H

#include <Eigen/Core>

namespace igl {
namespace pybind {

enum NumpyTypeChar {
  char_f16  = 'e',
  char_f32  = 'f',
  char_f64  = 'd',
  char_f128 = 'g',

  char_i8  = 'b',
  char_i16 = 'h',
  char_i32 = 'i',
  char_i64 = 'l',

  char_u8  = 'B',
  char_u16 = 'H',
  char_u32 = 'I',
  char_u64 = 'L',

  char_c64  = 'F',
  char_c128 = 'D',
  char_c256 = 'G',

  char_object = 'O',
  char_bytes_ = 'S',
  char_unicode = 'U',
  char_void_ = 'V',
};

enum NumpyTypeNum {
  num_f16  = 23,
  num_f32  = 11,
  num_f64  = 12,
  num_f128 = 13,

  num_i8  = 1,
  num_i16 = 3,
  num_i32 = 5,
  num_i64 = 7,

  num_u8  = 2,
  num_u16 = 4,
  num_u32 = 6,
  num_u64 = 8,

  num_c64  = 14,
  num_c128 = 15,
  num_c256 = 16,

  num_object = 17,
  num_bytes_ = 18,
  num_unicode = 19,
  num_void_ = 20,
};

enum TypeId {
  // Row major floats
  type_f32_rm  = 0,
  type_f64_rm  = 1,
  type_f128_rm = 2,
  // Column major floats
  type_f32_cm  = 3,
  type_f64_cm  = 4,
  type_f128_cm = 5,
  // Non contiguous floats
  type_f32_x   = 6,
  type_f64_x   = 7,
  type_f128_x  = 8,


  // Row major signed ints
  type_i8_rm   = 9,
  type_i16_rm  = 10,
  type_i32_rm  = 11,
  type_i64_rm  = 12,
  // Column major signed ints
  type_i8_cm   = 13,
  type_i16_cm  = 14,
  type_i32_cm  = 15,
  type_i64_cm  = 16,
  // Non contiguous signed ints
  type_i8_x    = 17,
  type_i16_x   = 18,
  type_i32_x   = 19,
  type_i64_x   = 20,


  // Row Major unsigned ints
  type_u8_rm   = 21,
  type_u16_rm  = 22,
  type_u32_rm  = 23,
  type_u64_rm  = 24,
  // Column major unsigned ints
  type_u8_cm   = 25,
  type_u16_cm  = 26,
  type_u32_cm  = 27,
  type_u64_cm  = 28,
  // Non contiguous unsigned ints
  type_u8_x    = 29,
  type_u16_x   = 30,
  type_u32_x   = 31,
  type_u64_x   = 32,


  // Row Major complex floats
  type_c64_rm  = 33,
  type_c128_rm = 34,
  type_c256_rm = 35,
  // Column major complex floats
  type_c64_cm  = 36,
  type_c128_cm = 37,
  type_c256_cm = 38,
  // Non contiguous complex floats
  type_c64_x   = 39,
  type_c128_x  = 40,
  type_c256_x  = 41,
};

enum StorageOrder {
  ColMajor = Eigen::ColMajor,
  RowMajor = Eigen::RowMajor,
  NoOrder = Eigen::DontAlign,
};

enum Alignment {
  Aligned = Eigen::Aligned,
  Unaligned = Eigen::Unaligned
};

const std::string type_to_str(char type_char);
int get_type_id(char typechar, StorageOrder so);

} // namespace pybind
} // namespace igl

#endif // BINDING_TYPEDEFS_H
