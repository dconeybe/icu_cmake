add_library(
  third_party.icu.common
  appendable.cpp
  charstr.cpp
  cmemory.cpp
  cstring.cpp
  putil.cpp
  stringpiece.cpp
  uarrsort.cpp
  uchar.cpp
  ucln_cmn.cpp
  ucmndata.cpp
  ucnv.cpp
  ucnv2022.cpp
  ucnv_bld.cpp
  ucnv_cb.cpp
  ucnv_cnv.cpp
  ucnv_ct.cpp
  ucnv_err.cpp
  ucnv_ext.cpp
  ucnv_io.cpp
  ucnv_lmb.cpp
  ucnv_u16.cpp
  ucnv_u32.cpp
  ucnv_u7.cpp
  ucnv_u8.cpp
  ucnvbocu.cpp
  ucnvhz.cpp
  ucnvisci.cpp
  ucnvlat1.cpp
  ucnvmbcs.cpp
  ucnvscsu.cpp
  udata.cpp
  udatamem.cpp
  udataswp.cpp
  uenum.cpp
  uhash.cpp
  uinvchar.cpp
  umapfile.cpp
  umutex.cpp
  unistr.cpp
  uobject.cpp
  ustr_cnv.cpp
  ustrfmt.cpp
  ustring.cpp
  ustrtrns.cpp
  utf_impl.cpp
  utrace.cpp
  utrie2.cpp
)

target_include_directories(
  third_party.icu.common
  PUBLIC
    "${CMAKE_CURRENT_LIST_DIR}"
)

target_compile_definitions(
  third_party.icu.common
  PUBLIC
    U_COMMON_IMPLEMENTATION
    U_HAVE_STRING_VIEW=1
    UNISTR_FROM_CHAR_EXPLICIT=explicit
    UNISTR_FROM_STRING_EXPLICIT=explicit
    U_NO_DEFAULT_INCLUDE_UTF_HEADERS=1
    U_HIDE_OBSOLETE_UTF_OLD_H=1
)
