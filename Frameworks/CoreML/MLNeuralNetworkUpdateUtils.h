//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1877.50.1.0.0
//
#ifndef MLNeuralNetworkUpdateUtils_h
#define MLNeuralNetworkUpdateUtils_h
@import Foundation;

@interface MLNeuralNetworkUpdateUtils : NSObject
/* class methods */
+ (BOOL)loadUpdateParameters:(void *)parameters fromCompiledArchive:(void *)archive error:(id *)error;
+ (id)loadParameterDescriptionsAndContainerFromUpdateParameters:(const void *)parameters modelDescription:(id)description;
+ (id)createClassLabelToIndexMapWith:(id)with;
@end

#endif /* MLNeuralNetworkUpdateUtils_h */
