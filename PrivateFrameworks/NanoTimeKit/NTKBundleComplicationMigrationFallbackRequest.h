//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKBundleComplicationMigrationFallbackRequest_h
#define NTKBundleComplicationMigrationFallbackRequest_h
@import Foundation;

#include "NTKBundleComplicationMigrationRequest.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "NTKComplication.h"

@class CLKDevice, NSArray;

@interface NTKBundleComplicationMigrationFallbackRequest : NTKBundleComplicationMigrationRequest<NSCopying, NSSecureCoding>

@property (readonly, nonatomic) NTKComplication *complication;
@property (readonly, nonatomic) NSArray *families;
@property (readonly, nonatomic) CLKDevice *device;

/* class methods */
+ (id)requestWithComplication:(id)complication families:(id)families device:(id)device;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* NTKBundleComplicationMigrationFallbackRequest_h */
