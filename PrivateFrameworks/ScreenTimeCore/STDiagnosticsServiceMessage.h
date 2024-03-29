//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 503.2.0.0.0
//
#ifndef STDiagnosticsServiceMessage_h
#define STDiagnosticsServiceMessage_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSSet, NSString;

@interface STDiagnosticsServiceMessage : NSObject<NSSecureCoding>

@property (retain) NSString *messageType;
@property (retain) NSString *sender;
@property (retain) NSSet *recipients;
@property (retain) NSString *payloadUUID;
@property long long idsInterface;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithMessageType:(id)type sender:(id)sender recipients:(id)recipients payloadUUID:(id)uuid idsInterface:(long long)interface;
- (id)description;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* STDiagnosticsServiceMessage_h */
