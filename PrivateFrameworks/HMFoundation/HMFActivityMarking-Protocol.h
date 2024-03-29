//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 767.3.3.0.0
//
#ifndef HMFActivityMarking_Protocol_h
#define HMFActivityMarking_Protocol_h
@import Foundation;

@protocol HMFActivityMarking <NSObject>
/* instance methods */
- (void)mark;
- (void)markWithReason:(id)reason;
- (void)markWithFormat:(id)format;
@end

#endif /* HMFActivityMarking_Protocol_h */
