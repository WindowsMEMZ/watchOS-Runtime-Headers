//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1877.50.1.0.0
//
#ifndef MLModelTypeRegistry_h
#define MLModelTypeRegistry_h
@import Foundation;

@interface MLModelTypeRegistry : NSObject
/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (id)classesForLoadingModelType:(int)type;
- (id)classesForLoadingModelType:(int)type configuration:(id)configuration isUpdatable:(BOOL)updatable isEncrypted:(BOOL)encrypted;
- (Class)classForCompilingModelType:(int)type;
- (id)loadNeuralNetworkClasses:(BOOL)classes trainWithMLCompute:(BOOL)mlcompute;
@end

#endif /* MLModelTypeRegistry_h */
