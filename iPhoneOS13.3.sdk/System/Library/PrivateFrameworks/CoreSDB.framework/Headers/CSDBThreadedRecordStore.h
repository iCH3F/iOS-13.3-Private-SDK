//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, _CSDBThreadObject;
@protocol OS_dispatch_queue;

@interface CSDBThreadedRecordStore : NSObject
{
    struct CSDBRecordStore _recordStore;
    NSObject<OS_dispatch_queue> *_recordStoreQueue;
    NSString *_identifier;
    _CSDBThreadObject *_thread;
    struct CSDBLookAsideBufferConfig _lookAsideConfig;
    BOOL _wantsRegister;
}

- (void)performBlock:(id /* CDUnknownBlockType */)arg1 afterDelay:(double)arg2;
- (void)performBlock:(id /* CDUnknownBlockType */)arg1 waitUntilDone:(BOOL)arg2;
- (BOOL)ownsCurrentThreadOtherwiseAssert:(BOOL)arg1;
- (void)registerClass:(const CDStruct_47876580 )arg1;
- (void)teardownDatabase;
- (void)_teardownDatabaseOnQueue;
- (void)setupDatabaseWithAllowLocalMigration:(BOOL)arg1 pathBlock:(id /* CDUnknownBlockType */)arg2 setupStoreHandler:(/* void * /* void * CDUnknownFunctionPointerType */ */)arg3 connectionInitializer:(/* void * /* void * CDUnknownFunctionPointerType */ */)arg4 versionChecker:(/* void * /* void * CDUnknownFunctionPointerType */ */)arg5 migrationHandler:(/* void * /* void * CDUnknownFunctionPointerType */ */)arg6 schemaVersion:(int)arg7 dataProtectionClass:(unsigned int)arg8 registerBlock:(id /* CDUnknownBlockType */)arg9;
- (void)setupDatabaseWithAllowLocalMigration:(BOOL)arg1 pathBlock:(id /* CDUnknownBlockType */)arg2 setupStoreHandler:(/* void * /* void * CDUnknownFunctionPointerType */ */)arg3 connectionInitializer:(/* void * /* void * CDUnknownFunctionPointerType */ */)arg4 versionChecker:(/* void * /* void * CDUnknownFunctionPointerType */ */)arg5 migrationHandler:(/* void * /* void * CDUnknownFunctionPointerType */ */)arg6 schemaVersion:(int)arg7 dataProtectionClass:(unsigned int)arg8 registerBlock:(id /* CDUnknownBlockType */)arg9 exclusiveOwnership:(BOOL)arg10;
- (void)dealloc;
- (id)initWithIdentifier:(struct __CFString )arg1 qosClass:(unsigned short)arg2 lookAsideConfig:(struct CSDBLookAsideBufferConfig)arg3;

@end

