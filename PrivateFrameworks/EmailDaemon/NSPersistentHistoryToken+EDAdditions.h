//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef NSPersistentHistoryToken_EDAdditions_h
#define NSPersistentHistoryToken_EDAdditions_h
@import Foundation;

@interface NSPersistentHistoryToken (EDAdditions)
/* class methods */
+ (id)ed_unarchivedTokenWithData:(id)data error:(id *)error;

/* instance methods */
- (id)ed_archiveTokenWithError:(id *)error;
@end

#endif /* NSPersistentHistoryToken_EDAdditions_h */
