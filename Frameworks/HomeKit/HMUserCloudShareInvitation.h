//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMUserCloudShareInvitation_h
#define HMUserCloudShareInvitation_h
@import Foundation;

#include "HMHome.h"
#include "HMUser.h"

@class CKDeviceToDeviceShareInvitationToken, NSString, NSURL;

@interface HMUserCloudShareInvitation : NSObject

@property (readonly) NSURL *shareURL;
@property (readonly) CKDeviceToDeviceShareInvitationToken *shareToken;
@property (readonly) NSString *containerID;
@property (readonly) HMHome *home;
@property (readonly) HMUser *user;
@property (readonly) HMUser *fromUser;

/* instance methods */
- (id)initWithUser:(id)user URL:(id)url shareToken:(id)token containerID:(id)id forHome:(id)home fromUser:(id)user;
@end

#endif /* HMUserCloudShareInvitation_h */
