//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 388.0.0.0.0
//
#ifndef PETLoggingOutlet_Protocol_h
#define PETLoggingOutlet_Protocol_h
@import Foundation;

@protocol PETLoggingOutlet <NSObject>
/* instance methods */
- (void)logUnsignedIntegerValue:(unsigned long long)value forEvent:(id)event featureId:(id)id stringifiedProperties:(id)properties metaData:(id)data;
- (void)setUnsignedIntegerValue:(unsigned long long)value forEvent:(id)event featureId:(id)id stringifiedProperties:(id)properties metaData:(id)data;
- (void)logDoubleValue:(double)value forEvent:(id)event featureId:(id)id stringifiedProperties:(id)properties metaData:(id)data;
- (void)logErrorForEvent:(id)event featureId:(id)id reason:(id)reason;
@end

#endif /* PETLoggingOutlet_Protocol_h */
