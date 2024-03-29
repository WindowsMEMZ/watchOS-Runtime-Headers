//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKSharingIDSManagerHandlerDetails_h
#define PKSharingIDSManagerHandlerDetails_h
@import Foundation;

#include "PKAccountUser.h"
#include "PKFamilyMember.h"

@interface PKSharingIDSManagerHandlerDetails : NSObject

@property (readonly, nonatomic) PKFamilyMember *familyMember;
@property (readonly, nonatomic) PKAccountUser *accountUser;

/* instance methods */
- (id)initWithFamilyMember:(id)member;
- (id)initWithFamilyMember:(id)member accountUser:(id)user;
- (id)allHandles;
- (id)primaryAppleID;
- (id)aliases;
- (id)description;
@end

#endif /* PKSharingIDSManagerHandlerDetails_h */
