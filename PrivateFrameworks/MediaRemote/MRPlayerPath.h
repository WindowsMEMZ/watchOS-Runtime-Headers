//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MRPlayerPath_h
#define MRPlayerPath_h
@import Foundation;

#include "MRClient.h"
#include "MROrigin.h"
#include "MRPlayer.h"
#include "MRPlayerPath.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSData;

@interface MRPlayerPath : NSObject<NSCopying, NSSecureCoding>

@property (readonly, nonatomic) _MRNowPlayingPlayerPathProtobuf *protobuf;
@property (copy, nonatomic) MROrigin *origin;
@property (copy, nonatomic) MRClient *client;
@property (copy, nonatomic) MRPlayer *player;
@property (readonly, nonatomic) MRPlayerPath *localResolvedPlayerPath;
@property (readonly, nonatomic) BOOL local;
@property (readonly, nonatomic) MRPlayerPath *skeleton;
@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, nonatomic) BOOL resolved;
@property (readonly, nonatomic) BOOL systemMediaApplication;
@property (readonly, nonatomic) BOOL systemPodcastsApplication;
@property (readonly, nonatomic) BOOL systemBooksApplication;
@property (readonly, nonatomic) BOOL homepodDemoApplication;

/* class methods */
+ (id)localPlayerPath;
+ (BOOL)supportsSecureCoding;
+ (id)anyPlayerPath;
+ (id)localResolvedPlayerPathFromPlayerPath:(id)path;

/* instance methods */
- (id)initWithOrigin:(id)origin client:(id)client player:(id)player;
- (id)initWithProtobuf:(id)protobuf;
- (id)initWithData:(id)data;
- (BOOL)isResolved;
- (BOOL)isLocal;
- (BOOL)isSystemMediaApplication;
- (BOOL)isSystemPodcastsApplication;
- (BOOL)isSystemBooksApplication;
- (BOOL)isHomepodDemoApplication;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)playerPathByRedirectingToOrigin:(id)origin;
- (id)playerPathByLocalizingWithOrigin:(id)origin;
@end

#endif /* MRPlayerPath_h */
