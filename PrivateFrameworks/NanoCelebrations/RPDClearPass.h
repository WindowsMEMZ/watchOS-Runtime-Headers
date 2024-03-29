//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 72.0.0.0.0
//
#ifndef RPDClearPass_h
#define RPDClearPass_h
@import Foundation;

#include "RPDClearProgram.h"

@interface RPDClearPass : NSObject {
  /* instance variables */
  unsigned int _vao;
  unsigned int _vbo;
  unsigned int _accumTex;
  unsigned int _accumPBO;
  unsigned int _w;
  unsigned int _h;
}

@property (retain, nonatomic) RPDClearProgram *renderProgram;
@property (nonatomic) struct CGSize { double x0; double x1; } drawableSize;
@property (nonatomic) double startTime;
@property (nonatomic) double systemTime;

/* instance methods */
- (id)initWithShaders:(id)shaders size:(struct CGSize { double x0; double x1; })size;
- (void)initAccumStateWithSize:(struct CGSize { double x0; double x1; })size;
- (void)initVBO;
- (void)setInitialShaderValues;
- (void)dealloc;
- (void)drawWithSize:(struct CGSize { double x0; double x1; })size animationTime:(double)time context:(id)context;
- (void)readBack;
@end

#endif /* RPDClearPass_h */
