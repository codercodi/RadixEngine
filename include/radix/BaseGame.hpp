#ifndef RADIX_BASEGAME_HPP
#define RADIX_BASEGAME_HPP

#include <radix/util/sdl/Fps.hpp>
#include <radix/World.hpp>
#include <radix/GameWorld.hpp>
#include <radix/Window.hpp>
#include <radix/renderer/Renderer.hpp>
#include <radix/renderer/ScreenRenderer.hpp>
#include <radix/core/event/EventDispatcher.hpp>
#include <radix/env/Config.hpp>

namespace radix {

const int UPDATE_RATE = 60;
const int SKIP_TIME = 1000 / UPDATE_RATE;
const int MAX_SKIP = 5;

class BaseGame{
public:
  static Fps fps;

  BaseGame();
  BaseGame(BaseGame&) = delete;
  BaseGame(BaseGame&&) = delete;
  bool isRunning();
  virtual void processInput();
  virtual void update();
  virtual void cleanUp();
  virtual void close();
  virtual void render();
  World* getWorld();
  ScreenRenderer* getScreenRenderer();
  GameWorld* getGameWorld();
  inline Window& getWindow() {
    return window;
  }

protected:
  unsigned int currentTime = 0, nextUpdate = 0, lastUpdate = 0, lastRender = 0;
  Window window;
  World world;
  std::shared_ptr<ScreenRenderer> screenRenderer;
  GameWorld gameWorld;
  std::unique_ptr<Renderer> renderer;
  std::unique_ptr<Camera> camera;
  bool closed;
  virtual void prepareCamera();
  virtual void init();
  Config config;
  radix::EventDispatcher::CallbackHolder screenshotCallbackHolder;
};

} /* namespace radix */

#endif /* RADIX_BASEGAME_HPP */