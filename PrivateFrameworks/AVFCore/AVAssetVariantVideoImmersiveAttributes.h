//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2220.14.1.0.0
//
#ifndef AVAssetVariantVideoImmersiveAttributes_h
#define AVAssetVariantVideoImmersiveAttributes_h
@import Foundation;

@class FigAlternateObjCVideoImmersiveAttributes;

@interface AVAssetVariantVideoImmersiveAttributes : NSObject {
  /* instance variables */
  FigAlternateObjCVideoImmersiveAttributes *_figVideoImmersiveAttributes;
}

@property (readonly, nonatomic) long long packing;
@property (readonly, nonatomic) long long channelLayout;
@property (readonly, nonatomic) long long projection;

/* instance methods */
- (id)initWithFigVideoImmersiveAttributes:(id)attributes;
- (void)dealloc;
- (id)description;
@end

#endif /* AVAssetVariantVideoImmersiveAttributes_h */
