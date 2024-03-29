//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 205.6.1.0.0
//
#ifndef VCPImageHumanActionAnalyzer_h
#define VCPImageHumanActionAnalyzer_h
@import Foundation;

#include "VCPImageAnalyzer.h"
#include "VCPCNNModelEspresso.h"

@class NSArray, NSMutableArray, PHFetchResult;
@protocol {Scaler="pool_"{CF<__CVPixelBufferPool *>="value_"^{__CVPixelBufferPool}}"width_"i"height_"i"format_"I"transfer_session_"{CF<OpaqueVTPixelTransferSession *>="value_"^{OpaqueVTPixelTransferSession}}};

@interface VCPImageHumanActionAnalyzer : VCPImageAnalyzer {
  /* instance variables */
  NSMutableArray *_results;
  NSArray *_existingResults;
  VCPCNNModelEspresso *_model;
  PHFetchResult *_phFaces;
  float * _inputData;
  struct Scaler { struct CF<__CVPixelBufferPool *> { struct __CVPixelBufferPool *value_; } pool_; int width_; int height_; unsigned int format_; struct CF<OpaqueVTPixelTransferSession *> { struct OpaqueVTPixelTransferSession *value_; } transfer_session_; } _scaler;
}

/* class methods */
+ (id)sharedModel:(id)model outputNames:(id)names properties:(id)properties;

/* instance methods */
- (id)initWithPHFaces:(id)phfaces existingResults:(id)results;
- (void)dealloc;
- (int)copyImage:(struct __CVBuffer *)image toData:(float *)data;
- (int)aggregateWith:(id)with;
- (int)createInput:(float *)input withBuffer:(struct __CVBuffer *)buffer cnnInputHeight:(int)height cnnInputWidth:(int)width crop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })crop;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectFromPHFace:(id)phface;
- (int)analyzePixelBuffer:(struct __CVBuffer *)buffer flags:(unsigned long long *)flags results:(id *)results cancel:(id /* block */)cancel;
@end

#endif /* VCPImageHumanActionAnalyzer_h */
