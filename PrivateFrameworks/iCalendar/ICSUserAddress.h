//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1158.1.1.0.0
//
#ifndef ICSUserAddress_h
#define ICSUserAddress_h
@import Foundation;

#include "ICSProperty.h"
#include "ICSAlternateTimeProposal.h"
#include "ICSDateValue.h"

@class NSString;

@interface ICSUserAddress : ICSProperty

@property (nonatomic) BOOL rsvp;
@property (retain, nonatomic) NSString *cn;
@property (nonatomic) int cutype;
@property (retain, nonatomic) NSString *dir;
@property (nonatomic) int partstat;
@property (nonatomic) int schedulestatus;
@property (nonatomic) int scheduleagent;
@property (nonatomic) int scheduleforcesend;
@property (nonatomic) int role;
@property (retain, nonatomic) ICSDateValue *partstatModified;
@property (nonatomic) ICSAlternateTimeProposal *alternateTimeProposal;
@property (nonatomic) BOOL x_apple_self_invited;
@property (retain, nonatomic) NSString *email;
@property (retain, nonatomic) NSString *x_apple_telephone;
@property (retain, nonatomic) NSString *likenessDataString;
@property (retain, nonatomic) NSString *x_apple_inviterName;

/* class methods */
+ (id)URLForNoMail;
+ (int)calendarUserFromICSString:(id)icsstring;
+ (int)participationStatusFromICSString:(id)icsstring;
+ (int)scheduleStatusFromICSString:(id)icsstring;
+ (int)scheduleAgentFromICSString:(id)icsstring;
+ (int)scheduleForceSendFromICSString:(id)icsstring;
+ (int)roleFromICSString:(id)icsstring;
+ (id)ICSStringFromCalendarUser:(int)user;
+ (id)ICSStringFromParticipationStatus:(int)status;
+ (id)ICSStringFromScheduleAgent:(int)agent;
+ (id)ICSStringFromScheduleStatus:(int)status;
+ (id)ICSStringFromScheduleForceSend:(int)send;
+ (id)ICSStringFromRole:(int)role;

/* instance methods */
- (void)setURL:(id)url;
- (void)fixAddress;
- (id)initWithURL:(id)url;
- (id)sanitizeAddressString:(id)string;
- (id)initWithEmailAddress:(id)address;
- (id)initWithPhoneNumber:(id)number;
- (BOOL)hasEmailAddress;
- (BOOL)isEmailAddress;
- (BOOL)isHTTPAddress;
- (BOOL)isHTTPSAddress;
- (BOOL)hasPhoneNumber;
- (BOOL)isPhoneNumber;
- (id)emailAddress;
- (id)phoneNumber;
- (id)displayName;
- (void)setX_calendarserver_email:(id)x_calendarserver_email;
- (id)x_calendarserver_email;
- (id)propertiesToObscure;
- (id)propertiesToHide;
- (BOOL)shouldObscureParameter:(id)parameter;
- (BOOL)shouldObscureValue;
@end

#endif /* ICSUserAddress_h */
