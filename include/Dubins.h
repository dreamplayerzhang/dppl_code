#include <vector>
#include <math.h>

#include <ogdf/basic/Graph.h>
#include <ogdf/basic/GraphAttributes.h>
#include <ogdf/basic/GraphCopyAttributes.h>

typedef struct _configuration_t {
    ogdf::DPoint position; // (x,y) position [m]
    double heading;        // heading from North (positive y-axis)  [rad]
} configuration_t;


/**
 * Copies configuration u to v.
 */
inline void copyConfiguration(configuration_t &u, configuration_t &v) {
    v.position = ogdf::DPoint(u.position);
    v.heading = u.heading;
}

double euclideanDistanceToNode(ogdf::GraphAttributes &GA, configuration_t &C, ogdf::node &node);

double dubinsDistanceToNode(ogdf::GraphAttributes &GA, configuration_t &C, ogdf::node &node);
