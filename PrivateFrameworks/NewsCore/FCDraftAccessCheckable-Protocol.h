//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCDraftAccessCheckable_Protocol_h
#define FCDraftAccessCheckable_Protocol_h
@import Foundation;

@protocol FCDraftAccessCheckable <NFCopying>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSObject<FCChannelProviding> *sourceChannel;
@property (readonly, nonatomic) BOOL isDraft;
@property (readonly, nonatomic) BOOL isLocalDraft;

@end

#endif /* FCDraftAccessCheckable_Protocol_h */
