//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.6.0.0
//
#ifndef _ML3MutableDatabaseConnectionPoolDiagnostic_h
#define _ML3MutableDatabaseConnectionPoolDiagnostic_h
@import Foundation;

#include "_ML3DatabaseConnectionPoolDiagnostic.h"

@class NSArray;

@interface _ML3MutableDatabaseConnectionPoolDiagnostic : _ML3DatabaseConnectionPoolDiagnostic

@property (copy, @dynamic, nonatomic) NSArray *readerAvailableConnections;
@property (copy, @dynamic, nonatomic) NSArray *readerBusyConnections;
@property (copy, @dynamic, nonatomic) NSArray *writerAvailableConnections;
@property (copy, @dynamic, nonatomic) NSArray *writerBusyConnections;

@end

#endif /* _ML3MutableDatabaseConnectionPoolDiagnostic_h */
