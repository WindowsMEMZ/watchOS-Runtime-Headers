//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 205.6.1.0.0
//
#ifndef VCPCNNGazeAnalysis_h
#define VCPCNNGazeAnalysis_h
@import Foundation;

#include "VCPCNNModelEspresso.h"

@protocol {Scaler="pool_"{CF<__CVPixelBufferPool *>="value_"^{__CVPixelBufferPool}}"width_"i"height_"i"format_"I"transfer_session_"{CF<OpaqueVTPixelTransferSession *>="value_"^{OpaqueVTPixelTransferSession}}};

@interface VCPCNNGazeAnalysis : NSObject {
  /* instance variables */
  float * _inputData;
  VCPCNNModelEspresso *_modelEspresso;
  struct Scaler { struct CF<__CVPixelBufferPool *> { struct __CVPixelBufferPool *value_; } pool_; int width_; int height_; unsigned int format_; struct CF<OpaqueVTPixelTransferSession *> { struct OpaqueVTPixelTransferSession *value_; } transfer_session_; } _scaler;
}

/* class methods */
+ (id)sharedModel:(id)model;

/* instance methods */
- (id)init;
- (void)dealloc;
- (int)copyImage:(struct __CVBuffer *)image toData:(float *)data;
- (int)createInput:(float *)input withBuffer:(struct __CVBuffer *)buffer cnnInputHeight:(int)height cnnInputWidth:(int)width faceBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (int)detectEyeOpennessForFace:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })face inBuffer:(struct __CVBuffer *)buffer eyeOpenness:(BOOL *)openness;
@end

#endif /* VCPCNNGazeAnalysis_h */
