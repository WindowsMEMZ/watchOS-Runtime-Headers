//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCCKPRequestOperationHeader_h
#define FCCKPRequestOperationHeader_h
@import Foundation;

#include "PBCodable.h"
#include "FCCKPIdentifier.h"
#include "FCCKPLocale.h"
#include "NSCopying-Protocol.h"

@class NSData, NSString;

@interface FCCKPRequestOperationHeader : PBCodable<NSCopying> {
  /* instance variables */
  unsigned long long _applicationConfigVersion;
  unsigned long long _deviceFlowControlBudget;
  unsigned long long _deviceFlowControlBudgetCap;
  unsigned long long _deviceProtocolVersion;
  unsigned long long _globalConfigVersion;
  unsigned long long _operationGroupQuantity;
  NSString *_applicationBundle;
  NSString *_applicationContainer;
  int _applicationContainerEnvironment;
  NSString *_applicationVersion;
  NSData *_clientChangeToken;
  NSString *_deviceAssignedName;
  NSString *_deviceFlowControlKey;
  float _deviceFlowControlRegeneration;
  NSString *_deviceHardwareID;
  NSString *_deviceHardwareVersion;
  FCCKPIdentifier *_deviceIdentifier;
  NSString *_deviceLibraryName;
  NSString *_deviceLibraryVersion;
  NSString *_deviceSoftwareVersion;
  int _isolationLevel;
  FCCKPLocale *_locale;
  NSString *_mmcsProtocolVersion;
  NSString *_operationGroupName;
  int _targetDatabase;
  NSString *_userIDContainerID;
  BOOL _deviceSoftwareIsAppleInternal;
  struct { unsigned int x :1 applicationConfigVersion; unsigned int x :1 deviceFlowControlBudget; unsigned int x :1 deviceFlowControlBudgetCap; unsigned int x :1 deviceProtocolVersion; unsigned int x :1 globalConfigVersion; unsigned int x :1 operationGroupQuantity; unsigned int x :1 applicationContainerEnvironment; unsigned int x :1 deviceFlowControlRegeneration; unsigned int x :1 isolationLevel; unsigned int x :1 targetDatabase; unsigned int x :1 deviceSoftwareIsAppleInternal; } _has;
}

/* instance methods */
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* FCCKPRequestOperationHeader_h */
