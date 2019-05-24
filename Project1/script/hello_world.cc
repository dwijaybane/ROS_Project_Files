#include <gazebo/gazebo.hh>

namespace gazebo
{
    class WorldPluginTutorial : public WorldPlugin
    {
    public:
        WorldPluginTutorial() : WorldPlugin()
        {
            printf("Welcome to Dwijay’s World!!\n");
        }

    public:
        void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
        {

        }
    };
    GZ_REGISTER_WORLD_PLUGIN(WorldPluginTutorial)
}

// Make sure to provide plugin path
// export GAZEBO_PLUGIN_PATH=${GAZEBO_PLUGIN_PATH}:/notebook/Project1/build