//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 64561.91.2.0.0
//
#ifndef VMUProcessDescription_h
#define VMUProcessDescription_h
@import Foundation;

#include "VMUTaskMemoryCache.h"

@class NSArray, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface VMUProcessDescription : NSObject {
  /* instance variables */
  VMUTaskMemoryCache *_memoryCache;
  int _pid;
  BOOL _taskIsCorpseOrCore;
  BOOL _taskIsTranslated;
  NSString *_hardwareModel;
  NSString *_processName;
  BOOL _processNameNeedsCorrection;
  NSString *_executablePath;
  struct _CSTypeRef { unsigned long long _opaque_1; unsigned long long _opaque_2; } _symbolicator;
  BOOL _executablePathNeedsCorrection;
  unsigned long long _executableLoadAddress;
  int _cpuType;
  unsigned int _platform;
  BOOL _is64Bit;
  struct timeval { long long tv_sec; int tv_usec; } _proc_starttime;
  NSDictionary *_lsApplicationInformation;
  NSMutableArray *_binaryImages;
  NSArray *_sortedBinaryImages;
  NSDictionary *_binaryImageHints;
  NSArray *_unreadableBinaryImagePaths;
  BOOL _binaryImagePostProcessingComplete;
  NSDictionary *_buildVersionDictionary;
  NSDictionary *_osVersionDictionary;
  NSString *_parentProcessName;
  NSString *_parentExecutablePath;
  int _ppid;
  NSDate *_date;
  NSMutableDictionary *_environment;
}

@property (readonly, nonatomic) unsigned long long physicalFootprint;
@property (readonly, nonatomic) unsigned long long physicalFootprintPeak;
@property (readonly, nonatomic) unsigned int idleExitStatus;

/* class methods */
+ (id)parseBinaryImagesDescription:(id)description;
+ (struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })symbolicatorFromBinaryImagesDescription:(id)description;
+ (struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })symbolicatorFromBinaryImagesDescription:(id)description withArchitecture:(struct _CSArchitecture { int x0; int x1; })architecture;

/* instance methods */
- (void)setCrashReporterInfo;
- (void)clearCrashReporterInfo;
- (id)initWithPid:(int)pid orTask:(unsigned int)task;
- (id)initWithTask:(unsigned int)task getBinariesList:(BOOL)list;
- (id)initWithVMUTaskMemoryCache:(id)cache getBinariesList:(BOOL)list;
- (void)initFromLiveProcess;
- (BOOL)initFromCorpseOrCore;
- (id)_readDataFromMemory:(id)memory atAddress:(unsigned long long)address size:(unsigned long long)size;
- (id)_extractInfoPlistFromSymbolOwner:(struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })owner withMemory:(id)memory;
- (void)_libraryLoaded:(struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })loaded;
- (id)date;
- (unsigned int)task;
- (int)pid;
- (BOOL)is64Bit;
- (BOOL)isTranslated;
- (int)cpuType;
- (id)processName;
- (id)processIdentifier;
- (id)displayName;
- (int)parentPid;
- (id)parentProcessName;
- (id)parentProcessPath;
- (id)processVersionDictionary;
- (id)_sanitizeVersion:(id)version;
- (id)processVersion;
- (id)executablePath;
- (id)bundleIdentifier;
- (BOOL)isAppleApplication;
- (id)_bundleLock;
- (id)binaryImages;
- (id)binaryImageDictionaryForAddress:(unsigned long long)address;
- (id)valueForEnvVar:(id)var;
- (id)_cpuTypeDescription;
- (id)_binaryImagesDescriptionForRanges:(id)ranges;
- (id)_rangesOfBinaryImages:(id)images forBacktraces:(id)backtraces;
- (id)binaryImagesDescriptionForBacktraces:(id)backtraces;
- (id)binaryImagesDescription;
- (id)_buildVersionDictionary;
- (id)_buildInfoDescription;
- (id)_osVersionDictionary;
- (id)_systemVersionDescription;
- (id)processDescriptionHeader;
- (id)dateAndVersionDescription;
- (id)analysisToolDescription;
- (id)processStatisticsDescription;
- (void)cleansePathsIncludingBinaryImageList:(BOOL)list;
- (id)description;
- (void)dealloc;
@end

#endif /* VMUProcessDescription_h */
