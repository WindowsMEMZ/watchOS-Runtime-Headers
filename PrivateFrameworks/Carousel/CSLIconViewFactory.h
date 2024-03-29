//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLIconViewFactory_h
#define CSLIconViewFactory_h
@import Foundation;

#include "CSLUIHexIconViewFactory-Protocol.h"
#include "NCClockIconViewController.h"

@class NSString;

@interface CSLIconViewFactory : NSObject<CSLUIHexIconViewFactory>

@property (readonly, nonatomic) NCClockIconViewController *clockIconViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)factory;

/* instance methods */
- (id)init;
- (double)defaultPixelDiameter;
- (id)createIconViewWithBundleIdentifier:(id)identifier;
- (id)createIconViewWithBundleIdentifier:(id)identifier updating:(BOOL)updating;
@end

#endif /* CSLIconViewFactory_h */
