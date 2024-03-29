//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3762.60.29.0.0
//
#ifndef NWConcrete_nw_read_request_h
#define NWConcrete_nw_read_request_h
@import Foundation;

#include "NWConcrete_nw_connection.h"
#include "NWConcrete_nw_read_request.h"
#include "OS_nw_content_context-Protocol.h"
#include "OS_nw_error-Protocol.h"
#include "OS_nw_fd_wrapper-Protocol.h"
#include "OS_nw_read_request-Protocol.h"

@class NSString;
@protocol OS_dispatch_data, OS_nw_array;

@interface NWConcrete_nw_read_request : NSObject<OS_nw_read_request> {
  /* instance variables */
  NWConcrete_nw_read_request *next;
  NWConcrete_nw_read_request *tail;
  id /* block */ data_completion;
  id /* block */ file_handler;
  id /* block */ data_multiple_completion;
  id /* block */ buffer_completion;
  NWConcrete_nw_connection *connection;
  unsigned int qos_class;
  int variant;
  unsigned long long min;
  unsigned long long max;
  unsigned long long progress;
  NSObject<OS_nw_fd_wrapper> *fd;
  void * progress_timer_source;
  unsigned int progress_msecs;
  char * buffer;
  NSObject<OS_dispatch_data> *data;
  NSObject<OS_nw_content_context> *context;
  NSObject<OS_nw_content_context> *repliable_message;
  NSObject<OS_nw_error> *error;
  NSObject<OS_nw_array> *read_array;
  NSObject<OS_nw_array> *context_array;
  unsigned int x :1 reported;
  unsigned int x :1 is_complete;
  unsigned int x :1 file_progress_started;
  unsigned int x :1 file_finished;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)dealloc;
@end

#endif /* NWConcrete_nw_read_request_h */
