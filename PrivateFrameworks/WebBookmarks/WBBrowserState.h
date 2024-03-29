//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBBrowserState_h
#define WBBrowserState_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSArray;

@interface WBBrowserState : NSObject<NSSecureCoding>

@property (copy, nonatomic) NSArray *pinnedTabs;
@property (copy, nonatomic) NSArray *privatePinnedTabs;
@property (copy, nonatomic) NSArray *windows;
@property (copy, nonatomic) NSArray *windowStates;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithPinnedTabs:(id)tabs privatePinnedTabs:(id)tabs windows:(id)windows;
- (id)initWithPinnedTabs:(id)tabs privatePinnedTabs:(id)tabs windowStates:(id)states;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
@end

#endif /* WBBrowserState_h */
