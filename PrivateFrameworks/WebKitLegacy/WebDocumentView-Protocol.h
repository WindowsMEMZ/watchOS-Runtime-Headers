//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WebDocumentView_Protocol_h
#define WebDocumentView_Protocol_h
@import Foundation;

@protocol WebDocumentView <NSObject>
/* instance methods */
- (void)setDataSource:(id)source;
- (void)dataSourceUpdated:(id)updated;
- (void)setNeedsLayout:(BOOL)layout;
- (void)layout;
- (void)viewWillMoveToHostWindow:(id)window;
- (void)viewDidMoveToHostWindow;
@end

#endif /* WebDocumentView_Protocol_h */
