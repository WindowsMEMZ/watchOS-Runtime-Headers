//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1205.1.1.2.0
//
#ifndef EKSource_Saving_h
#define EKSource_Saving_h
@import Foundation;

@interface EKSource (Saving)
/* instance methods */
- (id)sortedCalendarsForEntityType:(unsigned long long)type;
- (id)sortedCalendarsForEntityType:(unsigned long long)type passingTest:(id /* block */)test;
- (BOOL)CUIKEditingContext_saveWithSpan:(long long)span error:(id *)error;
- (BOOL)CUIKEditingContext_removeWithSpan:(long long)span error:(id *)error;
@end

#endif /* EKSource_Saving_h */
