#
# This file is part of the µOS++ distribution.
#   (https://github.com/micro-os-plus)
# Copyright (c) 2021 Liviu Ionescu
#
# This Source Code Form is subject to the terms of the MIT License.
# If a copy of the license was not distributed with this file, it can
# be obtained from https://opensource.org/licenses/MIT/.
#
# -----------------------------------------------------------------------------

# https://cmake.org/cmake/help/v3.18/
# https://cmake.org/cmake/help/v3.18/manual/cmake-packages.7.html#package-configuration-file

if(micro-os-plus-version-included)
  return()
endif()

set(micro-os-plus-version-included TRUE)

message(STATUS "Including micro-os-plus-version...")

# -----------------------------------------------------------------------------
# The current folder.

get_filename_component(xpack_current_folder ${CMAKE_CURRENT_LIST_DIR} DIRECTORY)

# -----------------------------------------------------------------------------

if (NOT TARGET micro-os-plus-version-interface)

  add_library(micro-os-plus-version-interface INTERFACE EXCLUDE_FROM_ALL)

  # ---------------------------------------------------------------------------

  target_include_directories(
    micro-os-plus-version-interface

    INTERFACE
      ${xpack_current_folder}/include
  )

  # ---------------------------------------------------------------------------
  # Aliases.

  add_library(micro-os-plus::version ALIAS micro-os-plus-version-interface)
  message(STATUS "micro-os-plus::version")

endif()

# -----------------------------------------------------------------------------
