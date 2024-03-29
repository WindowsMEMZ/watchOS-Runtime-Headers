//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef _NTKCarouselLocationManagerHandler_h
#define _NTKCarouselLocationManagerHandler_h
@import Foundation;

@interface _NTKCarouselLocationManagerHandler : NSObject

@property (copy, nonatomic) id /* block */ handler;
@property (nonatomic) BOOL wantsGroundLocation;

/* instance methods */
- (id)initWithHandler:(id /* block */)handler;
- (id)initWithWantsGroundLocation:(BOOL)location handler:(id /* block */)handler;
@end

#endif /* _NTKCarouselLocationManagerHandler_h */
