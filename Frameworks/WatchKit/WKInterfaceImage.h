//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.2.0.0
//
#ifndef WKInterfaceImage_h
#define WKInterfaceImage_h
@import Foundation;

#include "WKInterfaceObject.h"
#include "WKImageAnimatable-Protocol.h"

@class NSString;

@interface WKInterfaceImage : WKInterfaceObject<WKImageAnimatable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)setImage:(id)image;
- (void)setImageData:(id)data;
- (void)setImageNamed:(id)named;
- (void)setTintColor:(id)color;
- (void)startAnimating;
- (void)startAnimatingWithImagesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range duration:(double)duration repeatCount:(long long)count;
- (void)stopAnimating;
@end

#endif /* WKInterfaceImage_h */
