//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3628.0.0.0.0
//
#ifndef _CNFavoritesLogger_h
#define _CNFavoritesLogger_h
@import Foundation;

#include "CNFavoritesLogger-Protocol.h"

@class NSString;
@protocol OS_os_log;

@interface _CNFavoritesLogger : NSObject<CNFavoritesLogger>

@property (readonly, nonatomic) NSObject<OS_os_log> *log;
@property (readonly, nonatomic) NSObject<OS_os_log> *summaryLog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)readingFavorites:(id /* block */)favorites;
- (void)writingFavorites:(id /* block */)favorites;
- (void)rematchingFavorites:(id /* block */)favorites;
- (void)finishedReadingRemoteFavorites;
- (void)finishedReadingFavoritesFromPath:(id)path entriesCount:(unsigned long long)count;
- (void)finishedWritingRemoteFavorites;
- (void)finishedWritingFavoritesToPath:(id)path entriesCount:(unsigned long long)count;
- (void)failedToReadRemoteFavorites:(id)favorites;
- (void)failedToReadFavoritesFromPath:(id)path error:(id)error simulateCrashReport:(BOOL)report;
- (void)failedToConvertFavoritesToPropertyList:(id)list;
- (void)failedToVerifyFavorites:(id)favorites withPropertyListFavorites:(id)favorites error:(id)error;
- (void)failedToWriteRemoteFavorites:(id)favorites;
- (void)failedToVerifyWrittenFavoritesExistsAtPath:(id)path;
- (void)failedToWriteFavoritesToPath:(id)path error:(id)error simulateCrashReport:(BOOL)report;
- (void)_simulateCrashReportWithMessage:(id)message;
- (void)reportFavoritesAccessedBeforeFirstUnlock;
@end

#endif /* _CNFavoritesLogger_h */
