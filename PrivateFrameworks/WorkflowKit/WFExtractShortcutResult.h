//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFExtractShortcutResult_h
#define WFExtractShortcutResult_h
@import Foundation;

#include "WFWorkflowRecord.h"

@class NSDate, NSString;

@interface WFExtractShortcutResult : NSObject

@property (readonly, nonatomic) WFWorkflowRecord *record;
@property (readonly, nonatomic) long long fileContentType;
@property (readonly, nonatomic) NSDate *sharedDate;
@property (readonly, copy, nonatomic) NSString *iCloudIdentifier;
@property (readonly, copy, nonatomic) NSString *sourceApplicationIdentifier;

/* instance methods */
- (id)initWithRecord:(id)record fileContentType:(long long)type sourceApplicationIdentifier:(id)identifier sharedDate:(id)date;
- (id)initWithRecord:(id)record fileContentType:(long long)type iCloudIdentifier:(id)identifier sourceApplicationIdentifier:(id)identifier sharedDate:(id)date;
@end

#endif /* WFExtractShortcutResult_h */
