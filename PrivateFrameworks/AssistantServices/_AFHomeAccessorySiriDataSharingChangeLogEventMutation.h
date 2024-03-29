//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef _AFHomeAccessorySiriDataSharingChangeLogEventMutation_h
#define _AFHomeAccessorySiriDataSharingChangeLogEventMutation_h
@import Foundation;

#include "AFHomeAccessorySiriDataSharingChangeLogEvent.h"
#include "AFHomeAccessorySiriDataSharingChangeLogEventMutating-Protocol.h"

@class NSDate, NSString;

@interface _AFHomeAccessorySiriDataSharingChangeLogEventMutation : NSObject<AFHomeAccessorySiriDataSharingChangeLogEventMutating> {
  /* instance variables */
  AFHomeAccessorySiriDataSharingChangeLogEvent *_base;
  NSDate *_date;
  long long _previousOptInStatus;
  long long _newOptInStatus;
  long long _changeSource;
  NSString *_changeReason;
  NSString *_buildVersion;
  NSString *_productVersion;
  NSString *_schemaVersion;
  NSString *_logEventIdentifier;
  struct _mutationFlags { unsigned int x :1 isDirty; unsigned int x :1 hasDate; unsigned int x :1 hasPreviousOptInStatus; unsigned int x :1 hasNewOptInStatus; unsigned int x :1 hasChangeSource; unsigned int x :1 hasChangeReason; unsigned int x :1 hasBuildVersion; unsigned int x :1 hasProductVersion; unsigned int x :1 hasSchemaVersion; unsigned int x :1 hasLogEventIdentifier; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithBase:(id)base;
- (BOOL)isDirty;
- (id)getDate;
- (void)setDate:(id)date;
- (long long)getPreviousOptInStatus;
- (void)setPreviousOptInStatus:(long long)status;
- (long long)getNewOptInStatus;
- (void)setNewOptInStatus:(long long)status;
- (long long)getChangeSource;
- (void)setChangeSource:(long long)source;
- (id)getChangeReason;
- (void)setChangeReason:(id)reason;
- (id)getBuildVersion;
- (void)setBuildVersion:(id)version;
- (id)getProductVersion;
- (void)setProductVersion:(id)version;
- (id)getSchemaVersion;
- (void)setSchemaVersion:(id)version;
- (id)getLogEventIdentifier;
- (void)setLogEventIdentifier:(id)identifier;
@end

#endif /* _AFHomeAccessorySiriDataSharingChangeLogEventMutation_h */
