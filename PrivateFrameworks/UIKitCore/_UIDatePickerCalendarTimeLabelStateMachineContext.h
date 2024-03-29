//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIDatePickerCalendarTimeLabelStateMachineContext_h
#define _UIDatePickerCalendarTimeLabelStateMachineContext_h
@import Foundation;

@interface _UIDatePickerCalendarTimeLabelStateMachineContext : NSObject {
  /* instance variables */
  id /* block */ _updateHandler;
}

@property (readonly, nonatomic) unsigned long long lastDistinctState;
@property (readonly, nonatomic) unsigned long long previousState;
@property (readonly, nonatomic) unsigned long long currentState;
@property (readonly, nonatomic) unsigned long long * currentStateRef;
@property (nonatomic) BOOL isFirstResponder;

/* instance methods */
- (id)initWithUpdateHandler:(id /* block */)handler;
- (void)_updateFromState:(unsigned long long)state;
- (BOOL)currentSateCanTransitionWithEvents:(id)events;
@end

#endif /* _UIDatePickerCalendarTimeLabelStateMachineContext_h */
