#include <gazebo/gazebo.hh>

namespace gazebo
{
  class Welcome : public WorldPlugin
  {
    public:
      void Load(physics::WorldPtr, sdf::ElementPtr)
      {
        std::cerr << "\nWelcome to Hossam's World!\n";
      }
  };

  GZ_REGISTER_WORLD_PLUGIN(Welcome)
}
