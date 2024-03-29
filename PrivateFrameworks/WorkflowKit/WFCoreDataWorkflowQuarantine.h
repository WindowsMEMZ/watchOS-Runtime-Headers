//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFCoreDataWorkflowQuarantine_h
#define WFCoreDataWorkflowQuarantine_h
@import Foundation;

#include "NSManagedObject.h"
#include "WFCoreDataWorkflow.h"

@class NSDate, NSString;

@interface WFCoreDataWorkflowQuarantine : NSManagedObject

@property (copy, @dynamic, nonatomic) NSDate *importDate;
@property (copy, @dynamic, nonatomic) NSString *sourceAppIdentifier;
@property (retain, @dynamic, nonatomic) WFCoreDataWorkflow *workflow;

/* class methods */
+ (id)fetchRequest;
@end

#endif /* WFCoreDataWorkflowQuarantine_h */
