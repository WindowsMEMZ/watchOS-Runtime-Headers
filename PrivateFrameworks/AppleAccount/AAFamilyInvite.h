//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (857.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 981.5.1.0.0
//
#ifndef AAFamilyInvite_h
#define AAFamilyInvite_h
@import Foundation;

@class NSNumber, NSString;

@interface AAFamilyInvite : NSObject

@property (copy, nonatomic) NSString *code;
@property (copy, nonatomic) NSString *organizerFirstName;
@property (copy, nonatomic) NSString *organizerLastName;
@property (copy, nonatomic) NSString *organizerEmail;
@property (copy, nonatomic) NSNumber *organizerDSID;
@property (copy, nonatomic) NSNumber *recepientDSID;
@property (nonatomic) BOOL isChildTransferInvite;
@property (copy, nonatomic) NSString *childFirstName;
@property (copy, nonatomic) NSString *childLastName;

/* instance methods */
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* AAFamilyInvite_h */
