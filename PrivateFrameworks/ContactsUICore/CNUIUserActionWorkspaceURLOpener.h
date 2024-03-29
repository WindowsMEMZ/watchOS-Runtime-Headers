//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3505.0.0.0.0
//
#ifndef CNUIUserActionWorkspaceURLOpener_h
#define CNUIUserActionWorkspaceURLOpener_h
@import Foundation;

#include "CNUIUserActionURLOpener-Protocol.h"

@class LSApplicationWorkspace, NSString;

@interface CNUIUserActionWorkspaceURLOpener : NSObject<CNUIUserActionURLOpener>

@property (readonly, nonatomic) LSApplicationWorkspace *workspace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)urlCouldNotBeOpenedErrorWithURL:(id)url;
+ (id)openConfigurationWithEndpoint:(id)endpoint isSensitive:(BOOL)sensitive;

/* instance methods */
- (id)init;
- (id)initWithWorkspace:(id)workspace;
- (id)openURL:(id)url withScheduler:(id)scheduler;
- (id)openURL:(id)url isSensitive:(BOOL)sensitive withScheduler:(id)scheduler;
- (id)openURL:(id)url isSensitive:(BOOL)sensitive connectionEndpoint:(id)endpoint withScheduler:(id)scheduler;
@end

#endif /* CNUIUserActionWorkspaceURLOpener_h */
