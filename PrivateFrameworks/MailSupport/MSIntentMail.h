//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef MSIntentMail_h
#define MSIntentMail_h
@import Foundation;

#include "INObject.h"

@class INPerson, NSArray, NSDateComponents, NSString;

@interface MSIntentMail : INObject

@property (copy, @dynamic, nonatomic) INPerson *sender;
@property (copy, @dynamic, nonatomic) NSArray *to;
@property (copy, @dynamic, nonatomic) NSArray *cc;
@property (copy, @dynamic, nonatomic) NSArray *bcc;
@property (copy, @dynamic, nonatomic) NSString *subject;
@property (copy, @dynamic, nonatomic) NSString *body;
@property (copy, @dynamic, nonatomic) NSDateComponents *dateSent;

@end

#endif /* MSIntentMail_h */
