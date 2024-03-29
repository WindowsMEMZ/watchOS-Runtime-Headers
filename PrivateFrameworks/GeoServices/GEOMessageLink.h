//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOMessageLink_h
#define GEOMessageLink_h
@import Foundation;

#include "GEOPDMessageLink.h"

@class NSString, NSTimeZone;

@interface GEOMessageLink : NSObject {
  /* instance variables */
  GEOPDMessageLink *_messageLink;
}

@property (readonly, nonatomic) NSTimeZone *timeZone;
@property (readonly, nonatomic) NSString *messageID;
@property (readonly, nonatomic) NSString *messageURLString;
@property (readonly, nonatomic) BOOL isVerified;
@property (readonly, nonatomic) NSString *navBackgroundColorString;
@property (readonly, nonatomic) NSString *navTintColorString;

/* instance methods */
- (id)initWithMessageLink:(id)link;
- (int)responseTime;
- (id)messageBusinessHours;
@end

#endif /* GEOMessageLink_h */
