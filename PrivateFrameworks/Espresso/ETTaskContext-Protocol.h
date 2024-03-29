//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 402.2.3.0.0
//
#ifndef ETTaskContext_Protocol_h
#define ETTaskContext_Protocol_h
@import Foundation;

@protocol ETTaskContext 
/* instance methods */
- (BOOL)setTensorNamed:(id)named withValue:(id)value error:(id *)error;
- (id)getTensorNamed:(id)named;
- (id)doInferenceOnData:(id)data error:(id *)error;
- (BOOL)saveNetwork:(id)network inplace:(BOOL)inplace error:(id *)error;
@end

#endif /* ETTaskContext_Protocol_h */
