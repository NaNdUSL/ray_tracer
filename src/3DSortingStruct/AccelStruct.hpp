//
//  AccelStruct.hpp
//  VI-RT
//
//  Created by Luis Paulo Santos on 31/01/2023.
//

#ifndef AccelStruct_hpp
#define AccelStruct_hpp

#include "../Rays/ray.hpp"
#include "../Rays/intersection.hpp"
#include "../Scene/scene.hpp"

class AccelStruct {
    public:
    AccelStruct () {}
    ~AccelStruct () {}
    void build (Scene s) {}
    bool trace (Scene s, Ray r, Intersection *isect) {}
};

#endif /* AccelStruct_hpp */
