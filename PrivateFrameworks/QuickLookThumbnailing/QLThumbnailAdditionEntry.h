//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 186.2.2.0.0
//
#ifndef QLThumbnailAdditionEntry_h
#define QLThumbnailAdditionEntry_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "PQLResultSetInitializer-Protocol.h"

@class NSData, NSDate, NSString, NSURL;

@interface QLThumbnailAdditionEntry : NSObject<PQLResultSetInitializer, NSSecureCoding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property unsigned long long documentID;
@property long long size;
@property (retain) NSDate *lastHitDate;
@property (retain) NSURL *lastSeenURL;
@property (retain) NSData *vol_uuid;
@property (readonly) NSString *unparsedVolumeUUID;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initFromPQLResultSet:(id)set error:(id *)error;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* QLThumbnailAdditionEntry_h */
