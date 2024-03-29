//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1877.50.1.0.0
//
#ifndef MLE5PortBinder_Protocol_h
#define MLE5PortBinder_Protocol_h
@import Foundation;

@protocol MLE5PortBinder <NSObject>

@property (readonly) MLFeatureValue *featureValue;
@property (retain, nonatomic) MLPixelBufferPool *pixelBufferPool;

/* instance methods */
- (void)reset;
@end

#endif /* MLE5PortBinder_Protocol_h */
