//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1852.4.7.0.3
//
#ifndef _PSSuggestionFromTextPredictor_h
#define _PSSuggestionFromTextPredictor_h
@import Foundation;

@class CNContactFormatter, EKEventStore, REMStore, _CDInteractionStore;

@interface _PSSuggestionFromTextPredictor : NSObject {
  /* instance variables */
  EKEventStore *_eventStore;
  _CDInteractionStore *_interactionStore;
  CNContactFormatter *_contactFormatter;
  REMStore *_remStore;
}

/* class methods */
+ (BOOL)isEligibleUnstructuredEvent:(id)event;

/* instance methods */
- (id)initWithEventStore:(id)store interactionStore:(id)store;
- (id)suggestionFromContactPriors:(id)priors priorScoreThreshold:(float)threshold bundleID:(id)id reason:(id)reason;
- (id)suggestionFromText:(id)text priorScoreThreshold:(float)threshold bundleID:(id)id reason:(id)reason;
- (id)suggestionsFromIncompleteRemindersWithContext:(id)context startDate:(id)date endDate:(id)date priorScoreThreshold:(float)threshold;
- (id)suggestionsFromPortraitExtractionsWithContext:(id)context startDate:(id)date endDate:(id)date priorScoreThreshold:(float)threshold reason:(id)reason;
- (id)suggestionsFromUnstructuredCalendarEventsWithContext:(id)context startDate:(id)date endDate:(id)date priorScoreThreshold:(float)threshold;
@end

#endif /* _PSSuggestionFromTextPredictor_h */
