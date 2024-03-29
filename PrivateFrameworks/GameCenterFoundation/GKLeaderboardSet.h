//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 818.2.23.4.1
//
#ifndef GKLeaderboardSet_h
#define GKLeaderboardSet_h
@import Foundation;

#include "GKLeaderboardSetInternal.h"
#include "NSCoding-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSString;

@interface GKLeaderboardSet : NSObject<NSCoding, NSSecureCoding>

@property (copy, @dynamic, nonatomic) NSString *title;
@property (readonly, retain, @dynamic, nonatomic) NSArray *leaderboardIdentifiers;
@property (retain) GKLeaderboardSetInternal *internal;
@property (readonly, @dynamic, nonatomic) NSString *groupIdentifier;
@property (copy, @dynamic, nonatomic) NSString *identifier;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)instanceMethodSignatureForSelector:(SEL)selector;
+ (BOOL)instancesRespondToSelector:(SEL)selector;
+ (void)loadLeaderboardSetsForGame:(id)game withCompletionHandler:(id /* block */)handler;
+ (void)loadLeaderboardSetsWithCompletionHandler:(id /* block */)handler;

/* instance methods */
- (id)initWithInternalRepresentation:(id)representation;
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (id)forwardingTargetForSelector:(SEL)selector;
- (id)methodSignatureForSelector:(SEL)selector;
- (BOOL)respondsToSelector:(SEL)selector;
- (id)valueForUndefinedKey:(id)key;
- (void)setValue:(id)value forUndefinedKey:(id)key;
- (void)loadLeaderboardsForGame:(id)game forPlayer:(id)player withCompletionHandler:(id /* block */)handler;
- (void)loadLeaderboardsWithCompletionHandler:(id /* block */)handler;
- (void)loadLeaderboardsForGame:(id)game withCompletionHandler:(id /* block */)handler;
- (void)loadLeaderboardsWithHandler:(id /* block */)handler;
@end

#endif /* GKLeaderboardSet_h */
