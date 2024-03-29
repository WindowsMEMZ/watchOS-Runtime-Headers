//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef _SFMailContentProviderDataSource_Protocol_h
#define _SFMailContentProviderDataSource_Protocol_h
@import Foundation;

@protocol _SFMailContentProviderDataSource <NSObject>
/* instance methods */
- (id)readerControllerForMailContentProvider:(id)provider;
- (BOOL)readerViewIsVisibleForMailContentProvider:(id)provider;
- (id)webViewForMailContentProvider:(id)provider;
- (id)printControllerForContentProvider:(id)provider;
@end

#endif /* _SFMailContentProviderDataSource_Protocol_h */
