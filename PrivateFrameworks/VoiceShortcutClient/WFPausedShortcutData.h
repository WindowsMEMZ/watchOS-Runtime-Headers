//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFPausedShortcutData_h
#define WFPausedShortcutData_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "WFWorkflowRunDescriptor.h"
#include "WFWorkflowRunningContext.h"

@class NSData;

@interface WFPausedShortcutData : NSObject<NSSecureCoding>

@property (retain, nonatomic) NSData *contextData;
@property (retain, nonatomic) NSData *descriptorData;
@property (retain, nonatomic) WFWorkflowRunningContext *context;
@property (retain, nonatomic) WFWorkflowRunDescriptor *descriptor;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)initWithContext:(id)context descriptor:(id)descriptor;
@end

#endif /* WFPausedShortcutData_h */
