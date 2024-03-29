//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1228.300.81.0.0
//
#ifndef ILMessageCommunication_h
#define ILMessageCommunication_h
@import Foundation;

#include "ILCommunication.h"

@class NSString;

@interface ILMessageCommunication : ILCommunication

@property (readonly, copy, nonatomic) NSString *messageBody;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithSender:(id)sender dateReceived:(id)received messageBody:(id)body;
- (id)init;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToMessageCommunication:(id)communication;
- (unsigned long long)hash;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* ILMessageCommunication_h */
