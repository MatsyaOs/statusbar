# Install script for directory: /home/tokyo/clone/RebootOS/statusbar-old

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr")
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
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/cutefish-statusbar" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/cutefish-statusbar")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/cutefish-statusbar"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/tokyo/clone/RebootOS/statusbar-old/build/cutefish-statusbar")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/cutefish-statusbar" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/cutefish-statusbar")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/cutefish-statusbar")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/share/cutefish-statusbar/translations/ar_AA.qm;/usr/share/cutefish-statusbar/translations/az_AZ.qm;/usr/share/cutefish-statusbar/translations/be_BY.qm;/usr/share/cutefish-statusbar/translations/be_Latn.qm;/usr/share/cutefish-statusbar/translations/bg_BG.qm;/usr/share/cutefish-statusbar/translations/bs_BA.qm;/usr/share/cutefish-statusbar/translations/cs_CZ.qm;/usr/share/cutefish-statusbar/translations/da_DK.qm;/usr/share/cutefish-statusbar/translations/de_DE.qm;/usr/share/cutefish-statusbar/translations/en_US.qm;/usr/share/cutefish-statusbar/translations/eo_XX.qm;/usr/share/cutefish-statusbar/translations/es_ES.qm;/usr/share/cutefish-statusbar/translations/es_MX.qm;/usr/share/cutefish-statusbar/translations/fa_IR.qm;/usr/share/cutefish-statusbar/translations/fi_FI.qm;/usr/share/cutefish-statusbar/translations/fr_FR.qm;/usr/share/cutefish-statusbar/translations/he_IL.qm;/usr/share/cutefish-statusbar/translations/hi_IN.qm;/usr/share/cutefish-statusbar/translations/hu_HU.qm;/usr/share/cutefish-statusbar/translations/id_ID.qm;/usr/share/cutefish-statusbar/translations/ie.qm;/usr/share/cutefish-statusbar/translations/it_IT.qm;/usr/share/cutefish-statusbar/translations/ja_JP.qm;/usr/share/cutefish-statusbar/translations/lt_LT.qm;/usr/share/cutefish-statusbar/translations/lv_LV.qm;/usr/share/cutefish-statusbar/translations/mg.qm;/usr/share/cutefish-statusbar/translations/ml_IN.qm;/usr/share/cutefish-statusbar/translations/nb_NO.qm;/usr/share/cutefish-statusbar/translations/ne_NP.qm;/usr/share/cutefish-statusbar/translations/pl_PL.qm;/usr/share/cutefish-statusbar/translations/pt_BR.qm;/usr/share/cutefish-statusbar/translations/pt_PT.qm;/usr/share/cutefish-statusbar/translations/ro_RO.qm;/usr/share/cutefish-statusbar/translations/ru_RU.qm;/usr/share/cutefish-statusbar/translations/si_LK.qm;/usr/share/cutefish-statusbar/translations/sk_SK.qm;/usr/share/cutefish-statusbar/translations/so.qm;/usr/share/cutefish-statusbar/translations/sr_RS.qm;/usr/share/cutefish-statusbar/translations/sv_SE.qm;/usr/share/cutefish-statusbar/translations/sw.qm;/usr/share/cutefish-statusbar/translations/ta_IN.qm;/usr/share/cutefish-statusbar/translations/tr_TR.qm;/usr/share/cutefish-statusbar/translations/uk_UA.qm;/usr/share/cutefish-statusbar/translations/uz_UZ.qm;/usr/share/cutefish-statusbar/translations/vi_VN.qm;/usr/share/cutefish-statusbar/translations/zh_CN.qm;/usr/share/cutefish-statusbar/translations/zh_TW.qm")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/share/cutefish-statusbar/translations" TYPE FILE FILES
    "/home/tokyo/clone/RebootOS/statusbar-old/build/ar_AA.qm"
    "/home/tokyo/clone/RebootOS/statusbar-old/build/az_AZ.qm"
    "/home/tokyo/clone/RebootOS/statusbar-old/build/be_BY.qm"
    "/home/tokyo/clone/RebootOS/statusbar-old/build/be_Latn.qm"
    "/home/tokyo/clone/RebootOS/statusbar-old/build/bg_BG.qm"
    "/home/tokyo/clone/RebootOS/statusbar-old/build/bs_BA.qm"
    "/home/tokyo/clone/RebootOS/statusbar-old/build/cs_CZ.qm"
    "/home/tokyo/clone/RebootOS/statusbar-old/build/da_DK.qm"
    "/home/tokyo/clone/RebootOS/statusbar-old/build/de_DE.qm"
    "/home/tokyo/clone/RebootOS/statusbar-old/build/en_US.qm"
    "/home/tokyo/clone/RebootOS/statusbar-old/build/eo_XX.qm"
    "/home/tokyo/clone/RebootOS/statusbar-old/build/es_ES.qm"
    "/home/tokyo/clone/RebootOS/statusbar-old/build/es_MX.qm"
    "/home/tokyo/clone/RebootOS/statusbar-old/build/fa_IR.qm"
    "/home/tokyo/clone/RebootOS/statusbar-old/build/fi_FI.qm"
    "/home/tokyo/clone/RebootOS/statusbar-old/build/fr_FR.qm"
    "/home/tokyo/clone/RebootOS/statusbar-old/build/he_IL.qm"
    "/home/tokyo/clone/RebootOS/statusbar-old/build/hi_IN.qm"
    "/home/tokyo/clone/RebootOS/statusbar-old/build/hu_HU.qm"
    "/home/tokyo/clone/RebootOS/statusbar-old/build/id_ID.qm"
    "/home/tokyo/clone/RebootOS/statusbar-old/build/ie.qm"
    "/home/tokyo/clone/RebootOS/statusbar-old/build/it_IT.qm"
    "/home/tokyo/clone/RebootOS/statusbar-old/build/ja_JP.qm"
    "/home/tokyo/clone/RebootOS/statusbar-old/build/lt_LT.qm"
    "/home/tokyo/clone/RebootOS/statusbar-old/build/lv_LV.qm"
    "/home/tokyo/clone/RebootOS/statusbar-old/build/mg.qm"
    "/home/tokyo/clone/RebootOS/statusbar-old/build/ml_IN.qm"
    "/home/tokyo/clone/RebootOS/statusbar-old/build/nb_NO.qm"
    "/home/tokyo/clone/RebootOS/statusbar-old/build/ne_NP.qm"
    "/home/tokyo/clone/RebootOS/statusbar-old/build/pl_PL.qm"
    "/home/tokyo/clone/RebootOS/statusbar-old/build/pt_BR.qm"
    "/home/tokyo/clone/RebootOS/statusbar-old/build/pt_PT.qm"
    "/home/tokyo/clone/RebootOS/statusbar-old/build/ro_RO.qm"
    "/home/tokyo/clone/RebootOS/statusbar-old/build/ru_RU.qm"
    "/home/tokyo/clone/RebootOS/statusbar-old/build/si_LK.qm"
    "/home/tokyo/clone/RebootOS/statusbar-old/build/sk_SK.qm"
    "/home/tokyo/clone/RebootOS/statusbar-old/build/so.qm"
    "/home/tokyo/clone/RebootOS/statusbar-old/build/sr_RS.qm"
    "/home/tokyo/clone/RebootOS/statusbar-old/build/sv_SE.qm"
    "/home/tokyo/clone/RebootOS/statusbar-old/build/sw.qm"
    "/home/tokyo/clone/RebootOS/statusbar-old/build/ta_IN.qm"
    "/home/tokyo/clone/RebootOS/statusbar-old/build/tr_TR.qm"
    "/home/tokyo/clone/RebootOS/statusbar-old/build/uk_UA.qm"
    "/home/tokyo/clone/RebootOS/statusbar-old/build/uz_UZ.qm"
    "/home/tokyo/clone/RebootOS/statusbar-old/build/vi_VN.qm"
    "/home/tokyo/clone/RebootOS/statusbar-old/build/zh_CN.qm"
    "/home/tokyo/clone/RebootOS/statusbar-old/build/zh_TW.qm"
    )
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/tokyo/clone/RebootOS/statusbar-old/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
