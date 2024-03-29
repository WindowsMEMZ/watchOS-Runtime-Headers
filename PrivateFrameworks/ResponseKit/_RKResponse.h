//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 200.0.0.0.0
//
#ifndef _RKResponse_h
#define _RKResponse_h
@import Foundation;

@class NSString;

@interface _RKResponse : NSObject

@property (readonly, copy) NSString *speechAct;
@property (readonly, copy) NSString *headword;
@property (readonly, copy) NSString *text;
@property (readonly) unsigned long long type;

/* instance methods */
- (id)init;
- (id)initWithSpeechAct:(id)act headword:(id)headword text:(id)text;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
@end

#endif /* _RKResponse_h */
