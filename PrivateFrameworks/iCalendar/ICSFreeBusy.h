//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1158.1.1.0.0
//
#ifndef ICSFreeBusy_h
#define ICSFreeBusy_h
@import Foundation;

#include "ICSComponent.h"
#include "ICSDate.h"
#include "ICSDuration.h"
#include "ICSUserAddress.h"

@class NSArray, NSString;

@interface ICSFreeBusy : ICSComponent

@property (retain, @dynamic) NSArray *attendee;
@property (retain, @dynamic) ICSDate *created;
@property (retain, @dynamic) ICSDate *dtend;
@property (retain, @dynamic) ICSDate *dtstamp;
@property (retain, @dynamic) ICSDate *dtstart;
@property (retain, @dynamic) ICSDuration *duration;
@property (retain, nonatomic) NSArray *freebusy;
@property (retain, @dynamic) ICSUserAddress *organizer;
@property (retain, @dynamic) NSString *summary;
@property (retain, @dynamic) NSString *uid;
@property (retain, nonatomic) NSString *x_calendarserver_mask_uid;
@property (retain, nonatomic) NSString *x_calendarserver_extended_freebusy;

/* class methods */
+ (id)name;
@end

#endif /* ICSFreeBusy_h */
