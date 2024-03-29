//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFWorkflowDatabaseRunDescriptor_h
#define WFWorkflowDatabaseRunDescriptor_h
@import Foundation;

#include "WFWorkflowRunDescriptor.h"

@class NSString;

@interface WFWorkflowDatabaseRunDescriptor : WFWorkflowRunDescriptor

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *name;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithName:(id)name;
- (id)initWithIdentifier:(id)identifier;
- (id)initWithIdentifier:(id)identifier name:(id)name;
- (id)initWithCoder:(id)coder;
- (id)description;
- (void)encodeWithCoder:(id)coder;
- (id)kind;
@end

#endif /* WFWorkflowDatabaseRunDescriptor_h */
