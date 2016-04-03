using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Media;

namespace PingPong_2._0
{
   static class sound
    {

        static SoundPlayer sound_space = new SoundPlayer(Properties.Resources.sound_space);

        public static void play_fail()
        {
            sound_space.Play();
        }

    }
}
