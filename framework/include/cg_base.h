#pragma once

// ------ commonly used stuff from the standard library ------
#include <vector>
#include <string>
#include <exception>
#include <unordered_map>
#include <map>
#include <functional>
#include <memory>
#include <iostream>
#include <ostream>
#include <fstream>
#include <queue>
#include <algorithm>
#include <variant>
#include <iomanip>
#include <optional>

#include <stdio.h>

// ------------------ external dependencies ------------------
#include <stb_image.h>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtc/quaternion.hpp>
#include <glm/ext.hpp>
#include <glm/mat4x4.hpp>

#include <assimp/Importer.hpp>  // C++ importer interface
#include <assimp/scene.h>       // Output data structure
#include <assimp/postprocess.h> // Post processing flags
#include <assimp/anim.h>

// -------------------- CG-Base includes --------------------
#include "log.h"
#include "context.h"
#include "window.h"
#include "timer_frame_type.h"
#include "timer.h"
#include "timer_frame_type.h"
#include "cg_object.h"
#include "composition.h"