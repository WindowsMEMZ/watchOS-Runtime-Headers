//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 895.0.11.0.2
//
#ifndef SMContact_h
#define SMContact_h
@import Foundation;

@class NSData, NSDate, NSString, NSURL, NSUUID;

@interface SMContact : NSObject

@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSUUID *sessionUUID;
@property (copy, nonatomic) NSData *allowReadToken;
@property (copy, nonatomic) NSData *safetyCacheKey;
@property (copy, nonatomic) NSDate *syncDate;
@property (copy, nonatomic) NSData *sharingInvitationData;
@property (copy, nonatomic) NSURL *shareURL;
@property (copy, nonatomic) NSString *participantID;

/* instance methods */
- (id)initWithIdentifier:(id)identifier sessionID:(id)id allowReadToken:(id)token safetyCacheKey:(id)key syncDate:(id)date sharingInvitationData:(id)data shareURL:(id)url participantID:(id)id;
@end

#endif /* SMContact_h */
