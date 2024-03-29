//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TITransientLexiconManager_h
#define TITransientLexiconManager_h
@import Foundation;

#include "TISupplementalLexiconController.h"
#include "TISupplementalLexiconControllerDelegate-Protocol.h"
#include "TITransientLexiconManaging-Protocol.h"

@class NSString, NSXPCConnection;
@protocol _ICLexiconManaging;

@interface TITransientLexiconManager : NSObject<TISupplementalLexiconControllerDelegate, TITransientLexiconManaging> {
  /* instance variables */
  struct _LXLexicon * _namedEntityLexiconRef;
  struct _LXLexicon * _namedEntityPhraseLexiconRef;
  void * _namedEntityLexicons;
  void * _namedEntityPhraseLexicons;
  void * _addressBookLexicons;
  void * _appNameLexicons;
  NSObject<_ICLexiconManaging> *_inputContextLexiconManager;
  BOOL _lexiconsLoaded;
}

@property (retain, nonatomic) NSXPCConnection *_overridingCurrentConnectionForTesting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct _LXLexicon * namedEntityLexicon;
@property (readonly, nonatomic) struct _LXLexicon * namedEntityPhraseLexicon;
@property (readonly, nonatomic) TISupplementalLexiconController *ensureSupplementalLexicons;
@property (readonly, nonatomic) TISupplementalLexiconController *supplementalLexicons;
@property (nonatomic) BOOL supplementalLexiconSearchEnabled;

/* class methods */
+ (void)setSharedTITransientLexiconManager:(id)manager;
+ (id)sharedInstance;
+ (id)singletonInstance;
+ (id)getEntries:(struct _LXLexicon *)entries;

/* instance methods */
- (void)_setOverridingCurrentConnectionForTesting:(id)testing;
- (id)init;
- (void)releaseCachedLexicons;
- (void)dealloc;
- (id)_currentConnection;
- (void)registerNamedEntitiesUpdateCallback;
- (void)namedEntitiesUpdateCallback;
- (void)loadLexicons;
- (void)performMaintenance;
- (void)supplementalLexiconControllerProcessDidTerminate:(id)terminate;
- (id /* block */)addContactObserver:(id /* block */)observer;
- (void)removeContactObserver:(id /* block */)observer;
- (BOOL)searchHelper:(struct _LXLexicon *)helper forWord:(struct __CFString *)word caseSensitive:(BOOL)sensitive;
- (BOOL)searchForWord:(id)word;
- (BOOL)searchForWordCaseInsensitive:(id)insensitive;
- (void)getOnce:(id /* block */)once;
- (struct _LXLexicon *)filterLexicon:(struct _LXLexicon *)lexicon againstLocale:(struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char * x4; char x5[16] } *)locale;
- (struct _LXLexicon *)filteredLexicon:(struct _LXLexicon *)lexicon fromLexiconCache:(void *)cache forLocale:(const char *)locale;
- (struct _LXLexicon *)namedEntityLexiconForLocale:(const char *)locale;
- (struct _LXLexicon *)namedEntityPhraseLexiconForLocale:(const char *)locale;
- (struct _LXLexicon *)addressBookLexiconForLocale:(const char *)locale;
- (struct _LXLexicon *)appNameLexiconForLocale:(const char *)locale;
- (void)debugLogEntities;
- (void)provideFeedbackForString:(id)string type:(unsigned char)type style:(unsigned char)style;
- (BOOL)isSupplementalLexiconSearchEnabled;
@end

#endif /* TITransientLexiconManager_h */
