//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PFAVReaderWriterAdjustDelegate_Protocol_h
#define PFAVReaderWriterAdjustDelegate_Protocol_h
@import Foundation;

@protocol PFAVReaderWriterAdjustDelegate <NSObject>
@optional
/* instance methods */
- (void)adjustPixelBuffer:(struct __CVBuffer *)buffer;
- (void)adjustPixelBuffer:(struct __CVBuffer *)buffer toOutputBuffer:(struct __CVBuffer *)buffer;
@end

#endif /* PFAVReaderWriterAdjustDelegate_Protocol_h */
