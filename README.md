# Build My World

Gazebo world with a single floor building, two robots and an online-library model.

## Run

```bash
cd BuildMyWorld
mkdir -p build && cd build
cmake .. && make
cd ..
export GAZEBO_MODEL_PATH=$PWD/model:$GAZEBO_MODEL_PATH
export GAZEBO_PLUGIN_PATH=$PWD/build:$GAZEBO_PLUGIN_PATH
gazebo world/my_world.world
```

Prints `Welcome to Hossam's World!` on launch.

## Contents

| Path | What |
|---|---|
| `model/my_building/` | Two room building: window, doorway, blue walls, cream divider |
| `model/my_bot/` | Two wheeled robot, 4 links, 3 joints |
| `world/my_world.world` | Building + `my_bot_1` + `my_bot_2` + `bookshelf` (online library) |
| `script/welcome.cpp` | World plugin |
| `CMakeLists.txt` | Builds `libwelcome.so` |

Delete `build/` before submitting.
