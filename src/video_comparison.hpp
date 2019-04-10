#include "hashed_video.hpp"
#include <string>
#include <vector>

namespace ContentID {
    struct signal_t {
        double min_avg;
        double max_std;
        std::vector<double> raw;
        std::vector<double> moving_avg;
        std::vector<double> moving_std;
        std::vector<bool> binary;
    };
    class VideoComparison {
        public:
            double framerate;
            std::string asset_id;
            std::string compilation_id;
            ContentID::signal_t signal;
            VideoComparison(const ContentID::HashedVideo &asset, const ContentID::HashedVideo &compilation);
    };
}