//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MusicKit_SoftLinking_MPLibraryKeepLocalStatusObserver_h
#define MusicKit_SoftLinking_MPLibraryKeepLocalStatusObserver_h
@import Foundation;

@class MPLibraryKeepLocalStatusObserver, MusicKit_SoftLinking_MPModelObject;

@interface MusicKit_SoftLinking_MPLibraryKeepLocalStatusObserver : NSObject {
  /* instance variables */
  MPLibraryKeepLocalStatusObserver *_underlyingLibraryKeepLocalStatusObserver;
}

@property (readonly, nonatomic) MusicKit_SoftLinking_MPModelObject *identifyingModelObject;
@property (readonly, nonatomic) struct MusicKit_SoftLinking_MPLibraryActiveKeepLocalStatus { long long x0; unsigned long long x1; double x2; } currentStatus;
@property (copy, nonatomic) id /* block */ statusBlock;

/* instance methods */
- (id)initWithIdentifyingModelObject:(id)object;
- (void)calculateDownloadProgressWithChildren:(id)children;
- (struct MusicKit_SoftLinking_MPLibraryActiveKeepLocalStatus { long long x0; unsigned long long x1; double x2; })_activeKeepLocalStatusFromUnderlyingStatus:(struct MPLibraryActiveKeepLocalStatus { long long x0; double x1; })status underlyingDownloadPauseReasons:(unsigned long long)reasons;
- (void)_handleUpdatedUnderlyingActiveKeepLocalStatus:(struct MPLibraryActiveKeepLocalStatus { long long x0; double x1; })status;
@end

#endif /* MusicKit_SoftLinking_MPLibraryKeepLocalStatusObserver_h */
