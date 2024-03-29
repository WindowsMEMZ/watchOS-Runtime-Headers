//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.5.0.0
//
#ifndef ICMusicSocialProfile_h
#define ICMusicSocialProfile_h
@import Foundation;

#include "ICStoreArtworkInfo.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface ICMusicSocialProfile : NSObject<NSSecureCoding, NSCopying>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *handle;
@property (readonly, nonatomic) NSString *socialProfileID;
@property (readonly, nonatomic) ICStoreArtworkInfo *artworkInfo;
@property (readonly, nonatomic) BOOL isPrivate;
@property (readonly, nonatomic) BOOL isVerified;

/* class methods */
+ (id)mediaAPIRequestURL;
+ (id)socialProfileInfoFromMediaAPIResponse:(id)apiresponse;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithMediaAPIResponse:(id)apiresponse;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* ICMusicSocialProfile_h */
