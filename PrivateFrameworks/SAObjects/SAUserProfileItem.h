//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SAUserProfileItem_h
#define SAUserProfileItem_h
@import Foundation;

#include "AceObject.h"
#include "SAAceSerializable-Protocol.h"

@class NSData, NSString;

@interface SAUserProfileItem : AceObject<SAAceSerializable>

@property (nonatomic) BOOL activeProfile;
@property (copy, nonatomic) NSString *fullName;
@property (copy, nonatomic) NSString *profileIdentifier;
@property (copy, nonatomic) NSData *profileImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
@end

#endif /* SAUserProfileItem_h */
