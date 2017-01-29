# Install script for directory: C:/Users/Juan/Desktop/malvadisco/Libraries/Box2D-master/Box2D/Box2D

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Users/Juan/Desktop/malvadisco/Libraries/Box2D-master/Build")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
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

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/Box2D" TYPE FILE FILES "C:/Users/Juan/Desktop/malvadisco/Libraries/Box2D-master/Box2D/Box2D/Box2D.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/Box2D/Collision" TYPE FILE FILES
    "C:/Users/Juan/Desktop/malvadisco/Libraries/Box2D-master/Box2D/Box2D/Collision/b2BroadPhase.h"
    "C:/Users/Juan/Desktop/malvadisco/Libraries/Box2D-master/Box2D/Box2D/Collision/b2Collision.h"
    "C:/Users/Juan/Desktop/malvadisco/Libraries/Box2D-master/Box2D/Box2D/Collision/b2Distance.h"
    "C:/Users/Juan/Desktop/malvadisco/Libraries/Box2D-master/Box2D/Box2D/Collision/b2DynamicTree.h"
    "C:/Users/Juan/Desktop/malvadisco/Libraries/Box2D-master/Box2D/Box2D/Collision/b2TimeOfImpact.h"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/Box2D/Collision/Shapes" TYPE FILE FILES
    "C:/Users/Juan/Desktop/malvadisco/Libraries/Box2D-master/Box2D/Box2D/Collision/Shapes/b2CircleShape.h"
    "C:/Users/Juan/Desktop/malvadisco/Libraries/Box2D-master/Box2D/Box2D/Collision/Shapes/b2EdgeShape.h"
    "C:/Users/Juan/Desktop/malvadisco/Libraries/Box2D-master/Box2D/Box2D/Collision/Shapes/b2ChainShape.h"
    "C:/Users/Juan/Desktop/malvadisco/Libraries/Box2D-master/Box2D/Box2D/Collision/Shapes/b2PolygonShape.h"
    "C:/Users/Juan/Desktop/malvadisco/Libraries/Box2D-master/Box2D/Box2D/Collision/Shapes/b2Shape.h"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/Box2D/Common" TYPE FILE FILES
    "C:/Users/Juan/Desktop/malvadisco/Libraries/Box2D-master/Box2D/Box2D/Common/b2BlockAllocator.h"
    "C:/Users/Juan/Desktop/malvadisco/Libraries/Box2D-master/Box2D/Box2D/Common/b2Draw.h"
    "C:/Users/Juan/Desktop/malvadisco/Libraries/Box2D-master/Box2D/Box2D/Common/b2GrowableStack.h"
    "C:/Users/Juan/Desktop/malvadisco/Libraries/Box2D-master/Box2D/Box2D/Common/b2Math.h"
    "C:/Users/Juan/Desktop/malvadisco/Libraries/Box2D-master/Box2D/Box2D/Common/b2Settings.h"
    "C:/Users/Juan/Desktop/malvadisco/Libraries/Box2D-master/Box2D/Box2D/Common/b2StackAllocator.h"
    "C:/Users/Juan/Desktop/malvadisco/Libraries/Box2D-master/Box2D/Box2D/Common/b2Timer.h"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/Box2D/Dynamics" TYPE FILE FILES
    "C:/Users/Juan/Desktop/malvadisco/Libraries/Box2D-master/Box2D/Box2D/Dynamics/b2Body.h"
    "C:/Users/Juan/Desktop/malvadisco/Libraries/Box2D-master/Box2D/Box2D/Dynamics/b2ContactManager.h"
    "C:/Users/Juan/Desktop/malvadisco/Libraries/Box2D-master/Box2D/Box2D/Dynamics/b2Fixture.h"
    "C:/Users/Juan/Desktop/malvadisco/Libraries/Box2D-master/Box2D/Box2D/Dynamics/b2Island.h"
    "C:/Users/Juan/Desktop/malvadisco/Libraries/Box2D-master/Box2D/Box2D/Dynamics/b2TimeStep.h"
    "C:/Users/Juan/Desktop/malvadisco/Libraries/Box2D-master/Box2D/Box2D/Dynamics/b2World.h"
    "C:/Users/Juan/Desktop/malvadisco/Libraries/Box2D-master/Box2D/Box2D/Dynamics/b2WorldCallbacks.h"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/Box2D/Dynamics/Contacts" TYPE FILE FILES
    "C:/Users/Juan/Desktop/malvadisco/Libraries/Box2D-master/Box2D/Box2D/Dynamics/Contacts/b2CircleContact.h"
    "C:/Users/Juan/Desktop/malvadisco/Libraries/Box2D-master/Box2D/Box2D/Dynamics/Contacts/b2Contact.h"
    "C:/Users/Juan/Desktop/malvadisco/Libraries/Box2D-master/Box2D/Box2D/Dynamics/Contacts/b2ContactSolver.h"
    "C:/Users/Juan/Desktop/malvadisco/Libraries/Box2D-master/Box2D/Box2D/Dynamics/Contacts/b2PolygonAndCircleContact.h"
    "C:/Users/Juan/Desktop/malvadisco/Libraries/Box2D-master/Box2D/Box2D/Dynamics/Contacts/b2EdgeAndCircleContact.h"
    "C:/Users/Juan/Desktop/malvadisco/Libraries/Box2D-master/Box2D/Box2D/Dynamics/Contacts/b2EdgeAndPolygonContact.h"
    "C:/Users/Juan/Desktop/malvadisco/Libraries/Box2D-master/Box2D/Box2D/Dynamics/Contacts/b2ChainAndCircleContact.h"
    "C:/Users/Juan/Desktop/malvadisco/Libraries/Box2D-master/Box2D/Box2D/Dynamics/Contacts/b2ChainAndPolygonContact.h"
    "C:/Users/Juan/Desktop/malvadisco/Libraries/Box2D-master/Box2D/Box2D/Dynamics/Contacts/b2PolygonContact.h"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/Box2D/Dynamics/Joints" TYPE FILE FILES
    "C:/Users/Juan/Desktop/malvadisco/Libraries/Box2D-master/Box2D/Box2D/Dynamics/Joints/b2DistanceJoint.h"
    "C:/Users/Juan/Desktop/malvadisco/Libraries/Box2D-master/Box2D/Box2D/Dynamics/Joints/b2FrictionJoint.h"
    "C:/Users/Juan/Desktop/malvadisco/Libraries/Box2D-master/Box2D/Box2D/Dynamics/Joints/b2GearJoint.h"
    "C:/Users/Juan/Desktop/malvadisco/Libraries/Box2D-master/Box2D/Box2D/Dynamics/Joints/b2Joint.h"
    "C:/Users/Juan/Desktop/malvadisco/Libraries/Box2D-master/Box2D/Box2D/Dynamics/Joints/b2MotorJoint.h"
    "C:/Users/Juan/Desktop/malvadisco/Libraries/Box2D-master/Box2D/Box2D/Dynamics/Joints/b2MouseJoint.h"
    "C:/Users/Juan/Desktop/malvadisco/Libraries/Box2D-master/Box2D/Box2D/Dynamics/Joints/b2PrismaticJoint.h"
    "C:/Users/Juan/Desktop/malvadisco/Libraries/Box2D-master/Box2D/Box2D/Dynamics/Joints/b2PulleyJoint.h"
    "C:/Users/Juan/Desktop/malvadisco/Libraries/Box2D-master/Box2D/Box2D/Dynamics/Joints/b2RevoluteJoint.h"
    "C:/Users/Juan/Desktop/malvadisco/Libraries/Box2D-master/Box2D/Box2D/Dynamics/Joints/b2RopeJoint.h"
    "C:/Users/Juan/Desktop/malvadisco/Libraries/Box2D-master/Box2D/Box2D/Dynamics/Joints/b2WeldJoint.h"
    "C:/Users/Juan/Desktop/malvadisco/Libraries/Box2D-master/Box2D/Box2D/Dynamics/Joints/b2WheelJoint.h"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/Box2D/Rope" TYPE FILE FILES "C:/Users/Juan/Desktop/malvadisco/Libraries/Box2D-master/Box2D/Box2D/Rope/b2Rope.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "C:/Users/Juan/Desktop/malvadisco/Libraries/Box2D-master/Box2D/Box2D/libBox2D.dll.a")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "C:/Users/Juan/Desktop/malvadisco/Libraries/Box2D-master/Box2D/Box2D/libBox2D.dll")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/libBox2D.dll" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/libBox2D.dll")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "C:/MinGW/bin/strip.exe" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/libBox2D.dll")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "C:/Users/Juan/Desktop/malvadisco/Libraries/Box2D-master/Box2D/Box2D/libBox2D.a")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/Box2D/Box2D-targets.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/Box2D/Box2D-targets.cmake"
         "C:/Users/Juan/Desktop/malvadisco/Libraries/Box2D-master/Box2D/Box2D/CMakeFiles/Export/lib/Box2D/Box2D-targets.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/Box2D/Box2D-targets-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/Box2D/Box2D-targets.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/Box2D" TYPE FILE FILES "C:/Users/Juan/Desktop/malvadisco/Libraries/Box2D-master/Box2D/Box2D/CMakeFiles/Export/lib/Box2D/Box2D-targets.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/Box2D" TYPE FILE FILES "C:/Users/Juan/Desktop/malvadisco/Libraries/Box2D-master/Box2D/Box2D/CMakeFiles/Export/lib/Box2D/Box2D-targets-debug.cmake")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Box2D" TYPE FILE FILES
    "C:/Users/Juan/Desktop/malvadisco/Libraries/Box2D-master/Box2D/Box2D/Box2DConfig.cmake"
    "C:/Users/Juan/Desktop/malvadisco/Libraries/Box2D-master/Box2D/Box2D/UseBox2D.cmake"
    )
endif()

