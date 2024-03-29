//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TITraceLog_h
#define TITraceLog_h
@import Foundation;

@class NSMutableDictionary, NSString;

@interface TITraceLog : NSObject

@property (retain, nonatomic) NSMutableDictionary *recordEntryCache;
@property (readonly, nonatomic) NSString *logContents;

/* instance methods */
- (id)initWithLogContents:(id)contents;
- (void)recordMatchingUUID:(id)uuid;
- (id)recordStringMatchingUUID:(id)uuid;
- (void)recordMatchingTypologyRecord:(id)record;
- (id)recordStringMatchingTypologyRecord:(id)record;
- (void)enumerateRecordsWithBlock:(id /* block */)block;
- (void)enumerateTextRecordEntriesUsingBlock:(id /* block */)block;
@end

#endif /* TITraceLog_h */
