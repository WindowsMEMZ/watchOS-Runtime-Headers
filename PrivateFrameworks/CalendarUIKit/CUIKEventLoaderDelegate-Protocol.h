//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1205.1.1.2.0
//
#ifndef CUIKEventLoaderDelegate_Protocol_h
#define CUIKEventLoaderDelegate_Protocol_h
@import Foundation;

@protocol CUIKEventLoaderDelegate 
/* instance methods */
- (void)calendarEventLoader:(id)loader occurrencesDidUpdateBetweenStart:(double)start end:(double)end generation:(int)generation wasEmptyLoad:(BOOL)load;
@end

#endif /* CUIKEventLoaderDelegate_Protocol_h */
