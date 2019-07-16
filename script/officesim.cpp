#include <gazebo/gazebo.hh>

namespace gazebo
{
  class WorldPluginOfficeSim : public WorldPlugin
  {
    public: WorldPluginOfficeSim() : WorldPlugin()
            {
              printf("Welcome to Pravin-Reddy’s World! \n");
            }

    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
            {
               // printf("Loaded Gazebo simumlation for office world! \n");
            }
  };
  GZ_REGISTER_WORLD_PLUGIN(WorldPluginOfficeSim)
}

