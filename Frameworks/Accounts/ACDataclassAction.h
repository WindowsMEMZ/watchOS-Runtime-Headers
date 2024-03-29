//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 956.0.0.0.0
//
#ifndef ACDataclassAction_h
#define ACDataclassAction_h
@import Foundation;

#include "ACProtobufCoding-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSString;

@interface ACDataclassAction : NSObject<ACProtobufCoding, NSSecureCoding>

@property (readonly) BOOL _error;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) BOOL isDestructive;
@property (readonly, nonatomic) NSArray *affectedContainers;
@property (retain, nonatomic) NSString *undoAlertTitle;
@property (retain, nonatomic) NSString *undoAlertMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)actionWithType:(long long)type;
+ (id)destructiveActionWithType:(long long)type;
+ (id)destructiveActionWithType:(long long)type affectedContainers:(id)containers;
+ (id)_actionForError:(id)error;

/* instance methods */
- (id)initWithType:(long long)type destructivity:(BOOL)destructivity affectedContainers:(id)containers;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)_initWithProtobuf:(id)protobuf;
- (id)_initWithProtobufData:(id)data;
- (id)_encodeProtobuf;
- (id)_encodeProtobufData;
- (BOOL)isEqual:(id)equal;
- (BOOL)_isError;
@end

#endif /* ACDataclassAction_h */
