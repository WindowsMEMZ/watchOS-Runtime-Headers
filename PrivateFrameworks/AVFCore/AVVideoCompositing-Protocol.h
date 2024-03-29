//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2220.14.1.0.0
//
#ifndef AVVideoCompositing_Protocol_h
#define AVVideoCompositing_Protocol_h
@import Foundation;

@protocol AVVideoCompositing <NSObject>

@property (readonly, nonatomic) NSDictionary *sourcePixelBufferAttributes;
@property (readonly, nonatomic) NSDictionary *requiredPixelBufferAttributesForRenderContext;
@property (readonly, nonatomic) BOOL supportsWideColorSourceFrames;
@property (readonly, nonatomic) BOOL supportsHDRSourceFrames;
@property (readonly, nonatomic) BOOL canConformColorOfSourceFrames;

/* instance methods */
- (void)renderContextChanged:(id)changed;
- (void)startVideoCompositionRequest:(id)request;
@optional
/* instance methods */
- (void)cancelAllPendingVideoCompositionRequests;
- (void)anticipateRenderingUsingHint:(id)hint;
- (void)prerollForRenderingUsingHint:(id)hint;
@end

#endif /* AVVideoCompositing_Protocol_h */
