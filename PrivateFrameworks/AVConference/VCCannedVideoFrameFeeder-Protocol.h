//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef VCCannedVideoFrameFeeder_Protocol_h
#define VCCannedVideoFrameFeeder_Protocol_h
@import Foundation;

@protocol VCCannedVideoFrameFeeder <NSObject>
/* instance methods */
- (struct __CVBuffer *)createPixelBufferForFrameIndex:(int)index;
- (void)getFrameRate:(double *)rate frameCount:(int *)count;
- (int)setWidth:(int)width height:(int)height;
@end

#endif /* VCCannedVideoFrameFeeder_Protocol_h */
