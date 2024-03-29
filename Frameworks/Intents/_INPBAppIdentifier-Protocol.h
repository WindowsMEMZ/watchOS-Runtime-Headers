//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef _INPBAppIdentifier_Protocol_h
#define _INPBAppIdentifier_Protocol_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "_INPBAppIdentifier-Protocol.h"

@class NSString;

@protocol _INPBAppIdentifier <NSObject>

@property (copy, nonatomic) NSString *appName;
@property (readonly, nonatomic) BOOL hasAppName;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) BOOL hasBundleIdentifier;
@property (copy, nonatomic) NSString *bundleVersion;
@property (readonly, nonatomic) BOOL hasBundleVersion;

@end

#endif /* _INPBAppIdentifier_Protocol_h */
