//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 895.0.11.0.2
//
#ifndef SMSuggestionsStoreProtocol_Protocol_h
#define SMSuggestionsStoreProtocol_Protocol_h
@import Foundation;

@protocol SMSuggestionsStoreProtocol <NSObject>
/* instance methods */
- (void)fetchSuggestionsWithOptions:(id)options handler:(id /* block */)handler;
- (void)fetchSuggestionsCountWithOptions:(id)options handler:(id /* block */)handler;
- (void)clearSuggestionsWithHandler:(id /* block */)handler;
- (void)storeSuggestions:(id)suggestions handler:(id /* block */)handler;
@end

#endif /* SMSuggestionsStoreProtocol_Protocol_h */
