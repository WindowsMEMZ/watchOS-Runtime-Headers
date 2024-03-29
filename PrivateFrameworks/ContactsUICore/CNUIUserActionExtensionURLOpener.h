//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3505.0.0.0.0
//
#ifndef CNUIUserActionExtensionURLOpener_h
#define CNUIUserActionExtensionURLOpener_h
@import Foundation;

#include "CNUIUserActionURLOpener-Protocol.h"

@class NSExtensionContext, NSString;

@interface CNUIUserActionExtensionURLOpener : NSObject<CNUIUserActionURLOpener>

@property (readonly, nonatomic) NSExtensionContext *extensionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithExtensionContext:(id)context;
- (id)openURL:(id)url withScheduler:(id)scheduler;
- (id)openURL:(id)url isSensitive:(BOOL)sensitive withScheduler:(id)scheduler;
- (id)openURL:(id)url isSensitive:(BOOL)sensitive connectionEndpoint:(id)endpoint withScheduler:(id)scheduler;
@end

#endif /* CNUIUserActionExtensionURLOpener_h */
