//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SACommandFailed_h
#define SACommandFailed_h
@import Foundation;

#include "SABaseClientBoundCommand.h"
#include "SAClientBoundCommand-Protocol.h"
#include "SAServerBoundCommand-Protocol.h"

@class NSArray, NSString;

@interface SACommandFailed : SABaseClientBoundCommand<SAServerBoundCommand, SAClientBoundCommand>

@property (nonatomic) long long errorCode;
@property (copy, nonatomic) NSString *reason;
@property (copy, nonatomic) NSString *turnId;
@property (copy, @dynamic, nonatomic) NSString *aceId;
@property (copy, @dynamic, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, @dynamic, nonatomic) NSString *appId;
@property (copy, @dynamic, nonatomic) NSArray *callbacks;

/* class methods */
+ (id)commandFailed;
+ (id)commandFailedWithDictionary:(id)dictionary context:(id)context;
+ (id)commandFailedWithErrorCode:(long long)code;
+ (id)commandFailedWithReason:(id)reason;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)initWithErrorCode:(long long)code;
- (id)initWithReason:(id)reason;
- (BOOL)requiresResponse;
@end

#endif /* SACommandFailed_h */
