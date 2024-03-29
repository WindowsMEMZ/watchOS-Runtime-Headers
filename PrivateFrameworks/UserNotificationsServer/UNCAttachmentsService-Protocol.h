//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 491.7.0.0.0
//
#ifndef UNCAttachmentsService_Protocol_h
#define UNCAttachmentsService_Protocol_h
@import Foundation;

@protocol UNCAttachmentsService <NSObject>
/* instance methods */
- (id)resolveAttachmentsForRequest:(id)request bundleIdentifier:(id)identifier fromLocalClientConnection:(id)connection error:(id *)error;
- (id)resolveAttachmentsSkippingErrorsForRequest:(id)request bundleIdentifier:(id)identifier fromBundleProxyForServiceExtension:(id)extension;
@end

#endif /* UNCAttachmentsService_Protocol_h */
