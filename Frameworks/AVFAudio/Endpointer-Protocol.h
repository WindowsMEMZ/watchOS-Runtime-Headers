//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 629.3.4.0.0
//
#ifndef Endpointer_Protocol_h
#define Endpointer_Protocol_h
@import Foundation;

@protocol Endpointer <NSObject>

@property int endpointMode;
@property double startWaitTime;
@property double interspeechWaitTime;
@property double endWaitTime;

/* instance methods */
- (int)getStatus:(struct AudioQueueBuffer { unsigned int x0; void * x1; unsigned int x2; void * x3; unsigned int x4; struct AudioStreamPacketDescription * x5; unsigned int x6; } *)status;
- (void)reset;
@optional
/* instance methods */
- (BOOL)configureWithSampleRate:(double)rate andFrameRate:(unsigned int)rate;
- (BOOL)configureWithASBD:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)asbd andFrameRate:(unsigned int)rate;
@end

#endif /* Endpointer_Protocol_h */
