//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDDatabaseCKOperationCompletionEvent_h
#define HMDDatabaseCKOperationCompletionEvent_h
@import Foundation;

#include "HMMLogEvent.h"

@class NSString;

@interface HMDDatabaseCKOperationCompletionEvent : HMMLogEvent

@property (readonly, copy) NSString *containerIdentifier;

/* instance methods */
- (id)initWithContainerIdentifier:(id)identifier;
@end

#endif /* HMDDatabaseCKOperationCompletionEvent_h */
