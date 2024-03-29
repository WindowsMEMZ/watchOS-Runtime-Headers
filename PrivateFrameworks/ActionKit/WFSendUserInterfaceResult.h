//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFSendUserInterfaceResult_h
#define WFSendUserInterfaceResult_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSArray, NSString;

@interface WFSendUserInterfaceResult : NSObject<NSSecureCoding>

@property (copy, nonatomic) NSArray *recipients;
@property (copy, nonatomic) NSString *subject;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSArray *attachments;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* WFSendUserInterfaceResult_h */
