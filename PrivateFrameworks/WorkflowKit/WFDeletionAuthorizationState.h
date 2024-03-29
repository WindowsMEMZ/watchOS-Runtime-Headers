//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFDeletionAuthorizationState_h
#define WFDeletionAuthorizationState_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "WFSerializableContent-Protocol.h"

@class NSString;

@interface WFDeletionAuthorizationState : NSObject<WFSerializableContent, NSSecureCoding>

@property (readonly, nonatomic) NSString *status;
@property (readonly, copy, nonatomic) NSString *contentItemClassName;
@property (readonly, copy, nonatomic) NSString *actionUUID;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)deniedPermissionsErrorForContentItemClass:(Class)class;
+ (id)stateFromDatabaseData:(id)data;
+ (id)objectWithWFSerializedRepresentation:(id)representation;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithStatus:(id)status contentItemClassName:(id)name actionUUID:(id)uuid count:(unsigned long long)count;
- (id)stateWithStatus:(id)status count:(unsigned long long)count;
- (id)localizedExfiltrationRestrictedError;
- (id)deniedPermissionsError;
- (id)databaseDataWithError:(id *)error;
- (id)wfSerializedRepresentation;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)siriActionToolDescription;
@end

#endif /* WFDeletionAuthorizationState_h */
