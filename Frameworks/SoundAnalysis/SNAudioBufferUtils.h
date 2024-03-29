//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 162.13.0.0.0
//
#ifndef SNAudioBufferUtils_h
#define SNAudioBufferUtils_h
@import Foundation;

@interface SNAudioBufferUtils : NSObject // (Swift)
/* class methods */
+ (BOOL)unencodedAudioBufferIsSilent:(const struct AudioBuffer { unsigned int x0; unsigned int x1; void * x2; } *)silent;
+ (BOOL)unencodedAudioBufferListIsSilent:(const struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x10; unsigned int x1; void * x2; } x[1] } *)silent;
+ (BOOL)audioPCMBufferObjectIsSilent:(id)silent;
+ (BOOL)validateAudioPCMBufferObjectIsNotSilent:(id)silent error:(id *)error;
+ (BOOL)isNaNContainedInFloatAudioBuffer:(const struct AudioBuffer { unsigned int x0; unsigned int x1; void * x2; } *)buffer;
+ (BOOL)isNaNContainedInFloatAudioBufferList:(const struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x10; unsigned int x1; void * x2; } x[1] } *)list;
+ (BOOL)isNaNContainedInFloatAudioPCMBufferObject:(id)object;
+ (BOOL)validateNoNaNContainedInFloatAudioPCMBufferObject:(id)object error:(id *)error;
+ (BOOL)isInfiniteValueContainedInFloatAudioBuffer:(const struct AudioBuffer { unsigned int x0; unsigned int x1; void * x2; } *)buffer;
+ (BOOL)isInfiniteValueContainedInFloatAudioBufferList:(const struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x10; unsigned int x1; void * x2; } x[1] } *)list;
+ (BOOL)isInfiniteValueContainedInFloatAudioPCMBufferObject:(id)object;
+ (BOOL)validateNoInfiniteValueContainedInFloatAudioPCMBufferObject:(id)object error:(id *)error;
+ (BOOL)validateHealthyAudioContainedInFloatAudioPCMBufferObject:(id)object error:(id *)error;
+ (long long)advanceConsecutiveUnhealthyAudioBufferCounterFrom:(long long)from assessingNewFloatAudioBufferObject:(id)object error:(id *)error;
+ (long long)monitorHealthOfAudioBuffersGivenUnhealthyBufferCounter:(long long)counter newFloatAudioBufferObject:(id)object errorThresholdBufferCount:(long long)count errorHandler:(id /* block */)handler;
+ (BOOL)processBufferWithInjectionOperator:(id)operator bufferHandler:(id /* block */)handler audioBuffer:(id)buffer time:(id)time error:(id *)error;
+ (id /* block */)integrateInjectionIntoBufferHandler:(id /* block */)handler format:(id)format queryInjectionPath:(id /* block */)path;

/* instance methods */
- (id)init;
@end

#endif /* SNAudioBufferUtils_h */
