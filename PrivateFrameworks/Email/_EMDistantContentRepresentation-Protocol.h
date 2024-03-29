//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef _EMDistantContentRepresentation_Protocol_h
#define _EMDistantContentRepresentation_Protocol_h
@import Foundation;

@protocol _EMDistantContentRepresentation <NSObject>
/* instance methods */
- (id)requestRepresentationForItemWithObjectID:(id)id options:(id)options delegate:(id)delegate completionHandler:(id /* block */)handler;
- (id)requestUpdatedRepresentationWithCompletion:(id /* block */)completion;
- (id)performUnsubscribeAction:(unsigned long long)action completion:(id /* block */)completion;
- (void)invalidate;
@end

#endif /* _EMDistantContentRepresentation_Protocol_h */
