//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, TSPDescriptionGenerator;
@protocol OS_dispatch_queue, TSPArchiverManagerDelegate;

__attribute__((visibility("hidden")))
@interface TSPArchiverManager : NSObject
{
    id <TSPArchiverManagerDelegate> _delegate;
    Class _archiverClass;
    BOOL _archiverFlags;
    NSMapTable *_archivers;
    NSObject<OS_dispatch_queue> *_archiversHighQueue;
    NSObject<OS_dispatch_queue> *_archiversLowQueue;
    NSObject<OS_dispatch_queue> *_archiveHighQueue;
    NSObject<OS_dispatch_queue> *_archiveDefaultQueue;
    NSObject<OS_dispatch_queue> *_archiveLowQueue;
    NSObject<OS_dispatch_queue> *_archiveCompletionQueue;
    _Atomic char _flags;
    TSPDescriptionGenerator *_descriptionGenerator;
}

@property(retain, nonatomic) TSPDescriptionGenerator *descriptionGenerator; // @synthesize descriptionGenerator=_descriptionGenerator;
// - (void).cxx_destruct;
- (void)archiveWithArchiver:(id)arg1 queue:(id)arg2 archiveCompletion:(id /* CDUnknownBlockType */)arg3;
- (id)archiverForObject:(id)arg1 archiveQueue:(id)arg2 archiveCompletion:(id /* CDUnknownBlockType */)arg3;
- (void)stop;
- (void)performAsynchronousArchiverAccessUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (id)impl_explicitComponentRootObjectForObject:(id)arg1;
- (id)explicitComponentRootObjectForObject:(id)arg1 hasArchiverAccessLock:(BOOL)arg2;
- (void)archiveObjectWithLowPriority:(id)arg1;
- (void)archiveObjectWithHighPriority:(id)arg1;
- (void)impl_archiverForObject:(id)arg1 queue:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)archiverForObject:(id)arg1 hasArchiverAccessLock:(BOOL)arg2 queue:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 archiverClass:(Class)arg2 archiverFlags:(BOOL)arg3;
- (id)init;

@end

