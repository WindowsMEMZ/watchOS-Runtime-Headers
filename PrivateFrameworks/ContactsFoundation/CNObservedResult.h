//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1235.0.0.0.0
//
#ifndef CNObservedResult_h
#define CNObservedResult_h
@import Foundation;

@interface CNObservedResult : NSObject

@property (readonly) unsigned long long logTime;
@property (readonly) id logValue;
@property (readonly) BOOL isResultEvent;
@property (readonly) unsigned long long time;
@property (readonly) unsigned long long tolerance;
@property (readonly) id value;

/* class methods */
+ (id)resultWithTime:(unsigned long long)time value:(id)value;
+ (id)resultWithTime:(unsigned long long)time tolerance:(unsigned long long)tolerance value:(id)value;
+ (id)resultWithTimeInterval:(double)interval tolerance:(double)tolerance value:(id)value;
+ (id)completionResultWithTime:(unsigned long long)time;
+ (id)completionResultWithTime:(unsigned long long)time tolerance:(unsigned long long)tolerance;
+ (id)completionResultWithTimeInterval:(double)interval tolerance:(double)tolerance;
+ (id)failureWithError:(id)error time:(unsigned long long)time;
+ (id)failureWithError:(id)error time:(unsigned long long)time tolerance:(unsigned long long)tolerance;
+ (id)failureWithError:(id)error timeInterval:(double)interval tolerance:(double)tolerance;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeWithExactTime:(unsigned long long)time;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeWithTime:(unsigned long long)time tolerance:(unsigned long long)tolerance;
+ (BOOL)rangeWouldUnderflowWithTime:(unsigned long long)time tolerance:(unsigned long long)tolerance;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })underflowSafeRangeWithTime:(unsigned long long)time tolerance:(unsigned long long)tolerance;
+ (BOOL)rangeWouldOverflowWithTime:(unsigned long long)time tolerance:(unsigned long long)tolerance;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })overflowSafeRangeWithTime:(unsigned long long)time tolerance:(unsigned long long)tolerance;

/* instance methods */
- (id)initWithValue:(id)value time:(unsigned long long)time tolerance:(unsigned long long)tolerance;
- (id)formattedTimeString;
- (id)description;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })timeRange;
@end

#endif /* CNObservedResult_h */
