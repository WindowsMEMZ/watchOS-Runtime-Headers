//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef _SFMailContentProvider_h
#define _SFMailContentProvider_h
@import Foundation;

#include "_SFMailContentProviderDataSource-Protocol.h"

@interface _SFMailContentProvider : NSObject

@property (weak, nonatomic) NSObject<_SFMailContentProviderDataSource> *dataSource;
@property (nonatomic) BOOL restrictAddingPDFContent;

/* instance methods */
- (void)prepareMailComposeViewController:(id)controller withMailToURL:(id)url contentURL:(id)url preferredContentType:(long long)type completionHandler:(id /* block */)handler;
- (void)getMailComposeViewControllerWithMailToURL:(id)url contentURL:(id)url preferredContentType:(long long)type completionHandler:(id /* block */)handler;
@end

#endif /* _SFMailContentProvider_h */
