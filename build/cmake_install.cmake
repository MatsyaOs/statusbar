# Install script for directory: /run/media/tokyo/DATA/Documents/final/statusbar

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/tokyo/archuseriso/profiles/matsya/airootfs/usr")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "0")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/matsya-statusbar" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/matsya-statusbar")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/matsya-statusbar"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/run/media/tokyo/DATA/Documents/final/statusbar/build/matsya-statusbar")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/matsya-statusbar" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/matsya-statusbar")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/matsya-statusbar")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/share/matsya-statusbar/translations/ar_AA.qm;/usr/share/matsya-statusbar/translations/az_AZ.qm;/usr/share/matsya-statusbar/translations/be_BY.qm;/usr/share/matsya-statusbar/translations/be_Latn.qm;/usr/share/matsya-statusbar/translations/bg_BG.qm;/usr/share/matsya-statusbar/translations/bs_BA.qm;/usr/share/matsya-statusbar/translations/cs_CZ.qm;/usr/share/matsya-statusbar/translations/da_DK.qm;/usr/share/matsya-statusbar/translations/de_DE.qm;/usr/share/matsya-statusbar/translations/en_US.qm;/usr/share/matsya-statusbar/translations/eo_XX.qm;/usr/share/matsya-statusbar/translations/es_ES.qm;/usr/share/matsya-statusbar/translations/es_MX.qm;/usr/share/matsya-statusbar/translations/fa_IR.qm;/usr/share/matsya-statusbar/translations/fi_FI.qm;/usr/share/matsya-statusbar/translations/fr_FR.qm;/usr/share/matsya-statusbar/translations/he_IL.qm;/usr/share/matsya-statusbar/translations/hi_IN.qm;/usr/share/matsya-statusbar/translations/hu_HU.qm;/usr/share/matsya-statusbar/translations/id_ID.qm;/usr/share/matsya-statusbar/translations/ie.qm;/usr/share/matsya-statusbar/translations/it_IT.qm;/usr/share/matsya-statusbar/translations/ja_JP.qm;/usr/share/matsya-statusbar/translations/lt_LT.qm;/usr/share/matsya-statusbar/translations/lv_LV.qm;/usr/share/matsya-statusbar/translations/mg.qm;/usr/share/matsya-statusbar/translations/ml_IN.qm;/usr/share/matsya-statusbar/translations/nb_NO.qm;/usr/share/matsya-statusbar/translations/ne_NP.qm;/usr/share/matsya-statusbar/translations/pl_PL.qm;/usr/share/matsya-statusbar/translations/pt_BR.qm;/usr/share/matsya-statusbar/translations/pt_PT.qm;/usr/share/matsya-statusbar/translations/ro_RO.qm;/usr/share/matsya-statusbar/translations/ru_RU.qm;/usr/share/matsya-statusbar/translations/si_LK.qm;/usr/share/matsya-statusbar/translations/sk_SK.qm;/usr/share/matsya-statusbar/translations/so.qm;/usr/share/matsya-statusbar/translations/sr_RS.qm;/usr/share/matsya-statusbar/translations/sv_SE.qm;/usr/share/matsya-statusbar/translations/sw.qm;/usr/share/matsya-statusbar/translations/ta_IN.qm;/usr/share/matsya-statusbar/translations/tr_TR.qm;/usr/share/matsya-statusbar/translations/uk_UA.qm;/usr/share/matsya-statusbar/translations/uz_UZ.qm;/usr/share/matsya-statusbar/translations/vi_VN.qm;/usr/share/matsya-statusbar/translations/zh_CN.qm;/usr/share/matsya-statusbar/translations/zh_TW.qm")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/share/matsya-statusbar/translations" TYPE FILE FILES
    "/run/media/tokyo/DATA/Documents/final/statusbar/build/ar_AA.qm"
    "/run/media/tokyo/DATA/Documents/final/statusbar/build/az_AZ.qm"
    "/run/media/tokyo/DATA/Documents/final/statusbar/build/be_BY.qm"
    "/run/media/tokyo/DATA/Documents/final/statusbar/build/be_Latn.qm"
    "/run/media/tokyo/DATA/Documents/final/statusbar/build/bg_BG.qm"
    "/run/media/tokyo/DATA/Documents/final/statusbar/build/bs_BA.qm"
    "/run/media/tokyo/DATA/Documents/final/statusbar/build/cs_CZ.qm"
    "/run/media/tokyo/DATA/Documents/final/statusbar/build/da_DK.qm"
    "/run/media/tokyo/DATA/Documents/final/statusbar/build/de_DE.qm"
    "/run/media/tokyo/DATA/Documents/final/statusbar/build/en_US.qm"
    "/run/media/tokyo/DATA/Documents/final/statusbar/build/eo_XX.qm"
    "/run/media/tokyo/DATA/Documents/final/statusbar/build/es_ES.qm"
    "/run/media/tokyo/DATA/Documents/final/statusbar/build/es_MX.qm"
    "/run/media/tokyo/DATA/Documents/final/statusbar/build/fa_IR.qm"
    "/run/media/tokyo/DATA/Documents/final/statusbar/build/fi_FI.qm"
    "/run/media/tokyo/DATA/Documents/final/statusbar/build/fr_FR.qm"
    "/run/media/tokyo/DATA/Documents/final/statusbar/build/he_IL.qm"
    "/run/media/tokyo/DATA/Documents/final/statusbar/build/hi_IN.qm"
    "/run/media/tokyo/DATA/Documents/final/statusbar/build/hu_HU.qm"
    "/run/media/tokyo/DATA/Documents/final/statusbar/build/id_ID.qm"
    "/run/media/tokyo/DATA/Documents/final/statusbar/build/ie.qm"
    "/run/media/tokyo/DATA/Documents/final/statusbar/build/it_IT.qm"
    "/run/media/tokyo/DATA/Documents/final/statusbar/build/ja_JP.qm"
    "/run/media/tokyo/DATA/Documents/final/statusbar/build/lt_LT.qm"
    "/run/media/tokyo/DATA/Documents/final/statusbar/build/lv_LV.qm"
    "/run/media/tokyo/DATA/Documents/final/statusbar/build/mg.qm"
    "/run/media/tokyo/DATA/Documents/final/statusbar/build/ml_IN.qm"
    "/run/media/tokyo/DATA/Documents/final/statusbar/build/nb_NO.qm"
    "/run/media/tokyo/DATA/Documents/final/statusbar/build/ne_NP.qm"
    "/run/media/tokyo/DATA/Documents/final/statusbar/build/pl_PL.qm"
    "/run/media/tokyo/DATA/Documents/final/statusbar/build/pt_BR.qm"
    "/run/media/tokyo/DATA/Documents/final/statusbar/build/pt_PT.qm"
    "/run/media/tokyo/DATA/Documents/final/statusbar/build/ro_RO.qm"
    "/run/media/tokyo/DATA/Documents/final/statusbar/build/ru_RU.qm"
    "/run/media/tokyo/DATA/Documents/final/statusbar/build/si_LK.qm"
    "/run/media/tokyo/DATA/Documents/final/statusbar/build/sk_SK.qm"
    "/run/media/tokyo/DATA/Documents/final/statusbar/build/so.qm"
    "/run/media/tokyo/DATA/Documents/final/statusbar/build/sr_RS.qm"
    "/run/media/tokyo/DATA/Documents/final/statusbar/build/sv_SE.qm"
    "/run/media/tokyo/DATA/Documents/final/statusbar/build/sw.qm"
    "/run/media/tokyo/DATA/Documents/final/statusbar/build/ta_IN.qm"
    "/run/media/tokyo/DATA/Documents/final/statusbar/build/tr_TR.qm"
    "/run/media/tokyo/DATA/Documents/final/statusbar/build/uk_UA.qm"
    "/run/media/tokyo/DATA/Documents/final/statusbar/build/uz_UZ.qm"
    "/run/media/tokyo/DATA/Documents/final/statusbar/build/vi_VN.qm"
    "/run/media/tokyo/DATA/Documents/final/statusbar/build/zh_CN.qm"
    "/run/media/tokyo/DATA/Documents/final/statusbar/build/zh_TW.qm"
    )
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/run/media/tokyo/DATA/Documents/final/statusbar/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
