//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef SFCollaborationCloudSharingResult_h
#define SFCollaborationCloudSharingResult_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "SFCollaborationCloudSharingMailResult.h"

@class CKShare, NSError, NSURL, NSUUID;

@interface SFCollaborationCloudSharingResult : NSObject<NSSecureCoding>

@property (readonly, copy, nonatomic) NSUUID *collaborationItemIdentifier;
@property (readonly, nonatomic) NSURL *sharingURL;
@property (readonly, nonatomic) CKShare *share;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) BOOL existingShare;
@property (retain, nonatomic) SFCollaborationCloudSharingMailResult *mailResult;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCollaborationItemIdentifier:(id)identifier sharingURL:(id)url share:(id)share error:(id)error mailResult:(id)result;
- (id)initWithCollaborationItemIdentifier:(id)identifier sharingURL:(id)url share:(id)share existingShare:(BOOL)share error:(id)error mailResult:(id)result;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* SFCollaborationCloudSharingResult_h */
