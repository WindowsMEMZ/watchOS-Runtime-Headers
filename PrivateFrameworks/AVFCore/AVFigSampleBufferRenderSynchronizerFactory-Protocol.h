//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2220.14.1.0.0
//
#ifndef AVFigSampleBufferRenderSynchronizerFactory_Protocol_h
#define AVFigSampleBufferRenderSynchronizerFactory_Protocol_h
@import Foundation;

@protocol AVFigSampleBufferRenderSynchronizerFactory <NSObject>
/* instance methods */
- (struct OpaqueFigSampleBufferRenderSynchronizer *)createRenderSynchronizerWithAllocator:(struct __CFAllocator *)allocator options:(struct __CFDictionary *)options error:(id *)error;
@end

#endif /* AVFigSampleBufferRenderSynchronizerFactory_Protocol_h */
