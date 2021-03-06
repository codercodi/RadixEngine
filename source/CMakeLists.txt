if(NOT DEFINED RADIX_LIBRARIES)
  message(FATAL_ERROR "Please compile using the repo's root CMakeLists.txt")
endif()

set(D ${CMAKE_CURRENT_SOURCE_DIR})

set(RADIX_SOURCES
  ${RADIX_SOURCES}
  ${D}/BaseGame.cpp
  ${D}/Camera.cpp
  ${D}/core/diag/AnsiConsoleLogger.cpp
  ${D}/core/diag/Logger.cpp
  ${D}/core/diag/LogInput.cpp
  ${D}/core/diag/StdoutLogger.cpp
  ${D}/core/event/EventDispatcher.cpp
  ${D}/core/file/Path.cpp
  ${D}/core/gl/DebugOutput.cpp
  ${D}/core/gl/OpenGL.cpp
  ${D}/core/gl/TightDataPacker.cpp
  ${D}/core/gl/VBO.cpp
  ${D}/core/math/Math.cpp
  ${D}/core/math/Matrix3f.cpp
  ${D}/core/math/Matrix4f.cpp
  ${D}/core/math/Vector2f.cpp
  ${D}/core/math/Vector2ui.cpp
  ${D}/core/math/Vector3f.cpp
  ${D}/core/math/Vector4f.cpp
  ${D}/core/state/GameState.cpp
  ${D}/Entity.cpp
  ${D}/EntityManager.cpp
  ${D}/entities/Player.cpp
  ${D}/entities/StaticModel.cpp
  ${D}/entities/traits/RigidBodyTrait.cpp
  ${D}/entities/traits/SoundSourceTrait.cpp
  ${D}/entities/traits/HealthTrait.cpp
  ${D}/entities/Trigger.cpp
  ${D}/env/ArgumentsParser.cpp
  ${D}/env/GameConsole.cpp
  ${D}/env/Config.cpp
  ${D}/env/Environment.cpp
  ${D}/env/OperatingSystem.cpp
  ${D}/env/Util.cpp
  ${D}/GameWorld.cpp
  ${D}/input/InputSource.cpp
  ${D}/data/map/MapListLoader.cpp
  ${D}/data/map/MapListLoader.cpp
  ${D}/data/map/MapLoader.cpp
  ${D}/data/map/MapLoader.cpp
  ${D}/data/map/XmlTriggerHelper.cpp
  ${D}/data/map/XmlHelper.cpp
  ${D}/data/map/WinTrigger.cpp
  ${D}/data/map/DeathTrigger.cpp
  ${D}/data/map/RadiationTrigger.cpp
  ${D}/data/map/AudioTrigger.cpp
  ${D}/data/map/MapTrigger.cpp
  ${D}/data/map/TeleportTrigger.cpp
  ${D}/data/map/XmlMapLoader.cpp
  ${D}/data/material/MaterialLoader.cpp
  ${D}/data/model/MeshLoader.cpp
  ${D}/data/text/FontLoader.cpp
  ${D}/data/texture/TextureLoader.cpp
  ${D}/data/screen/XmlScreenLoader.cpp
  ${D}/data/screen/Element.cpp
  ${D}/data/shader/Shader.cpp
  ${D}/data/shader/ShaderLoader.cpp
  ${D}/physics/CollisionDispatcher.cpp
  ${D}/physics/GhostPairCallback.cpp
  ${D}/physics/KinematicCharacterController.cpp
  ${D}/physics/PhysicsDebugDraw.cpp
  ${D}/physics/PhysicsHelper.cpp
  ${D}/physics/Uncollider.cpp
  ${D}/renderer/SubRenderer.cpp
  ${D}/renderer/Renderer.cpp
  ${D}/renderer/ScreenRenderer.cpp
  ${D}/renderer/PortalRenderer.cpp
  ${D}/renderer/TextRenderer.cpp
  ${D}/SimulationManager.cpp
  ${D}/simulation/Physics.cpp
  ${D}/simulation/Player.cpp
  ${D}/SoundManager.cpp
  ${D}/Transform.cpp
  ${D}/util/sdl/Fps.cpp
  ${D}/util/NullReference.cpp
  ${D}/util/XmlLoader.cpp
  ${D}/Window.cpp
  ${D}/World.cpp
  PARENT_SCOPE
)
