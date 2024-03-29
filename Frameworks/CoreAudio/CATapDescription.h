//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 290.153.3.50.1
//
#ifndef CATapDescription_h
#define CATapDescription_h
@import Foundation;

@class NSArray, NSNumber, NSString, NSUUID;

@interface CATapDescription : NSObject

@property (copy) NSString *name;
@property (copy) NSUUID *UUID;
@property (copy) NSArray *processes;
@property BOOL mono;
@property BOOL exclusive;
@property BOOL mixdown;
@property BOOL privateTap;
@property long long muteBehavior;
@property (copy) NSString *deviceUID;
@property (copy) NSNumber *stream;

/* instance methods */
- (void)setIsExclusive:(BOOL)exclusive;
- (id)initMonoMixdownOfProcessesIDs:(id)ids;
- (id)initStereoMixdownOfProcessesIDs:(id)ids;
- (id)initWithDictionary:(id)dictionary;
- (id)init;
- (id)initStereoMixdownOfProcesses:(id)processes;
- (id)initStereoGlobalTapButExcludeProcesses:(id)processes;
- (id)initMonoMixdownOfProcesses:(id)processes;
- (id)initMonoGlobalTapButExcludeProcesses:(id)processes;
- (id)initWithProcesses:(id)processes andDeviceUID:(id)uid withStream:(long long)stream;
- (BOOL)isMono;
- (BOOL)isExclusive;
- (BOOL)isMixdown;
- (BOOL)isPrivate;
- (void)setPrivate:(BOOL)private;
- (long long)isMuted;
@end

#endif /* CATapDescription_h */
