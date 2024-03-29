//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 800.20.10.0.0
//
#ifndef NSURL_WLKAdditions_h
#define NSURL_WLKAdditions_h
@import Foundation;

@interface NSURL (WLKAdditions)
/* class methods */
+ (id)wlk_URLWithServerConfig:(id)config routeName:(id)name queryParameters:(id)parameters suppressParameterEncoding:(BOOL)encoding;
+ (id)wlk_URLWithServerConfig:(id)config endpoint:(id)endpoint relativeToBaseURL:(BOOL)url queryParameters:(id)parameters suppressParameterEncoding:(BOOL)encoding;
+ (id)wlk_sortedQueryItemsFromDictionary:(id)dictionary;
@end

#endif /* NSURL_WLKAdditions_h */
