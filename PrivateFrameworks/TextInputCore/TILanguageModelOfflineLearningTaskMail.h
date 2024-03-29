//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TILanguageModelOfflineLearningTaskMail_h
#define TILanguageModelOfflineLearningTaskMail_h
@import Foundation;

#include "TILanguageModelOfflineLearningTask.h"

@class NSCharacterSet, NSSet;
@protocol TILinguisticDataSource;

@interface TILanguageModelOfflineLearningTaskMail : TILanguageModelOfflineLearningTask {
  /* instance variables */
  NSCharacterSet *_linePaddingCharacters;
  NSSet *_forwardedMessageSeparators;
  NSObject<TILinguisticDataSource> *_dataSource;
}

/* class methods */
+ (id)dataSourceForTask;

/* instance methods */
- (id)initWithClientIdentifier:(id)identifier oneTimeTask:(BOOL)task;
- (id)linePaddingCharacters;
- (id)forwardedMessageSeparators;
- (id)dataSource;
@end

#endif /* TILanguageModelOfflineLearningTaskMail_h */
