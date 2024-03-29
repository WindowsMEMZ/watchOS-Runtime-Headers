//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.6.0.0
//
#ifndef ML3VirtualTable_h
#define ML3VirtualTable_h
@import Foundation;

#include "ML3DatabaseConnection.h"
#include "ML3DatabaseModule.h"
#include "ML3DatabaseModuleContext-Protocol.h"
#include "ML3DatabaseTable.h"

@class NSString;
@protocol ML3VirtualTableDelegate, struct shared_ptr<ML3VirtualTableDataSource> { struct ML3VirtualTableDataSource * x0; struct __shared_weak_count * x1; }, {shared_ptr<ML3VirtualTableDataSource>="__ptr_"^{ML3VirtualTableDataSource}"__cntrl_"^{__shared_weak_count}};

@interface ML3VirtualTable : NSObject<ML3DatabaseModuleContext> {
  /* instance variables */
  NSString *_virtualTableName;
  ML3DatabaseModule *_module;
}

@property (nonatomic) struct shared_ptr<ML3VirtualTableDataSource> { struct ML3VirtualTableDataSource * x0; struct __shared_weak_count * x1; } dataSource;
@property (weak, nonatomic) NSObject<ML3VirtualTableDelegate> *delegate;
@property (readonly, nonatomic) ML3DatabaseTable *databaseTable;
@property (readonly, nonatomic) ML3DatabaseConnection *connection;
@property (readonly, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDatabaseTable:(id)table;
- (void)dealloc;
- (BOOL)registerWithConnection:(id)connection;
- (BOOL)unregister;
@end

#endif /* ML3VirtualTable_h */
