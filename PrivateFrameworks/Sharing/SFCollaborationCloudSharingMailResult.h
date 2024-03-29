//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef SFCollaborationCloudSharingMailResult_h
#define SFCollaborationCloudSharingMailResult_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class CKContainerID, NSError, NSNumber, NSString;

@interface SFCollaborationCloudSharingMailResult : NSObject<NSSecureCoding>

@property (readonly, copy, nonatomic) NSString *subject;
@property (readonly, copy, nonatomic) NSString *body;
@property (readonly, nonatomic) CKContainerID *containerID;
@property (readonly, nonatomic) NSNumber *canEdit;
@property (readonly, nonatomic) NSNumber *allowOthersToInvite;
@property (readonly, nonatomic) NSError *error;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithSubject:(id)subject body:(id)body containerID:(id)id canEdit:(id)edit allowOthersToInvite:(id)invite error:(id)error;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* SFCollaborationCloudSharingMailResult_h */
