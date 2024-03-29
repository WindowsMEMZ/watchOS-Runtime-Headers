//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3301.4.1.0.0
//
#ifndef SiriCoreSQLiteStatement_h
#define SiriCoreSQLiteStatement_h
@import Foundation;

@interface SiriCoreSQLiteStatement : NSObject {
  /* instance variables */
  struct sqlite3_stmt * _impl;
  BOOL _finalizeWhenDone;
}

/* instance methods */
- (void)dealloc;
- (void)reset;
- (void)clearBindings;
- (id)initWithImpl:(struct sqlite3_stmt *)impl finalizeWhenDone:(BOOL)done;
- (struct sqlite3_stmt *)impl;
@end

#endif /* SiriCoreSQLiteStatement_h */
