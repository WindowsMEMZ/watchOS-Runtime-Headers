//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2811.42.9.28.8
//
#ifndef _TtP15MapsSuggestions30MapsSuggestionsFindMyConnector__Protocol_h
#define _TtP15MapsSuggestions30MapsSuggestionsFindMyConnector__Protocol_h
@import Foundation;

@protocol MapsSuggestions.MapsSuggestionsFindMyConnector <NSObject, MapsSuggestionsObject>
/* instance methods */
- (void)listOfFriendsWithCompletionHandler:(id /* block */)handler;
- (void)locationFor:(id)for completionHandler:(id /* block */)handler;
- (void)latestLocationFor:(id)for completionHandler:(id /* block */)handler;
@end

#endif /* _TtP15MapsSuggestions30MapsSuggestionsFindMyConnector__Protocol_h */
