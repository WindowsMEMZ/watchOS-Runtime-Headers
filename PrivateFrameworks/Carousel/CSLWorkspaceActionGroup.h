//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLWorkspaceActionGroup_h
#define CSLWorkspaceActionGroup_h
@import Foundation;

#include "BSDescriptionProviding-Protocol.h"

@class NSMutableSet, NSSet, NSString;

@interface CSLWorkspaceActionGroup : NSObject<BSDescriptionProviding>

@property (retain, nonatomic) NSSet *actions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)groupWithAction:(id)action;

/* instance methods */
- (id)init;
- (void)addAction:(id)action;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)prefix;
- (id)descriptionBuilderWithMultilinePrefix:(id)prefix;
@end

#endif /* CSLWorkspaceActionGroup_h */
