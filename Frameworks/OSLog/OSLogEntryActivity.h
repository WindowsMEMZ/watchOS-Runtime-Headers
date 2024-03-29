//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1481.40.16.0.0
//
#ifndef OSLogEntryActivity_h
#define OSLogEntryActivity_h
@import Foundation;

#include "OSLogEntry.h"
#include "OSLogEntryFromProcess-Protocol.h"

@class NSString;

@interface OSLogEntryActivity : OSLogEntry<OSLogEntryFromProcess>

@property (readonly, nonatomic) unsigned long long parentActivityIdentifier;
@property (readonly, nonatomic) unsigned long long activityIdentifier;
@property (readonly, nonatomic) NSString *process;
@property (readonly, nonatomic) int processIdentifier;
@property (readonly, nonatomic) NSString *sender;
@property (readonly, nonatomic) unsigned long long threadIdentifier;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithEventProxy:(id)proxy;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* OSLogEntryActivity_h */
