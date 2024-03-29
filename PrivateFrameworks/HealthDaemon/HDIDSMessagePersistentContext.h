//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDIDSMessagePersistentContext_h
#define HDIDSMessagePersistentContext_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSDate, NSDictionary, NSString;

@interface HDIDSMessagePersistentContext : NSObject<NSSecureCoding> {
  /* instance variables */
  BOOL _fromRequest;
  unsigned short _messageID;
  NSString *_idsIdentifier;
  NSString *_deviceIdentifier;
  NSDictionary *_userInfo;
  NSDate *_date;
}

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
@end

#endif /* HDIDSMessagePersistentContext_h */
