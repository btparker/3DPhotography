//
//  ofxAssimpMeshHelper.h
//  Created by Lukasz Karluk on 4/12/12.
//

#pragma once

#include "ofMain.h"
#include "assimp.h"

class aiMesh;

class ofxAssimpMeshHelper {

public:

	ofxAssimpMeshHelper();
    ~ofxAssimpMeshHelper();
    
    aiMesh * mesh; // pointer to the aiMesh we represent.

    ofVbo vbo;
    
    ofTexture texture;
    vector<ofIndexType> indices;
    
    ofMaterial material;
    
    ofBlendMode blendMode;
    
    bool twoSided;
    bool hasChanged;

    vector<aiVector3D> animatedPos;
    vector<aiVector3D> animatedNorm;

    ofMesh cachedMesh;
    bool validCache;
    
    ofMatrix4x4 matrix;
};
