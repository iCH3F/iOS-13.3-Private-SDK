//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Stocks/SCKDatabaseStoreCoordinator-Protocol.h>

@protocol OS_dispatch_queue, SCKDatabaseStore;

@interface SCKFauxDatabaseStoreCoordinator : NSObject <SCKDatabaseStoreCoordinator>
{
    id <SCKDatabaseStore> _store;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) id <SCKDatabaseStore> store; // @synthesize store=_store;
// - (void).cxx_destruct;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)writeZone:(id)arg1 withAccessor:(id /* CDUnknownBlockType */)arg2;
- (void)readZone:(id)arg1 withAccessor:(id /* CDUnknownBlockType */)arg2;
- (void)reloadWithAccessor:(id /* CDUnknownBlockType */)arg1;
- (void)writeWithAccessor:(id /* CDUnknownBlockType */)arg1;
- (void)readWithAccessor:(id /* CDUnknownBlockType */)arg1;
@property(readonly, nonatomic) id <SCKDatabaseStore> underlyingStore;
- (id)initWithDatabaseStore:(id)arg1;

@end

