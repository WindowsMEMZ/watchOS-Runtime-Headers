//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1420.3.0.0.0
//
#ifndef CITextDetector_h
#define CITextDetector_h
@import Foundation;

#include "CIDetector.h"
#include "CIContext.h"

@class NSMutableDictionary;

@interface CITextDetector : CIDetector {
  /* instance variables */
  double _width;
  double _height;
  NSMutableDictionary *featureOptions;
}

@property (retain, nonatomic) CIContext *context;

/* instance methods */
- (id)initWithContext:(id)context options:(id)options;
- (void)dealloc;
- (id)featuresInImage:(id)image options:(id)options;
- (id)featuresInImage:(id)image;
@end

#endif /* CITextDetector_h */
