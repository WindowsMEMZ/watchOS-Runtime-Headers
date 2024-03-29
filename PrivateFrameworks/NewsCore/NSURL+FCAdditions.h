//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef NSURL_FCAdditions_h
#define NSURL_FCAdditions_h
@import Foundation;

@interface NSURL (FCAdditions)
/* class methods */
+ (id)fc_URLWithResourceID:(id)id;
+ (id)fc_safeURLWithString:(id)string;
+ (id)fc_NewsURLForTagID:(id)id;
+ (id)fc_NewsURLForArticleID:(id)id hardPaywall:(BOOL)paywall;
+ (id)fc_NewsURLWithPathComponents:(id)components;

/* instance methods */
- (BOOL)fc_isResourceURL;
- (id)fc_resourceID;
- (BOOL)fc_isWebOptInURL;
- (BOOL)fc_hasValidArticleComponents;
- (BOOL)fc_isNewsArticleURL;
- (BOOL)fc_isNewsIssueURL;
- (BOOL)fc_isHardPaywallNewsArticleURL:(out id *)url;
- (id)fc_NewsArticleID;
- (id)fc_NewsArticleIDs;
- (id)fc_NewsIssueID;
- (BOOL)fc_isNewsURL;
- (BOOL)fc_isStocksURL;
- (BOOL)_isFeldsparOldArticleURL;
- (BOOL)fc_isFeldsparInterstitialPreviewURL;
- (BOOL)fc_isNewsTagURL;
- (id)fc_feldsparTagID;
- (BOOL)fc_isEqualToURL:(id)url;
- (BOOL)_isFeldsparOldTopicURL;
- (BOOL)_isFeldsparOldChannelURL;
- (BOOL)fc_isWebArchiveURL;
- (BOOL)fc_isHTTPScheme;
- (BOOL)fc_isStoreURL;
- (id)fc_URLByDeletingQuery;
- (id)fc_URLByDeletingFragment;
- (id)fc_URLByAddingQueryItem:(id)item;
- (BOOL)fc_directoryExists;
@end

#endif /* NSURL_FCAdditions_h */
