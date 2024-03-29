//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5.1.16.0.0
//
#ifndef RBDecoderDelegate_Protocol_h
#define RBDecoderDelegate_Protocol_h
@import Foundation;

@protocol RBDecoderDelegate <NSObject>
@optional
/* instance methods */
- (void)decodedMetadata:(id)metadata;
- (void *)decodedImageContentsWithData:(id)data type:(int *)type error:(id *)error;
- (struct CGFont *)decodedCGFontWithData:(id)data error:(id *)error;
- (id)decodedShaderLibraryWithData:(id)data error:(id *)error;
@end

#endif /* RBDecoderDelegate_Protocol_h */
