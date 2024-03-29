//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1877.50.1.0.0
//
#ifndef MLCustomLayer_Protocol_h
#define MLCustomLayer_Protocol_h
@import Foundation;

@protocol MLCustomLayer 
/* instance methods */
- (id)initWithParameterDictionary:(id)dictionary error:(id *)error;
- (BOOL)setWeightData:(id)data error:(id *)error;
- (id)outputShapesForInputShapes:(id)shapes error:(id *)error;
- (BOOL)evaluateOnCPUWithInputs:(id)inputs outputs:(id)outputs error:(id *)error;
@optional
/* instance methods */
- (BOOL)encodeToCommandBuffer:(id)buffer inputs:(id)inputs outputs:(id)outputs error:(id *)error;
@end

#endif /* MLCustomLayer_Protocol_h */
