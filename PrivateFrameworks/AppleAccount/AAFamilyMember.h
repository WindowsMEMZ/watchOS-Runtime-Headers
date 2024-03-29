//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (857.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 981.5.1.0.0
//
#ifndef AAFamilyMember_h
#define AAFamilyMember_h
@import Foundation;

@class NSDate, NSNumber, NSString;

@interface AAFamilyMember : NSObject

@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *lastName;
@property (copy, nonatomic) NSString *appleID;
@property (copy, nonatomic) NSNumber *personID;
@property (copy, nonatomic) NSString *personIDHash;
@property (copy, nonatomic) NSString *altDSID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSDate *joinDate;
@property (nonatomic) BOOL isMe;
@property (nonatomic) BOOL isChild;
@property (nonatomic) BOOL isSharingPurchases;
@property (nonatomic) BOOL isOrganizer;
@property (copy, nonatomic) NSString *iTunesNotLinkedMessage;
@property (copy, nonatomic) NSString *linkediTunesAppleID;
@property (copy, nonatomic) NSNumber *linkediTunesDSID;
@property (nonatomic) BOOL areParentalControlsEnabled;
@property (nonatomic) BOOL isAskToBuyEnabled;

/* instance methods */
@end

#endif /* AAFamilyMember_h */
