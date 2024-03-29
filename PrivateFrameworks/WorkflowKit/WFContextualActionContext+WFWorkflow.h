//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFContextualActionContext_WFWorkflow_h
#define WFContextualActionContext_WFWorkflow_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "WFActionEventObserver-Protocol.h"
#include "WFActionGroupingCache.h"
#include "WFDatabase.h"
#include "WFDatabaseObjectObserver-Protocol.h"
#include "WFDebouncer.h"
#include "WFInputAction.h"
#include "WFNaming-Protocol.h"
#include "WFVariableAvailability.h"
#include "WFWorkflow.h"
#include "WFWorkflowNoInputBehavior-Protocol.h"
#include "WFWorkflowQuarantine.h"
#include "WFWorkflowRecord.h"
#include "WFWorkflowReference.h"
#include "WFWorkflowStorage-Protocol.h"

@class NSArray, NSData, NSString, WFIcon, WFWorkflowIcon;
@protocol WFWorkflowEditingDelegate;

@interface WFContextualActionContext (WFWorkflow)
/* class methods */
+ (id)contextForEditingWorkflow:(id)workflow inSurface:(unsigned long long)surface;
@end

#endif /* WFContextualActionContext_WFWorkflow_h */
