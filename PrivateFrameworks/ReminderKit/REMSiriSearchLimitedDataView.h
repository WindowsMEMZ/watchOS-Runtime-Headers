//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1004.0.0.0.0
//
#ifndef REMSiriSearchLimitedDataView_h
#define REMSiriSearchLimitedDataView_h
@import Foundation;

#include "REMStore.h"

@interface REMSiriSearchLimitedDataView : NSObject

@property (readonly, nonatomic) REMStore *store;

/* instance methods */
- (id)initWithStore:(id)store;
- (id)fetchRemindersMatchingTitle:(id)title dueAfter:(id)after dueBefore:(id)before isCompleted:(id)completed hasLocation:(id)location location:(id)location error:(id *)error;
@end

#endif /* REMSiriSearchLimitedDataView_h */
