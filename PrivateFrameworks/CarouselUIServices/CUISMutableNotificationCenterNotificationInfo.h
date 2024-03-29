//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CUISMutableNotificationCenterNotificationInfo_h
#define CUISMutableNotificationCenterNotificationInfo_h
@import Foundation;

#include "CUISNotificationCenterNotificationInfo-Protocol.h"

@class NSArray, NSDate, NSString, NSTimeZone, UIColor, UIImage, UIView;

@interface CUISMutableNotificationCenterNotificationInfo : NSObject<CUISNotificationCenterNotificationInfo>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSArray *attachments;
@property (nonatomic) unsigned long long totalAttachmentCount;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic) unsigned long long notificationCount;
@property (nonatomic) BOOL dateIsAllDay;
@property (nonatomic) BOOL hasEventDate;
@property (retain, nonatomic) NSDate *recencyDate;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (retain, nonatomic) UIImage *icon;
@property (retain, nonatomic) UIImage *modifierIcon;
@property (nonatomic) unsigned long long notificationIconStyle;
@property (retain, nonatomic) UIColor *bodyBackgroundColor;
@property (retain, nonatomic) NSString *appName;
@property (retain, nonatomic) UIView *bodyView;
@property (nonatomic) BOOL hideHeader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)notificationInfoFrom:(id)from;

/* instance methods */
@end

#endif /* CUISMutableNotificationCenterNotificationInfo_h */
