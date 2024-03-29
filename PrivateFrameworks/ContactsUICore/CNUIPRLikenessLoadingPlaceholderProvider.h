//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3505.0.0.0.0
//
#ifndef CNUIPRLikenessLoadingPlaceholderProvider_h
#define CNUIPRLikenessLoadingPlaceholderProvider_h
@import Foundation;

#include "CNUIPRLikenessProvider-Protocol.h"

@class CNCache, NSString;
@protocol CNScheduler;

@interface CNUIPRLikenessLoadingPlaceholderProvider : NSObject<CNUIPRLikenessProvider>

@property (readonly, nonatomic) NSObject<CNScheduler> *resourceLock;
@property (readonly, nonatomic) CNCache *cache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (struct CGImage *)renderCircularImageForSize:(struct CGSize { double x0; double x1; })size scale:(double)scale;
- (struct CGImage *)renderRoundedRectImageForSize:(struct CGSize { double x0; double x1; })size scale:(double)scale;
- (struct CGImage *)_cnui_circularImageForSize:(struct CGSize { double x0; double x1; })size scale:(double)scale;
- (struct CGImage *)_cnui_roundedRectImageForSize:(struct CGSize { double x0; double x1; })size scale:(double)scale;
- (id)_cnui_likenessForSize:(struct CGSize { double x0; double x1; })size scale:(double)scale;
- (unsigned long long)_cnui_likenessType;
@end

#endif /* CNUIPRLikenessLoadingPlaceholderProvider_h */
