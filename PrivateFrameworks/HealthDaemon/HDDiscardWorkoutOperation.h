//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDDiscardWorkoutOperation_h
#define HDDiscardWorkoutOperation_h
@import Foundation;

#include "HDJournalableOperation.h"

@class NSUUID;

@interface HDDiscardWorkoutOperation : HDJournalableOperation

@property (readonly, copy, nonatomic) NSUUID *builderIdentifier;

/* instance methods */
- (id)initWithBuilderIdentifier:(id)identifier;
- (BOOL)performWithProfile:(id)profile transaction:(id)transaction error:(id *)error;
@end

#endif /* HDDiscardWorkoutOperation_h */
