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

if(micro-os-plus-version-included)
  return()
endif()

set(micro-os-plus-version-included TRUE)

message(STATUS "Including micro-os-plus-version...")

# -----------------------------------------------------------------------------

function(target_include_directories_micro_os_plus_version target)

  get_filename_component(xpack_current_folder ${CMAKE_CURRENT_FUNCTION_LIST_DIR} DIRECTORY)

  target_include_directories(
    ${target}

    INTERFACE
      ${xpack_current_folder}/include
  )

endfunction()

# =============================================================================

function(add_libraries_micro_os_plus_version)

  # ---------------------------------------------------------------------------

  if (NOT TARGET micro-os-plus-version-interface)

    add_library(micro-os-plus-version-interface INTERFACE EXCLUDE_FROM_ALL)

    target_include_directories_micro_os_plus_version(micro-os-plus-version-interface)

    add_library(micro-os-plus::version ALIAS micro-os-plus-version-interface)
    message(STATUS "micro-os-plus::version")

  endif()

  # ---------------------------------------------------------------------------

endfunction()

# -----------------------------------------------------------------------------
