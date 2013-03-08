# Install script for directory: /export/mailgrp4_c/sc09ejw/group/Box2DSource/Box2D

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "/usr/local")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

# Install shared libraries without execute permission?
IF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  SET(CMAKE_INSTALL_SO_NO_EXE "0")
ENDIF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/Box2D" TYPE FILE FILES "/export/mailgrp4_c/sc09ejw/group/Box2DSource/Box2D/Box2D.h")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/Box2D/Collision" TYPE FILE FILES
    "/export/mailgrp4_c/sc09ejw/group/Box2DSource/Box2D/Collision/b2BroadPhase.h"
    "/export/mailgrp4_c/sc09ejw/group/Box2DSource/Box2D/Collision/b2Collision.h"
    "/export/mailgrp4_c/sc09ejw/group/Box2DSource/Box2D/Collision/b2Distance.h"
    "/export/mailgrp4_c/sc09ejw/group/Box2DSource/Box2D/Collision/b2DynamicTree.h"
    "/export/mailgrp4_c/sc09ejw/group/Box2DSource/Box2D/Collision/b2TimeOfImpact.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/Box2D/Collision/Shapes" TYPE FILE FILES
    "/export/mailgrp4_c/sc09ejw/group/Box2DSource/Box2D/Collision/Shapes/b2CircleShape.h"
    "/export/mailgrp4_c/sc09ejw/group/Box2DSource/Box2D/Collision/Shapes/b2EdgeShape.h"
    "/export/mailgrp4_c/sc09ejw/group/Box2DSource/Box2D/Collision/Shapes/b2ChainShape.h"
    "/export/mailgrp4_c/sc09ejw/group/Box2DSource/Box2D/Collision/Shapes/b2PolygonShape.h"
    "/export/mailgrp4_c/sc09ejw/group/Box2DSource/Box2D/Collision/Shapes/b2Shape.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/Box2D/Common" TYPE FILE FILES
    "/export/mailgrp4_c/sc09ejw/group/Box2DSource/Box2D/Common/b2BlockAllocator.h"
    "/export/mailgrp4_c/sc09ejw/group/Box2DSource/Box2D/Common/b2Draw.h"
    "/export/mailgrp4_c/sc09ejw/group/Box2DSource/Box2D/Common/b2GrowableStack.h"
    "/export/mailgrp4_c/sc09ejw/group/Box2DSource/Box2D/Common/b2Math.h"
    "/export/mailgrp4_c/sc09ejw/group/Box2DSource/Box2D/Common/b2Settings.h"
    "/export/mailgrp4_c/sc09ejw/group/Box2DSource/Box2D/Common/b2StackAllocator.h"
    "/export/mailgrp4_c/sc09ejw/group/Box2DSource/Box2D/Common/b2Timer.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/Box2D/Dynamics" TYPE FILE FILES
    "/export/mailgrp4_c/sc09ejw/group/Box2DSource/Box2D/Dynamics/b2Body.h"
    "/export/mailgrp4_c/sc09ejw/group/Box2DSource/Box2D/Dynamics/b2ContactManager.h"
    "/export/mailgrp4_c/sc09ejw/group/Box2DSource/Box2D/Dynamics/b2Fixture.h"
    "/export/mailgrp4_c/sc09ejw/group/Box2DSource/Box2D/Dynamics/b2Island.h"
    "/export/mailgrp4_c/sc09ejw/group/Box2DSource/Box2D/Dynamics/b2TimeStep.h"
    "/export/mailgrp4_c/sc09ejw/group/Box2DSource/Box2D/Dynamics/b2World.h"
    "/export/mailgrp4_c/sc09ejw/group/Box2DSource/Box2D/Dynamics/b2WorldCallbacks.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/Box2D/Dynamics/Contacts" TYPE FILE FILES
    "/export/mailgrp4_c/sc09ejw/group/Box2DSource/Box2D/Dynamics/Contacts/b2CircleContact.h"
    "/export/mailgrp4_c/sc09ejw/group/Box2DSource/Box2D/Dynamics/Contacts/b2Contact.h"
    "/export/mailgrp4_c/sc09ejw/group/Box2DSource/Box2D/Dynamics/Contacts/b2ContactSolver.h"
    "/export/mailgrp4_c/sc09ejw/group/Box2DSource/Box2D/Dynamics/Contacts/b2PolygonAndCircleContact.h"
    "/export/mailgrp4_c/sc09ejw/group/Box2DSource/Box2D/Dynamics/Contacts/b2EdgeAndCircleContact.h"
    "/export/mailgrp4_c/sc09ejw/group/Box2DSource/Box2D/Dynamics/Contacts/b2EdgeAndPolygonContact.h"
    "/export/mailgrp4_c/sc09ejw/group/Box2DSource/Box2D/Dynamics/Contacts/b2ChainAndCircleContact.h"
    "/export/mailgrp4_c/sc09ejw/group/Box2DSource/Box2D/Dynamics/Contacts/b2ChainAndPolygonContact.h"
    "/export/mailgrp4_c/sc09ejw/group/Box2DSource/Box2D/Dynamics/Contacts/b2PolygonContact.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/Box2D/Dynamics/Joints" TYPE FILE FILES
    "/export/mailgrp4_c/sc09ejw/group/Box2DSource/Box2D/Dynamics/Joints/b2DistanceJoint.h"
    "/export/mailgrp4_c/sc09ejw/group/Box2DSource/Box2D/Dynamics/Joints/b2FrictionJoint.h"
    "/export/mailgrp4_c/sc09ejw/group/Box2DSource/Box2D/Dynamics/Joints/b2GearJoint.h"
    "/export/mailgrp4_c/sc09ejw/group/Box2DSource/Box2D/Dynamics/Joints/b2Joint.h"
    "/export/mailgrp4_c/sc09ejw/group/Box2DSource/Box2D/Dynamics/Joints/b2MouseJoint.h"
    "/export/mailgrp4_c/sc09ejw/group/Box2DSource/Box2D/Dynamics/Joints/b2PrismaticJoint.h"
    "/export/mailgrp4_c/sc09ejw/group/Box2DSource/Box2D/Dynamics/Joints/b2PulleyJoint.h"
    "/export/mailgrp4_c/sc09ejw/group/Box2DSource/Box2D/Dynamics/Joints/b2RevoluteJoint.h"
    "/export/mailgrp4_c/sc09ejw/group/Box2DSource/Box2D/Dynamics/Joints/b2RopeJoint.h"
    "/export/mailgrp4_c/sc09ejw/group/Box2DSource/Box2D/Dynamics/Joints/b2WeldJoint.h"
    "/export/mailgrp4_c/sc09ejw/group/Box2DSource/Box2D/Dynamics/Joints/b2WheelJoint.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/Box2D/Rope" TYPE FILE FILES "/export/mailgrp4_c/sc09ejw/group/Box2DSource/Box2D/Rope/b2Rope.h")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FOREACH(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBox2D.so.2.1.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBox2D.so"
      )
    IF(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      FILE(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    ENDIF()
  ENDFOREACH()
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/export/mailgrp4_c/sc09ejw/group/Box2DSource/Build/Box2D/libBox2D.so.2.1.0"
    "/export/mailgrp4_c/sc09ejw/group/Box2DSource/Build/Box2D/libBox2D.so"
    )
  FOREACH(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBox2D.so.2.1.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBox2D.so"
      )
    IF(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      IF(CMAKE_INSTALL_DO_STRIP)
        EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "${file}")
      ENDIF(CMAKE_INSTALL_DO_STRIP)
    ENDIF()
  ENDFOREACH()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/export/mailgrp4_c/sc09ejw/group/Box2DSource/Build/Box2D/libBox2D.a")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/Box2D/Box2D-targets.cmake")
    FILE(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/Box2D/Box2D-targets.cmake"
         "/export/mailgrp4_c/sc09ejw/group/Box2DSource/Build/Box2D/CMakeFiles/Export/lib/Box2D/Box2D-targets.cmake")
    IF(EXPORT_FILE_CHANGED)
      FILE(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/Box2D/Box2D-targets-*.cmake")
      IF(OLD_CONFIG_FILES)
        MESSAGE(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/Box2D/Box2D-targets.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        FILE(REMOVE ${OLD_CONFIG_FILES})
      ENDIF(OLD_CONFIG_FILES)
    ENDIF(EXPORT_FILE_CHANGED)
  ENDIF()
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/Box2D" TYPE FILE FILES "/export/mailgrp4_c/sc09ejw/group/Box2DSource/Build/Box2D/CMakeFiles/Export/lib/Box2D/Box2D-targets.cmake")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/Box2D" TYPE FILE FILES "/export/mailgrp4_c/sc09ejw/group/Box2DSource/Build/Box2D/CMakeFiles/Export/lib/Box2D/Box2D-targets-noconfig.cmake")
  ENDIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/Box2D" TYPE FILE FILES "/export/mailgrp4_c/sc09ejw/group/Box2DSource/Box2D/Box2DConfig.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

