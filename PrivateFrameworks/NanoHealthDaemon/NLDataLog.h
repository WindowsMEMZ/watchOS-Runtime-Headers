//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1880.5.0.0.0
//
#ifndef NLDataLog_h
#define NLDataLog_h
@import Foundation;

@class NSFileHandle, NSLock, NSString;

@interface NLDataLog : NSObject

@property (copy, nonatomic) NSString *path;
@property (retain, nonatomic) NSLock *logLock;
@property (retain, nonatomic) NSFileHandle *fileHandle;

/* class methods */
+ (BOOL)_enumerateLogWithFileHandle:(id)handle handler:(id /* block */)handler error:(id *)error;
+ (BOOL)_enumerateLogFromMapping:(void *)mapping size:(unsigned long long)size headerLength:(unsigned long long)length handler:(id /* block */)handler error:(id *)error;
+ (BOOL)enumerateLogFileEntries:(id)entries handler:(id /* block */)handler error:(id *)error;
+ (BOOL)_enumerateLogFile:(id)file fileHandle:(id)handle mapping:(void *)mapping length:(unsigned long long)length handler:(id /* block */)handler error:(id *)error;
+ (BOOL)_enumerateLogWithVersion:(unsigned int)version fileHandle:(id)handle mapping:(void *)mapping size:(unsigned long long)size headerLength:(unsigned long long)length handler:(id /* block */)handler error:(id *)error;

/* instance methods */
- (id)initWithPath:(id)path;
- (id)init;
- (void)dealloc;
- (BOOL)addLogMessage:(id)message metricId:(unsigned int)id error:(id *)error;
- (void)_executeAtomically:(id /* block */)atomically;
- (BOOL)_appendData:(id)data error:(id *)error;
- (id)_nameOfNextLogFile;
- (id)_sortedListOfLogFiles;
@end

#endif /* NLDataLog_h */
